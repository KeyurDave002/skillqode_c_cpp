

My SQL  >    ------> prompt
My SQL  >    \sql
My SQL  >    \connect root@localhost:3306
my SQL  >    show databases;----- ex-folder
Student 
syntax for creating databases
    create database <DBbname>

    for changin current database 
    use database
    show tables;

for creating table
create table <tablename>(col1 datatype(size),col2 datatype(size),col3 datatype(size),.......etc)

example- create table student (rollno int,name varchar(20),address varchar(20));
desc student;

insert database
inser into <tablename>(col1,col2,col3....)values (val1,val2,val3...);
example- insert into student(rollno,name,address)values(1,"ram","surat",);

select * from <tablename>
*------>all column

select*from student;
select name from student;-------> Name only

----------------------------------------------------------------------------------------------------------------------
insert into salesman_master values (00001,"kiran","A-4 worli","bombay",40002,"mah",3000,100,50,"good");
insert into salesman_master values (00002,"kirtan","B-44 ank","pune",354006,"guj",545,100,50,"good");
insert into salesman_master values (00003,"prashant","W-7 ada","surat",454154,"karnataka",300,100,50,"good");
insert into salesman_master values (00004,"amit","AA-65 assd","vadodara",15510,"jammu",3045,100,50,"good");
insert into salesman_master values (00005,"jayesh","l-415 subhash","ahemedabad",121454,"kashmir",30540,100,50,"good");
insert into salesman_master values (00006,"mitul","o-654 surbhi","bhavnagar",54415,"goa",3400,100,50,"good");
insert into salesman_master values (00007,"hardik","lk-45 karan","surat",400451,"gujrat",54000,100,50,"good");
insert into salesman_master values (00008,"abhay","jh-12 yogicho","vapi",40004,"kashmir",4000,100,50,"good");
insert into salesman_master values (00009,"bhavin","W-45 royal","valsad",40009,"up",300,10,50,"good");
insert into salesman_master values (00010"chirag","s-54 sas","vareli",395006,"mp",340,100,50,"good")2;
select * from sales;
--------------------------------------------------------------------------------------------------------------------------------------------------
*Where clause*
select<col> from <tablename> where <expression>
example select* from student where roll=1;
select name ,address from student where name = "ram";
---------------------------------------------------------------------------22-12-2022------------------------------------------------------------------
insert into client_master values ("C00001","ivan Bayross","A-634 sur","q-516 Aadarsh","Mumbai",400054,"Maharastra",15000);
insert into client_master values ("C00002","Mamta muzumdar","l-663 sur","L-516 har","Madras",780001,"Tamilnadu",0);
insert into client_master values ("C00003","Chhaya Bankar","P-163 sur","M-656 fas","Mumbai",400057,"maharastra",5000);
insert into client_master values ("C00004","Ashwini Joshi","H-741 sur","p-456 com","Bangalore",560001,"karnataka",0);
insert into client_master values ("C00005","Hansel Colaco","L-45 sur","I-5456 casr","Mumbai",400060,"Maharastra",2000);
insert into client_master values ("C00006","Deepak Sharma","F-43 sur","Y-546 man","Magalore",560050,"karnataka",0);
---------------------------------------------------------------------
insert into Product_Master values ("P00001","T-Shirt",5,"Pcs",200,50,350,250);
insert into Product_Master values ("P0345","Shirt",6,"Pcs",150,50,500,350);
insert into Product_Master values ("P06734","Cottan jeans",5,"Pcs"300,510,150,150);
insert into Product_Master values ("P07865","jeans",5,"Pcs",2200,250,2350,2250);
insert into Product_Master values ("P07868","trousers",2,"Pcs",200,50,30,50);
insert into Product_Master values ("P07885","Pull Over",2.5,"Pcs",600,60,50,50);
insert into Product_Master values ("P07965","Denm Shirt",4,"Pcs",400,70,350,250);
insert into Product_Master values ("P07975","lycra Top",5,"Pcs",800,80,350,240);
insert into Product_Master values ("P08865","Skirts",5,"Pcs",900,50,550,350);
-- Exercise on retrieving record from a table --
1.Find out the name of all the client.
Ans.select name from client_master;
2.Retrieve the entire contents of client_master table.
Ans.select* from client_master;
3.Retrievethe list of the name ,city,and the state of all the clients.
Ans.select name,city,state from client_master;
4.list the various product available from the Product_Master.
Ans.select description from product_master;
5.list all the clients who are locate in mumbai.
Ans.select city,name from client_master where city="mumbai";
6.find the name of salesman_master who have a salary equal to RS.3000/-.
Ans.select * from salesman_master where salamt=3000;
-- Delete table description --  23-12-22--
delete from tablename;
-- Delete table--
DROP TABLE tablename;
-- update Table --
-- Exercise on retrieving record from a table --
1.Change The City of clientno'C00005' to 'banglore'.
Ans. update client_master set clientno='C00005' where city="baglore";
2.Change the Baldue of ClientNo 'C00001' to RS.1000
Ans.update client_master set baldue=1000 where clientno='C00001';
3.Change the cost price of "Trousers" to RS 950.
Ans.update product_master set costprice=950 where description='trousers';
4. change the city of the salesman to Pune.
Ans. update salesman_master set city="Pune";


