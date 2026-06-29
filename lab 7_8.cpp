#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct address
{
	string name;
	string street;
	string city;
	string state;
	int zip;
};
int main()
{
	address ADDRESS_1;
	cout<<"Enter Your Detail Here:"<<endl;
	cout<<"Enter Your Name: ";
	cin>>ADDRESS_1.name ;
	cout<<"Enter Your Street: ";
	cin>>ADDRESS_1.street  ;
	cout<<"Enter Your City Name: ";
	cin>>ADDRESS_1.city  ;
	cout<<"Enter Your State Name: ";
	cin>>ADDRESS_1.state  ;
	cout<<"Enter Your Zip Code: ";
	cin>>ADDRESS_1.zip  ;
	cout<<endl<<endl;
	cout<<"Here Is Detail Of The Place Where You Live"<<endl;
	cout<<"Name = "<<ADDRESS_1.name <<endl;
	cout<<"Street = "<<ADDRESS_1.street <<endl;
	cout<<"City = "<<ADDRESS_1.city <<endl;
	cout<<"State = "<<ADDRESS_1.state <<endl;
	cout<<"Zip Code = "<<ADDRESS_1.zip <<endl;
	
}
/*
// nested structures use
struct subject
{
	string sub1;
	string sub2;
	string sub3;
	string sub4;
	string sub5;
};
struct batch
{
	string batchname;
	string department;
	string semester;
	subject subname;
};

int main()
{
	batch data;
	data.batchname = "24BSAI";
	data.department = "ARTIFICIAL INTELLIGENCE";
	data.semester = "1st Semester";
	data.subname.sub1 = "APPLIED PHYSICS";
	data.subname.sub2 = "PROGRAMMING FUNDAMENTALS";
	data.subname.sub3 = "INTRODUCTION TO INFORMATION AND COMMUNICATION TECHNOLOGY";
	data.subname.sub4 = "FUNCTIONAL ENGLISH";
	data.subname.sub5 ="PROFESSIONAL PRACTICES";
	cout<<"***** The Details of My Studies ***** "<<endl;
	cout<<"Batch Name = "<<data.batchname<<endl;
	cout<<"Department = "<<data.department<<endl;
	cout<<"Semester = "<<data.semester <<endl;
	cout<<" Subject Names "<<endl;
	cout<<"1st Subject = "<<data.subname.sub1 <<endl;
	cout<<"2nd Subject = "<<data.subname.sub2 <<endl;
	cout<<"3rd Subject = "<<data.subname.sub3 <<endl;
	cout<<"4th Subject = "<<data.subname.sub4 <<endl;
	cout<<"5th Subject = "<<data.subname.sub5 <<endl;     
}
*/
/*
void dataofcustomer(string name, long long actnumber, int balance)
{
	cout<<"-------DATA OF CUSTOMER-------"<<endl;
	cout<<"Name = "<<name<<endl;
	cout<<"Acount Number = "<<actnumber<<endl;
	cout<<"Balance of Customer in the Acount = "<<balance;
}
int main()
{
	string name;
	long long actnumber;
	int balance;
	cout<<"Enter the Name of Customer: ";
	cin>>name;
	cout<<"Enter the Acount Number Of Customer: ";
	cin>>actnumber;
	cout<<"Enter The Balance Of Customer in the Acount: ";
	cin>>balance;
	cout<<endl<<endl;
	dataofcustomer( name, actnumber, balance);
}
*/
/*
struct student
{
	int obtmark;
	int ttmark;
};
int main()
{
	student omark, tmark;
	cout<<"Enter Total Marks of Student"<<endl;
	cin>>tmark.ttmark ;
	cout<<"Enter Obtain Marks of Student"<<endl;
	cin>>omark.obtmark ;
	cout<<endl<<endl;
	cout<<"Obtain Marks = "<<omark.obtmark<<endl;
	cout<<"Total Marks = "<<tmark.ttmark <<endl;
	double percen = (double)omark.obtmark / tmark.ttmark  * 100;
	cout<<"The Percentage of Student is "<<percen<<" % .";
	
}
*/
/*
struct employees
{
	int empnumber;
	int empsalary;
};
int main()
{
	employees emp_1, emp_2;
	cout<<"Enter Details for First Employee:"<<endl;
	cout<<"Employee's Number:"<<endl;
	cin>>emp_1.empnumber;
	cout<<"Employee's Salary:"<<endl;
	cin>>emp_1.empsalary ;
	cout<<endl<<endl;
	cout<<"Enter Details for Second Employee:"<<endl;
	cout<<"Employee's Number:"<<endl;
	cin>>emp_2.empnumber;
	cout<<"Employee's Salary:"<<endl;
	cin>>emp_2.empsalary ;
	cout<<endl<<endl;
	cout<<"First Employee"<<endl;
	cout<<"Number = "<<emp_1.empnumber<<endl;
	cout<<"Salary = "<<emp_1.empsalary<<endl;
	cout<<endl<<endl;
	cout<<"Second Employee"<<endl;
	cout<<"Number = "<<emp_2.empnumber<<endl;
	cout<<"Salary = "<<emp_2.empsalary<<endl;
	return 0;
}
*/
/*
struct students   //structure decleration
{
	int rollno;
	int obtmarks;     // structure defination
	float percen;
};    // semicolcon is important 
*/
 /*struct data
 {
 	string name;
 	char hieght;
 	double percen;
 };*/
 /*struct Author
 {
 	string author1;
 	string author2;
 };
 struct Books
{
	string Bname;
	Author authorname;
};*/
/*struct student
{
	string std1;
	
};
struct subject
{
	string sub;
	student stdname;
};*/
/*struct subject
{
	string sub;
};
struct student
{
	string name;
	subject subname;
};
*/
//      enumlaton
/*
enum daysweek{ monday, tuesday, wednesday, thursday, friday, saturday, sunday
};
int main()
{
	daysweek day1 = monday;
	daysweek day2 = thursday;
	cout<<"Day 1 = "<<day1<<endl;
	cout<<"Day 2 = "<<day2<<endl;
	cout<<"Result = "<<(day2>day1);
	*/
	 
/*	student lab = {"Asma Noonari", "Programming Fundamentals"};
	cout<<lab.name <<endl;
	cout<<lab.subname.sub;*/
	/*subject AI = {"Programming Fundamentals", "Asma Noonari" };
	cout<<"Subject Name = "<<AI.sub<<endl;
	cout<<"Student Name = "<<AI.stdname.std1<<endl;
	/*
	
	
	
	
	
	
/*	Books book = {"Steal Like An Artist", "john jauv (jj)","Charles Coulomb (CC)"};
	cout<<"Book Name = "<<book.Bname<<endl;
	cout<<"Author 1 = "<<book.authorname.author1<<endl ;
	cout<<"Author 2 = "<<book.authorname.author2 ;
*/	
/*	data my = {"Asma Noonari", '4', 65.33  };
	cout<<"Name = "<<my.name <<endl;
	cout<<"Height = "<<my.hieght<<endl ;
	cout<<"percentage = "<<my.percen<<endl ;*/
	//students std2 = {14, 28, 95.56};
	//cout<<std2.percen;
   /*students std1;	 
   std1.rollno = 14;
   std1.obtmarks = 28;
   std1.percen = 95.56;
   cout<<"Roll No: "<<std1.rollno<<endl;
   cout<<"Obt Marks: "<<std1.obtmarks<<endl;
   cout<<"Percentage: "<<std1.percen<<"%" <<endl;*/
   /*
}
*/