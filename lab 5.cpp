#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	int n, num1, numF=1;
	cout<<"FACTORIAL OF NUMNBERS"<<endl;
	cout<<"Enter a Number: ";
	cin>>n;
	for (num1=1; num1<=n; num1++ )
	{
		numF *= num1; // or numF = numF * num1 
	}
	cout<<"The Factorial of "<<n<<" is "<<numF;
	getch();
	return 0;
}
/*
{
	int a,b,c=0;
	cout<<"PRIME NUMBERS"<<endl;
	cout<<"Enter a Number: ";
	cin>>a;
	    for(b=1; b<=a; b++)
    {  
	   	if (a % b == 0)
		{
		   c++;
    	} 
    }
    if(c==2)
    {
    	cout<<a<<" is a Prime Number"<<endl;
	}
	else
	{
		cout<<a<<" is a Composite Number";
	}  
}*/
/*
{
	char z;
	cout<<"ASCII CODE from A to Z"<<endl;
	for (z=65; z<=90; z++)
	cout<<"  "<<z<<endl;
}*/
/*
{	int n;
	// odd numbers using for loop
	cout<<"Series of ODD Numbers using \"FOr\" LOOP "<<endl;
	for(n=1; n<=20; n++) //no semicolon
	{
		cout<<" "<<n<<endl;
		n += 1;
	}
	// odd numbers using while loop
	cout<<"Series of ODD Numbers using \"WHILE\" LOOP "<<endl;
	int x=1;
	while (x<=20)
	{
		cout<<" "<<x<<endl;
		x +=2;
	}
	// even numbers using for loop
	cout<<"Series of EVEN Numbers using \"FOr\" LOOP"<<endl;
	int a;
	{
	for (a=0; a<=20; a +=2)
	cout<<" "<<a<<endl;
    }
    //  even numbers using while loop
    cout<<"Series of EVEN Numbers using \"WHILE\" LOOP"<<endl;
	int y=0;
	while (y<=20)
	{
		cout<<" "<<y<<endl;
		y += 2;
	}
	getch();
	return 0;
}*/
/*
{
	int r;
	for (r=1; r<=56; r++)
	{
		cout<<"24BSAI"<<r<<endl;
	}
	getch();
	return 0;
}*/
/* //while loop
{
  int table, num=1;
  cout<<"Enter the number:";
  cin>>table;
  while (num<=10)
  {
  	int result = table * num;
  	cout<<table<<" * "<<num<<" = "<<result<<endl;
  	num++;	
  }
 getch();
 return 0;
}*/
/*
{
	int num1,num2;
	char ch1;
	while(ch1 != 'n')
	{
		cout<<"enter first number: ";
		cin>>num1;
		cout<<"enter second number: ";
		cin>>num2;
		cout<<"sum = "<<num1 + num2<<endl;
		cout<<"Do You want to Continue(y/n)";
		cin>>ch1;
		cout<<endl; 
	}
	cout<<"End of Program";
	getch();
	return 0;
}*/
/*
 //do while loop
{
	int x,y=1;
	cout<<"Enter a Number: ";
	cin>>x;
	do
	{
		int result = x*y;
		cout<<x<<" * "<<y<<" = "<<result<<endl;
		y++;
	}
	while (y<=15);
	
	getch();
	return 0;
}*/
/*
{
	int i;
	for( i=1; i<=10; i++)
	{
		if (i%2 == 0)
		continue;
		cout<<"Number = "<<i<<endl; // this cout is not part of if statement
	}
 getch();
 return 0;
}*/
/*
{
	int n;
	double sum = 0;
	  for (n=1; n<=100; n++)
	   {
		sum += n;	
	   }
	cout<<"The Sum of First Hundered Natural Numbers is "<<sum<<endl;
    	double average = sum/100;
	cout<<"The Average of first Hundered Natural Numbers is "<<(double)average<<endl;

getch();
return 0;
}*/





