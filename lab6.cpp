#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int zero_small(int &x, int &y)
{
	if(x < y)
	{
		x = 0;
	}
	else
	{
		y = 0;
	}
}
int main ()
{
	int no1;
	int no2;
	cout<<"Enter Two NUmbers:"<<endl;
	cin>> no1 >> no2;
	//before Zero_small
	cout<<"Before zero_small The Numbers are: no# 1 = "<<no1 <<" no# 2 = "<<no2 <<endl;
	zero_small(no1,no2);
	//after Zero_small
	cout<<"After Zero_small The Numbers are: no# 1 = "<<no1 <<" no# 2 = "<<no2 <<endl;
	return 0;
}
/* int sum(int var1,int var2)
 {
 	cout<< var1 + var2;
 }
 
 int main()
 {
 	int a;
	int b;
 	cout<<"Enter The value of a:"<<endl;
 	cin>>a;
 	cout<<"Enter The value of b:"<<endl;
 	cin>>b;
 	//sum(a, b);
 	cout<<"The Sum of "<<a<<" and "<<b<<" is ";
 	sum(a, b);
 }*/
/*int calculator()
{
	int a;
	int b;
	char operation;
	cout<<"Calculator"<<endl;
	cout<<endl;
	cin>> a >> operation >> b;
	if(operation == '+' )
	{
		int add = a + b;
		cout<<add;
	}
	else if (operation == '-')
	{
		int sub = a - b;
		cout<<sub;
	}
	else if (operation == '*')
	{
		int multi = a * b;
		cout<<multi;
	}
	else if (operation == '/')
	{
		int dvd = a / b;
		cout<<dvd;
	}
	else if (operation == '%')
	{
	   	float mod = a % b;
	   	cout<<mod;
	}
}
    int main()
  {
	calculator();
	return 0;
  }*/
	

 
 // DEMONSTRATE THE WORKING OF PASSBYVALUE AND PASSBYREFERENCE
/*int passbyvalue(string x)
 {
 	x = "\" 24BSAI014 \"";
 }
 int passbyreference(string &y)
 {
 	y = "\" 24BSAI014 \"";
 }
 int main()
 {
 	string value = " \" Asma \"";
 	string reference = "\" Asma \"";
 	// pass by value
 	cout<<"Before Pass by Value = "<<value<<endl;
 	passbyvalue(value);
 	cout<<"After Pass by Value = "<<value<<endl;
 	// pass by reference
 	cout<<"Before Pass by Reference = "<<reference<<endl;
 	passbyreference(reference);
 	cout<<"After Pass by Reference = "<<reference<<endl;
 }
 
/* int swap(int &r, int &s)
 {
 	int temp = r;
 	r = s;
 	s = temp;
 }
 int main()
 {
 	int x;
 	int y;
 	cout<<"Enter First Integer"<<endl;
 	cin>>x;
 	cout<<"Enter Second Integer"<<endl;
 	cin>>y;
 	cout<<"Before Swapping"<<endl;
 	cout<<"x = "<<x<<endl;
 	cout<<"y = "<<y<<endl;
 	 swap(x , y);
 	cout<<"After Swapping"<<endl;
 	cout<<"x = "<<x<<endl;
 	cout<<"y = "<<y<<endl;
 }*/
/*void display()
{
	cout<<"C++ programming"<<endl;
}
void showdata(string fname, string lname)
{
	string str=fname+" "+lname;
	cout<<str<<endl;
} 
int multi(int a, int b)
{
	int multiply = a * b;
   cout<<multiply<<endl;
}
int dvd(int a, int b)
{
	int division = a / b;
   cout<<division<<endl;
}
int sub(int a, int b)
{
	int subtraction = a - b;
   cout<<subtraction<<endl;
}
int add(int a, int b)
{
	int addition = a + b;
   cout<<addition<<endl;
}
int second(int a)
{
	int b = a*3600;
	cout<<b<<endl;
}
int min(int a)
{
	int b = a*60;
	cout<<b<<endl;
}
int swape(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout<<a<<endl;
	cout<<b<<endl;
}*/
/*
int calculator()
{
	int a; 
	int b;
    char  operation;
	cout<<"Enter First Number: "<<endl;
	cin>>a;
	cout<<"Enter operation: "<<endl;
	cin>>operation;
	cout<<"Enter Second Number: "<<endl;
	cin>>b;
	cout<<"The Answer is ";
	if(operation == '+' )
	{
		int add = a + b;
		cout<<add;
	}
	else if (operation == '-')
	{
		int sub = a - b;
		cout<<sub;
	}
	else if (operation == '*')
	{
		int multi = a * b;
		cout<<multi;
	}
	else if (operation == '/')
	{
		int dvd = a / b;
		cout<<dvd;
	}
	else if (operation == '%')
	{
	   	float mod = a % b;
	   	cout<<mod;
	}
}
    int main()
  {
	calculator();
	return 0;
  }
*/
/*
int area()
{
	int r;
	double pi = 3.14;
	cout<<"Enter the Radius of Circle: ";
	cin>>r;
	double c = pi * r * r;
	cout<<"The Area of Circle is = ";
	cout<<(double)c;
}
int temp()
{
	double F;
	double C;
	cout<<"Enter the Temperature in fahrenhiet is : ";
	cin>>F;
	C = (F - 32)*5/9;
	cout<<"The Temperature in Celsius is "<<(double)C<<endl;
	
}*/
/*
int main()
{
	
	area();
	temp();
	
	
	
	
	
	
	
	
		calculator();
		add(4,4);
		sub(8,2);
		multi(4,3);
		dvd(10,2);
		second(5);
		min(6);
		swape(3,4);
	return 0;
}*/
