create table department (
	dno int primary key,
	ename varchar(30) not null,
	salary varchar(30) not null,
	designation varchar(30) not null,
	dname varchar(30) not null,
	place varchar(30) not null);

insert into department values
	(1,"Adam",8000,'Manager','Sales','mumbai'),
	(2,'Jane',4000,'Clerk','Marketing','dkf'),
	(3,'safs',7000,'Manager','HR','daf'),
	(4,'adf',4500,'Clerk','asf','asfag'),
	(5,'dasd',6000,'Manager','afa','fsf');
select * from department;

select LOWER(ename) from department;
select UPPER(ename) from department;
select length(ename) from department;

select ename,salary,designation from department where salary > 5000 or designation ='Clerk';

select * from department where designation not in ("Clerk");
