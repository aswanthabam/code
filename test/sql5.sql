create table department (
	dno int primary key,
	dname varchar(30) not null,	
	dmanager varchar(30) not null,
	place varchar(30) not null);

insert into department values
	(1,"aaa",'AAA','FFF'),
	(2,"bbb",'BBB','GGG'),
	(3,'ccc','CCC','HHH'),
	(4,'ddd','DDD','III'),
	(5,'eee','EEE','JJJ');
create table emp (
	eno int primary key,
	ename varchar(30) not null,
	job varchar(30) not null,
	dno int not null,
	salary int not null,
	foreign key (dno) references department(dno));

alter table emp add foreign key(dno) references department(dno);

insert into emp values 
	(10,'aaaa','AAAA',1,4000),
	(20,'bbbb','BBBB',2,4500),
	(30,'cccc','CCCC',3,5000),
	(40,'dddd','DDDD',4,5500),
	(55,'eeee','EEEE',3,6000);

select ename,salary,dmanager from emp inner join department on emp.dno = department.dno where salary > 5000;

select dname,sum(salary) as TotalSalary from emp right join department on department.dno = emp.dno group by department.dno;
