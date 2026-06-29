#include<iostream>  
#include<conio.h>
using namespace std;
int main()
// converting temperature from Fahrenheit to celsius
{ 
   int F;
   int C;
   cout<<"The Temperature in Fahrenheit is ";
   cin>>F;
    C = (F-32)*5/9;
   cout<<"The Temperature in Celsius is "<<(double)C<<endl;
   
   getch();
   return 0;
}










/*
// Separating the integral part and decimal part
{
	float x;
	cout<<"The Decimal Number is ";
	cin>>x;
	cout<<"Integral part of Number is "<<(int)x<<endl;
	 double y = x - (int)x;
	cout<<"Fractional part of Number is "<<(double)y<<endl;
	getch();
	return 0;
}*/
/*
{
	int a= 39;
	int b= 20;
	int c= a+b;
	cout<< "The Sum of "<< a << " and " << b << " is "<<c<<endl;
	cout<< a << " + " << b << " = " << c;
	getch;
	return 0;
}*/