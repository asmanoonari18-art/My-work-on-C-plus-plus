#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
	int small[10] = {36,35,88,19,45,95,63,89,23,76};
	int smallest;
	int index;
	int size = sizeof (small) / sizeof(small[0]);
	for ( int i = 0; i < size; i++)
	{
		if( small[i] < smallest )
		{
			smallest = small[i];
			index = i;
		}
	}
	    cout<<"36,35,88,19,45,95,63, 89, 23 76"<<endl;
	    cout<<"The Smallest Number is "<<smallest<<" and The Index Of the number is "<<index;
	/*
	int value[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"The Odd Number are "<<endl;
	for (int i = 0; i < 10; i++)
	{
		
		if (value[i] % 2 != 0)
		{
			cout<<value[i]<<endl;
		}
	
	}
	*/
	/*
	float num[] = {34.5, 56.1, 23.3, 89.2, 55.8, 91.5, 77.3, 81.7, 78.5};
	int size = sizeof(num) / sizeof (num[0]);
	cout<<"Random Order"<<endl;
	cout<< "34.5"<<endl;
	cout<< "56.1"<<endl;
	cout<< "23.3"<<endl;
	cout<< "89.2"<<endl;
	cout<< "55.8"<<endl;
	cout<< "91.5"<<endl;
	cout<< "77.3"<<endl;
	cout<< "81.7"<<endl;
	cout<< "78.5"<<endl;
	sort (num, num + size);
	cout<<"Ascending Order"<<endl;
	for (int i = 0; i < 8; i++)
	{
		cout<< num[i]<<endl;
	}
	*/
	/*
	float number[5];
	float a,b,c,d,e;
	float sum;
	float avrg;
	cout<<"Enter 1st Integer Number: ";
	cin>>a;
	cout<<"Enter 2nd Integer Number: ";
	cin>>b;
	cout<<"Enter 3rd Integer Number: ";
	cin>>c;
	cout<<"Enter 4th Integer Number: ";
	cin>>d;
	cout<<"Enter 5th Integer Number: ";
	cin>>e;
	sum = a+b+c+d+e;
	avrg = sum / 5;
	cout<<"The Sum Of 5 Floating Numbers Is "<<sum<<endl;
	cout<<"The Average Of 5 Floating Numbers Is "<<avrg;
	*/
	/*
	string value[12] = {"January","February","March","April","May","June","July","August","September",
	                     "October","November","December"};
	string a;
	bool match;
	cout<<"Enter The Month name: ";
	cin>>a;
	int size = sizeof(value) / sizeof(value[0]);
	for( int i = 0; i < size; i++)
	{
		if ( value[i] == a)
		{
			cout<<"Position Of The Month "<<a<<" is "<<i<<endl;
			match = true;
			break;
		}
	}
	if (!match)
	{
		cout<<"You Enter a Wrong Value";
	}
	*/
	/*
	string value[12] = {"January","February","March","April","May","June","July","August",
	                    "September","Octomber","November","December"};
	string a;
	cout<<"Enter The Month name: ";
	cin>>a;
	if (a == "January")
	{
		cout<<"January is the first Month of the Year"<<endl;
    }
		else if (a == "February")
		{
		cout<<"February is the Second Month of the Year"<<endl;
	}
		else if (a == "March")
		{
		cout<<"March is the Third Month of the Year"<<endl;
	}
		else if  ( a == "April")
		{
		cout<<"April is the Fourth Month of the Year"<<endl;
	}
		else if ( a == "May")
		{
		cout<<"May is the Fifth Month of the Year"<<endl;
	}
		else if (a ==  "June")
		{
		cout<<"June is the Sixth Month of the Year"<<endl;
	}
		else if (a ==  "July")
		{
		cout<<"July is the Seventh Month of the Year"<<endl;
	}
		else if ( a ==  "August")
		{
		cout<<"August is the Eighth Month of the Year"<<endl;
	}
		else if ( a==  "September")
		{
		cout<<"September is the Ninth Month of the Year"<<endl;
	}
		else if ( a ==  "October")
		{
		cout<<"October is the Tenth Month of the Year"<<endl;
	}
		else if  ( a== "November")
		{
		cout<<"November is the Eleventh Month of the Year"<<endl;
	}
		else if ( a==  "December")
		{
		cout<<"December is the Twelveth Month of the Year"<<endl;
	}
		else
		{
			cout<<"Your Enter Wrong Value";
		}
	*/
	}
	
