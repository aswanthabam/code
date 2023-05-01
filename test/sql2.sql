create table department (
	ename varchar(30) not null,
	salary float not null,
	dno int primary key,
	dname varchar(30) not null,
	place varchar(30) not null);
	
insert into department values
	("aaa",4400,1,"ammm","mmmm"),
	("bbb",6000,5,"ammm","mmmmda"),
	("ccc",5500,2,"bmmm","mmmmdaf"),
	("ddd",70000,3,"cmmm","mmmmdasfa"),
	("eee",4500,4,"dmmm","kmmmmsa");
select * from department;

alter table department rename column place to city;

select * from department;

create view Star as select ename,salary,city from department;

select * from Star;

select ename,round(salary,10) from department;
