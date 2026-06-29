#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
	string day[7] = {"mon","tue","wed","thu","fri","sat","sun"};
	for ( string daysname :day)
	{
		cout<<daysname<<endl;
	}
}
/*
// size of array
int main()
{
	int size[5] = {1,2,3,4,5};
	cout<<"size of array = "<< sizeof(size[2])<<endl;
	cout<<"size of array = "<< sizeof(size);
	
}
*/
/*
// array
int main()
{
	int table[10]
	= {2,4,6,8,10,12,14,16,18,20};
	for(int i = 0; i < 10; i++)
	{
	cout<<"Table of 2 = "<<table[i]<<endl;
}
}
*/
/*
enum using loop
//enum month{
	jan,
	feb,
	mar,
	apr,
	may,
	jun,
	jul,
	aug,
	sep,
	oct,
	nov,
	Dec
};
int main()
{
	month i;
	for (int i = jan; i <= Dec; i++)
	
		cout<<i;
	
}
*/
/*
// enumeration
enum days{
	monday,
	tuesday,
	wednesday,
	thursday,
	friday,
	saturday,
	sunday
};
int main()
{
	enum days name;
	name = friday;
	cout<<name;
}
*/
/*
int maxOfNum()
{
	int num1;
	int num2;
	int num3;
cout<<"enter any three numbers"<<endl;
cin>>num1>>num2>>num3;
if(num1>num2)
{
cout<<"num1 is max"<<endl;
}
else if (num2>num3)
{
cout<<num2<<" is max"<<endl;
}
else{
cout<<num3<<" is max"<<endl;

}
}
int main()
{
   maxOfNum();
return 0;
}
*/
