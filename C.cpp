#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
using namespace std;
int main()
/*
{ 
 cout<<"\"The sum of 20 and 39 is: 59\"";
getch();
return 0;
}*/

{
	int i, n = 9, j;
	for ( i= 1; i <= n; i++ )
	{
		for ( j= 1; j<= i; j++)
		
		cout<< "*";
		cout << endl;
	}
	getch();
	return 0;
}