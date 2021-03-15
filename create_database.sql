-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema Printing_trening
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema Printing_trening
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `Printing_trening` DEFAULT CHARACTER SET utf8mb4 ;
USE `Printing_trening` ;

-- -----------------------------------------------------
-- Table `Printing_trening`.`tutorial`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`tutorial` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`tutorial` (
  `tutor_id` INT(3) NOT NULL AUTO_INCREMENT,
  `tut_name` VARCHAR(50) NULL,
  `col_chap` INT(3) NULL,
  `col_subj` INT(5) NULL DEFAULT 0,
  PRIMARY KEY (`tutor_id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`tutorial_chapter`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`tutorial_chapter` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`tutorial_chapter` (
  `chapter_id` INT(10) NOT NULL AUTO_INCREMENT,
  `tutor_id` INT(3) NOT NULL,
  `chapter_name` VARCHAR(90) NULL,
  `subject_count` INT(5) NULL,
  PRIMARY KEY (`chapter_id`, `tutor_id`),
  INDEX `tutor_id_fk_idx` (`tutor_id` ASC),
  CONSTRAINT `tutor_id_fk`
    FOREIGN KEY (`tutor_id`)
    REFERENCES `Printing_trening`.`tutorial` (`tutor_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`tutorial_subject`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`tutorial_subject` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`tutorial_subject` (
  `subject_id` INT(10) NOT NULL AUTO_INCREMENT,
  `chapter_id` INT(10) NOT NULL,
  `subj_name` VARCHAR(90) NULL,
  `text` VARCHAR(10000) NULL,
  PRIMARY KEY (`subject_id`, `chapter_id`),
  INDEX `chapter_id_fk_idx` (`chapter_id` ASC),
  CONSTRAINT `chapter_id_fk`
    FOREIGN KEY (`chapter_id`)
    REFERENCES `Printing_trening`.`tutorial_chapter` (`chapter_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`user`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`user` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`user` (
  `user_id` INT(10) NOT NULL AUTO_INCREMENT COMMENT 'НУЖНА ТРАНЗАКЦИЯ НА ИЗМЕНЕНИЕ ДАННЫХ ПОЛЬЗОВАТЕЛЕМ',
  `username` VARCHAR(30) NOT NULL,
  `password` VARCHAR(30) NOT NULL,
  `image_link` BLOB NULL,
  `image_type` VARCHAR(45) NULL,
  `registration_date` DATE NULL,
  PRIMARY KEY (`user_id`, `username`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `Printing_trening`.` tutorial_progress`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.` tutorial_progress` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.` tutorial_progress` (
  `tutor_id` INT(3) NOT NULL,
  `user_id` INT(10) NOT NULL,
  `progress` INT(3) NULL DEFAULT 0,
  INDEX `fk_ tutorial_progress_user1_idx` (`user_id` ASC),
  CONSTRAINT `fk_ tutorial_progress_tutorial1`
    FOREIGN KEY (`tutor_id`)
    REFERENCES `Printing_trening`.`tutorial` (`tutor_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_ tutorial_progress_user1`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`chapter_speed`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`chapter_speed` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`chapter_speed` (
  `chapter_id` INT(10) NOT NULL,
  PRIMARY KEY (`chapter_id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`subject_status`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`subject_status` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`subject_status` (
  `user_id` INT(10) NOT NULL,
  `subject_id` INT(10) NOT NULL,
  `tutor_id` INT(3) NULL,
  `chapter_id` INT(10) NULL,
  `speed` INT(5) NULL COMMENT 'максимальная скорость по уроку',
  `rank_speed` INT(5) NULL COMMENT 'максимальная скорость по рангу',
  `rank_mistakes` INT(4) NULL COMMENT 'ошибки по рангу',
  `rank` TINYINT NULL COMMENT 'полученный ранг',
  `passed_date` DATETIME NULL,
  `passed_status` TINYINT NULL,
  `access` TINYINT NULL,
  PRIMARY KEY (`user_id`, `subject_id`),
  INDEX `fk_subject_results_tutorial_subject1_idx` (`subject_id` ASC),
  INDEX `fk_subject_status_user1_idx` (`user_id` ASC),
  CONSTRAINT `fk_subject_results_tutorial_subject1`
    FOREIGN KEY (`subject_id`)
    REFERENCES `Printing_trening`.`tutorial_subject` (`subject_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_subject_status_user1`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`subject_tasks`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`subject_tasks` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`subject_tasks` (
  `subject_id` INT(10) NOT NULL,
  `rank` TINYINT NULL,
  `rank_speed` INT(5) NULL,
  `rank_mistakes` INT(4) NULL,
  PRIMARY KEY (`subject_id`),
  INDEX `fk_subject_tasks_tutorial_subject1_idx` (`subject_id` ASC),
  CONSTRAINT `fk_subject_tasks_tutorial_subject1`
    FOREIGN KEY (`subject_id`)
    REFERENCES `Printing_trening`.`tutorial_subject` (`subject_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`slow_combinations`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`slow_combinations` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`slow_combinations` (
  `user_id` INT(10) NOT NULL,
  `comb_name` CHAR(2) NOT NULL COMMENT 'РЕАЛИЗОВАТЬ ТЕКТОВОЕ СЛИЯНИЕ',
  `comb_speed` INT(5) NULL COMMENT 'триггер на добавление уже существующей комбинации - меняем скорость',
  `frequency` INT(10) NULL COMMENT 'частота встречаемости комбинации - триггер по добавлению уже существующей комбинации',
  PRIMARY KEY (`comb_name`, `user_id`),
  INDEX `fk_slow_combinations_user2_idx` (`user_id` ASC),
  CONSTRAINT `fk_slow_combinations_user2`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `Printing_trening`.`text`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`text` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`text` (
  `text_id` INT(10) NOT NULL AUTO_INCREMENT COMMENT 'НУЖНА ТРАНЗАКЦИЯ НА УДАЛЕНИЕ/ИЗМЕНЕНИЕ ТЕКСТА ПОЛЬЗОВАТЕЛЕМ',
  `creator_id` INT(10) NULL,
  `text` VARCHAR(10000) NULL DEFAULT NULL,
  PRIMARY KEY (`text_id`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `Printing_trening`.`timestamps`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`timestamps` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`timestamps` (
  `create_time` TIMESTAMP NULL DEFAULT CURRENT_TIMESTAMP,
  `update_time` TIMESTAMP NULL);


-- -----------------------------------------------------
-- Table `Printing_trening`.`text_stats`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`text_stats` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`text_stats` (
  `user_id` INT(10) NOT NULL,
  `text_id` INT(10) NOT NULL,
  `text_stats_id` INT(10) NOT NULL AUTO_INCREMENT,
  `creator_id` INT(10) NULL,
  `max_speed` INT(5) NULL,
  `avg_speed` INT(5) NULL,
  `avg_mistakes` INT(3) NULL,
  PRIMARY KEY (`text_stats_id`),
  INDEX `fk_text_stats_text1_idx` (`text_id` ASC),
  INDEX `fk_text_stats_user1_idx` (`user_id` ASC),
  CONSTRAINT `fk_text_stats_text1`
    FOREIGN KEY (`text_id`)
    REFERENCES `Printing_trening`.`text` (`text_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_text_stats_user1`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`session`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`session` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`session` (
  `session_id` INT(10) NOT NULL AUTO_INCREMENT,
  `text_stats_id` INT(10) NOT NULL,
  `text_id` INT(10) NULL,
  `passed_date` DATETIME NULL,
  `speed` INT(5) NULL,
  `mistakes` INT(3) NULL,
  `user_id` INT(10) NULL COMMENT 'считывается из куррент даты',
  PRIMARY KEY (`session_id`, `text_stats_id`),
  INDEX `fk_session_text_stats1_idx` (`text_stats_id` ASC),
  CONSTRAINT `fk_session_text_stats1`
    FOREIGN KEY (`text_stats_id`)
    REFERENCES `Printing_trening`.`text_stats` (`text_stats_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
COMMENT = '	';


-- -----------------------------------------------------
-- Table `Printing_trening`.`current_data`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`current_data` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`current_data` (
  `connected_user_id` INT(10) NULL COMMENT 'храним подключенного пользователя ',
  `active_text_id` INT(10) NULL COMMENT 'храним запущенный текст',
  `current_tutor_id` INT(3) NULL,
  `current_chapter_id` INT(10) NULL,
  `current_subject_id` INT(10) NULL COMMENT 'храним запущенный урок')
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`user_stats`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`user_stats` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`user_stats` (
  `user_id` INT(10) NOT NULL,
  `max_speed` INT(5) NULL COMMENT 'триггер на изменения в сессиях пользователя (по айдихе) - бежит по всем сессиям пользователя и возвращает макс скорость',
  `avg_speed` INT(5) NULL COMMENT 'аналогично с макс спидом',
  `mistakes` INT(3) NULL COMMENT 'аналогично с предыдущими',
  `typed_symbols` INT(20) NULL COMMENT 'заносится в базу при пропечатывании текста',
  `session_count` INT(10) NULL COMMENT 'триггер на прохождение текстов',
  `text_stats_count` INT(10) NULL COMMENT 'триггер на количество выбранных пользователем текстов',
  PRIMARY KEY (`user_id`),
  INDEX `fk_user_stats_user1_idx` (`user_id` ASC),
  CONSTRAINT `fk_user_stats_user1`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`tutor_progress`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`tutor_progress` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`tutor_progress` (
  `user_id` INT(10) NOT NULL,
  `tutor_id` INT(3) NOT NULL,
  `progress` FLOAT NULL COMMENT 'общий прогресс обучения\nтриггер отслеживает количество пройденных уроков / на общее количество уроков в обучении',
  `passed_subject_count` INT(5) NULL COMMENT 'триггер - если прошли урок - меняем прогресс',
  `avg_rank` TINYINT NULL COMMENT 'средний ранг по обучению, триггер меняет при изменении рангов в пройденных уроках',
  `avg_mistakes` INT(3) NULL COMMENT 'средние ошибки ПО ПРОЙДЕННЫМ УРОКАМ',
  `avg_speed` INT(5) NULL,
  `first_lesson_date` DATETIME NULL COMMENT 'как только будет пройден первый урок - триггер установит его дату',
  PRIMARY KEY (`user_id`, `tutor_id`),
  INDEX `fk_tutor_progress_user1_idx` (`user_id` ASC),
  CONSTRAINT `fk_tutor_progress_tutorial1`
    FOREIGN KEY (`tutor_id`)
    REFERENCES `Printing_trening`.`tutorial` (`tutor_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_tutor_progress_user1`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`chapter_status`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`chapter_status` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`chapter_status` (
  `user_id` INT(10) NOT NULL,
  `chapter_id` INT(10) NOT NULL,
  `tutor_id` INT(3) NULL,
  `progress` FLOAT NULL COMMENT 'триггер, срабатывающий при прохождении подчинённого урока\nстарый прогресс + (1/количество уроков в главе)*100',
  `rank` TINYINT NULL COMMENT 'средний по главе ранг, триггер при прохождении подчинённого урока',
  `avg_speed` INT(5) NULL,
  `access` TINYINT NULL COMMENT 'если это первая глава, то доступ открыт\nесли другая, то триггером отслеживать прохождение предыдущей на 100%',
  `passed_subject_count` INT(5) NULL COMMENT 'количество пройденных уроков в главе, триггер бахается при прохождении урока из главы',
  PRIMARY KEY (`user_id`, `chapter_id`),
  INDEX `fk_chapter_status_user1_idx` (`user_id` ASC),
  CONSTRAINT `fk_chapter_status_tutorial_chapter1`
    FOREIGN KEY (`chapter_id`)
    REFERENCES `Printing_trening`.`tutorial_chapter` (`chapter_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_chapter_status_user1`
    FOREIGN KEY (`user_id`)
    REFERENCES `Printing_trening`.`user` (`user_id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `Printing_trening`.`main_menu_text`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `Printing_trening`.`main_menu_text` ;

CREATE TABLE IF NOT EXISTS `Printing_trening`.`main_menu_text` (
  `text_id` INT(10) NOT NULL AUTO_INCREMENT,
  `text` VARCHAR(500) NULL,
  PRIMARY KEY (`text_id`))
ENGINE = InnoDB;

USE `Printing_trening`;

DELIMITER $$

USE `Printing_trening`$$
DROP TRIGGER IF EXISTS `Printing_trening`.`subject_status_AFTER_UPDATE` $$
USE `Printing_trening`$$
CREATE  TRIGGER `Printing_trening`.`subject_status_AFTER_UPDATE` 
AFTER UPDATE ON `subject_status` FOR EACH ROW
BEGIN
	if (select s.rank from subject_status s inner join current_data c on
    c.user_id = s.user_id and c.current_subject_id = s.subject_id) >= 1
    then
		begin
			update subject_status set access = 1 
            where subject_id = (select * from (select subject_id from subject_status s inner join
            current_data c on s.user_id = c.connected_user_id and s.tutor_id = current_tutor_id where
            s.subject_id > c.current_subject_id limit 1) as i);
        end;
	end if;
END$$


USE `Printing_trening`$$
DROP TRIGGER IF EXISTS `Printing_trening`.`text_stats_AFTER_INSERT_on_session` $$
USE `Printing_trening`$$
CREATE TRIGGER `text_stats_AFTER_INSERT_on_session` 
AFTER INSERT ON `session` FOR EACH ROW
BEGIN
	update text_stats us set max_speed = (select max(speed) from session s 
    inner join current_data c on s.user_id = c.connected_user_id and s.text_id = c.active_text_id)
		where  user_id = (select * from (select user_id from text_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
      
	update text_stats us set avg_speed = (select avg(speed) from session s 
    inner join current_data c on s.user_id = c.connected_user_id and s.text_id = c.active_text_id)
		where  user_id = (select * from (select user_id from text_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
    
	update text_stats us set mistakes = (select avg(mistakes) from session s 
    inner join current_data c on s.user_id = c.connected_user_id and s.text_id = c.active_text_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
    
    update user_stats us set session_count = (select count(session_id) from session s 
    inner join current_data c on s.user_id = c.connected_user_id and s.text_id = c.active_text_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
END$$


USE `Printing_trening`$$
DROP TRIGGER IF EXISTS `Printing_trening`.`user_stats_BEFORE_INSERT_on_the_text_stats` $$
USE `Printing_trening`$$
CREATE DEFINER = CURRENT_USER TRIGGER `user_stats_BEFORE_INSERT_on_the_text_stats` 
BEFORE INSERT ON `text_stats` FOR EACH ROW
BEGIN
	update user_stats us set text_stats_count = (select count(text_stats_id) + 1 from text_stats ts 
    inner join current_data c on ts.user_id = c.connected_user_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
END$$


USE `Printing_trening`$$
DROP TRIGGER IF EXISTS `Printing_trening`.`user_stats_AFTER_INSERT_the_new_session` $$
USE `Printing_trening`$$
CREATE TRIGGER `user_stats_AFTER_INSERT_the_new_session` 
AFTER INSERT ON `session` FOR EACH ROW
BEGIN
	update user_stats us set max_speed = (select max(speed) from session s 
    inner join current_data c on s.user_id = c.connected_user_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
      
	update user_stats us set avg_speed = (select avg(speed) from session s 
    inner join current_data c on s.user_id = c.connected_user_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
    
	update user_stats us set mistakes = (select avg(mistakes) from session s 
    inner join current_data c on s.user_id = c.connected_user_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
    
    update user_stats us set session_count = (select count(session_id) from session s 
    inner join current_data c on s.user_id = c.connected_user_id)
		where  user_id = (select * from (select user_id from user_stats us 
        inner join current_data c on us.user_id = c.connected_user_id) as i);
END$$


USE `Printing_trening`$$
DROP TRIGGER IF EXISTS `Printing_trening`.`tutor_progress_AFTER_UPDATE_on_subject_status_WRONG_SCHEMA` $$
USE `Printing_trening`$$
CREATE TRIGGER `tutor_progress_AFTER_UPDATE_on_subject_status` 
AFTER UPDATE ON `subject_status` FOR EACH ROW
BEGIN
	
     if 
		(select count(subject_id) from subject_status where passed_status = 1) = 1
	then
		update tutor_progress set first_lesson_date = (select passed_date from subject_status ss inner join 
		current_data c on c.connected_user_id = ss.user_id and c.current_tutor_id = ss.tutor_id where 
        passed_status = 1)
		where tutor_id = (select * from (select tutor_id from tutor_progress t inner join 
		current_data c on t.tutor_id = c.current_tutor_id and t.user_id = c.connected_user_id) as i);
	end if;
    
    update tutor_progress set passed_subject_count = (select sum(passed_status) from subject_status ss
    inner join current_data c on c.connected_user_id = ss.user_id and c.current_tutor_id = ss.tutor_id
    where ss.passed_status = 1)
    where tutor_id = (select * from (select tutor_id from tutor_progress t inner join 
    current_data c on t.tutor_id = c.current_tutor_id and t.user_id = c.connected_user_id) as i);
    
    update tutor_progress set avg_rank = (select avg(ss.rank) from subject_status ss inner join
    current_data c on c.connected_user_id = ss.user_id and c.current_tutor_id = ss.tutor_id)
    where tutor_id = (select * from (select tutor_id from tutor_progress t inner join 
    current_data c on t.tutor_id = c.current_tutor_id and t.user_id = c.connected_user_id) as i);
    
    update tutor_progress set avg_mistakes = (select avg(rank_mistakes) from subject_status ss inner join
    current_data c on c.connected_user_id = ss.user_id and c.current_tutor_id = ss.tutor_id)
    where tutor_id = (select * from (select tutor_id from tutor_progress t inner join 
    current_data c on t.tutor_id = c.current_tutor_id and t.user_id = c.connected_user_id) as i);
    
	update tutor_progress set avg_speed = (select avg(speed) from subject_status ss inner join
    current_data c on c.connected_user_id = ss.user_id and c.current_tutor_id = ss.tutor_id)
    where tutor_id = (select * from (select tutor_id from tutor_progress t inner join 
    current_data c on t.tutor_id = c.current_tutor_id and t.user_id = c.connected_user_id) as i);
	
    
    update tutor_progress set progress = (select * from (select 
    (tp.passed_subject_count/t.col_subj) * 100 from tutor_progress tp  inner join
    current_data c on tp.user_id = c.connected_user_id and tp.tutor_id = c.current_tutor_id inner join
    tutorial t on t.tutor_id = c.current_tutor_id) as m)
    where tutor_id = (select * from (select tutor_id from tutor_progress t inner join 
    current_data c on t.tutor_id = c.current_tutor_id and t.user_id = c.connected_user_id) as i);
    
END$$


USE `Printing_trening`$$
DROP TRIGGER IF EXISTS `Printing_trening`.`chapter_status_AFTER_UPDATE_on_subject_status_WRONG_SCHEMA` $$
USE `Printing_trening`$$
CREATE  TRIGGER `chapter_status_AFTER_UPDATE_on_subject_status` 
AFTER UPDATE ON `subject_status` FOR EACH ROW
BEGIN
	
    update chapter_status set avg_speed = (select avg(speed) from subject_status ss 
    inner join current_data c on c.connected_user_id = ss.user_id and c.current_chapter_id = ss.chapter_id
    where ss.passed_status = 1)
    where chapter_status.chapter_id = ( select * from (select chapter_id from chapter_status cs 
    inner join current_data c on cs.chapter_id = c.current_chapter_id and cs.user_id = c.connected_user_id) as i);
    
	update chapter_status set ss.rank = (select avg(ss.rank) from subject_status ss 
    inner join current_data c on c.connected_user_id = ss.user_id and c.current_chapter_id = ss.chapter_id
    where ss.passed_status = 1)
    where chapter_status.chapter_id = ( select * from (select chapter_id from chapter_status cs 
    inner join current_data c on cs.chapter_id = c.current_chapter_id and cs.user_id = c.connected_user_id) as i);
	
    update chapter_status set passed_subject_count = (select count(subject_id) from subject_status ss
    inner join current_data c on c.connected_user_id = ss.user_id and c.current_chapter_id = ss.chapter_id
    where ss.passed_status = 1)
    where chapter_status.chapter_id = ( select * from (select chapter_id from chapter_status cs 
    inner join current_data c on cs.chapter_id = c.current_chapter_id and cs.user_id = c.connected_user_id) as i);
   
	update chapter_status set progress = (select * from (select ((cs.passed_subject_count/t.subject_count) * 100) from 
    chapter_status cs inner join current_data c on cs.user_id = c.connected_user_id and cs.chapter_id = c.current_chapter_id 
    inner join tutorial_chapter t on c.current_chapter_id = t.chapter_id) as m)
    where chapter_status.chapter_id = ( select * from (select chapter_id from chapter_status cs 
    inner join current_data c on cs.chapter_id = c.current_chapter_id and cs.user_id = c.connected_user_id) as i);
   
    if 
		(select progress from chapter_status cs inner join
		current_data c on c.connected_user_id = cs.user_id and c.current_chapter_id = cs.chapter_id) = 100
	then 
		update chapter_status set access = 1 
		where chapter_id = (select * from (select chapter_id from chapter_status cs inner join current_data c 
		on c.connected_user_id = cs.user_id and c.current_tutor_id = cs.tutor_id and cs.user_id = c.connected_user_id
        where cs.chapter_id > c.current_chapter_id limit 1) as i);
	 end if;
END$$


DELIMITER ;

SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
