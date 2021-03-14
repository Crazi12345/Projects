#select fname,lname,address from employee where dno =5;

#select dependent_name, dependent.bdate from employee, dependent where fname = "john" and lname ="smith" and dependent.essn=employee.ssn and dependent.relationship = "Spouse" ;
#select * from employee where dno =1;
#select fname,bdate from employee order by employee.bdate;

insert into dependent values (555777222, "Joe",'M',"1992-12-12","Son");
