CREATE TABLE students (
	sno int PRIMARY KEY,
	sname VARCHAR(30) NOT NULL,
	sex CHAR NOT NULL,
	mark INT NOT NULL);

INSERT INTO students VALUES
	(1,"ASWANTH","m",40),
	(2,"SAVIN","m",35),
	(3,"ANJALI","f",35),
	(4,"ANAGHA","f",30),
	(5,"AATHIRA","f",19);

SELECT * FROM students;

ALTER TABLE students ADD COLUMN RANKK INT;
SELECT * FROM students;

SELECT sname from students where sex ="m";

select avg(mark) from students;

select sno,sname from students where mark > (select avg(mark) from students) order by mark desc;

select sname from students where sex = "f" and mark > 20 and mark < 40;

