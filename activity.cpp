#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	  int r;  
	  float pi = 3.14;
	cout<<"Radius = ";
     cin>> r;
	cout<<"value of pi = "<<pi<<endl;
	cout<<"Area, diameter and Circumference of Circle are"<<endl;	
	cout<<"Circumference = " << 2*pi*r<<endl;
	cout<<"Area = "<<pi*r*r<<endl;
	cout<<"diameter = "<<2*r<<endl;
	getch();
	return 0;	
}