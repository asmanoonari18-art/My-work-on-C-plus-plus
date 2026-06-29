#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	int math1[2][2];
	int math2[2][2];
	int sum[2][2];
	int sub[2][2];
	cout<<"Enter The Numbers for Calculation:"<<endl;
    cout<<"Enter Numbers of 1st Array:"<<endl;
    for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++)
    {
       cout<<"Number ["  "]["  "]"<<endl;
       cin>>math1[i][j];
	}
	}
	cout<<"Enter Numbers of 2nd Array:"<<endl;
	for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++)
    {
    	cout<<"Number ["  "]["  "]"<<endl;
       cin>>math2[i][j];
   }
}
    for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++)
    {
    	 sum[i][j] = math1[i][j] + math2[i][j];
    	 sub[i][j] = math1[i][j] - math2[i][j];
    }
}
       cout<<"Addition of Two Arrays"<<endl;
       for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++)
    {
    	cout<<sum[i][j]<< " ";
    }
    cout<<endl;
}
       cout<<"Subtraction of Two Arrays"<<endl;
       for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++)
    {
    	cout<<sub[i][j]<< " ";
    }
    cout<<endl;
}
 getch();
 return 0;


}