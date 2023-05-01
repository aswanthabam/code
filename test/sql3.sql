create table emp (
	eno int primary key,
	ename varchar(30) not null,
	job varchar(30) not null,
	manager varchar(30) not null,
	salary int not null);

insert into emp values
	(1,"aaa","aaaaaa","aaaaaaaaaaa",4500),
	(2,"bbb","bbbbbb","bbbbbbbbbbb",5000),
	(3,"ccc","ccccc","cccccccccc",5500),
	(4,"ddd","Dddd","ddddddd",6000),
	(5,"eee","EEEE","eeeeeeE",6600);

select * from emp;

alter table emp add column new_salary int;

update emp set new_salary = round(salary * 1.2);

alter table emp rename column new_salary to `New Salary`;

select * from emp;

create view empview as select eno,ename as EMPLOY from emp;

select * from empview;

select * from emp where ename like "%T%";
