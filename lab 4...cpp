#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
/*
{  
int num = -10;
if (num > 0)//here no semicolon 
//brakets are important in if condition outside it condition does not work
{
cout<<"It is a positive Number"<<endl;
}
cout<<"this is fix output";
getch();
return 0;
}*/
/*
{
	int myRoll;
	cout<<"Input My Roll Number: ";
	cin>>myRoll;
	if (myRoll == 14)
	{
	  cout<<"My Name is Asma Nooanri."<<endl;
	  cout<<"I am student of Artificail Intelligence, Mehran Jamshoro.";	
	}
	else
	{
		cout<<"Roll no does not belong to this list";
	}
	getch();
	return 0;
}*/
// nested if condition
/*{
	int a = 30;
	if (a>10)
{
	if(a<50)
	{
	    cout<<"Number = 30"<<endl;
		cout<<"statement is true"<<endl;
		cout<<"end of second if"<<endl;
			}
		cout<<"end of first if"<<endl;	
}
cout<<"program end";
getch();
return 0;
}*/

{
	int age;
	cout<<"Eligible Age Limit for Job"<<endl;
	cout<<"Enter Age = ";
	cin>>age;
	if (age<=60)
	{
		if (age>23)
		{
			cout<<"the Client is Eligible for the Government Job."<<endl;
		}
		else{
		cout<<"the Client is not Eligible for the Government Job Because the Client is under 23.";
	        }
	}
	getch();
	return 0;
}


	