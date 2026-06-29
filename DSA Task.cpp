#include<iostream>
#include<conio.h>
using namespace std;
/*
int main(){
	int num[7];
	int i = 0;
	while(i<7)
	{
		cout<<"Enter any Number at index "<<i<<":"<<endl;
		cin>>num[i];
		i++;
	}
    
	for(int j = 0; j<7; j++)
{
	   cout<<num[j]<<"  ";
	}
	return 0;	
}*/
/*
int main()
{
	int n = 6;
	int array[n] = {4,5,7,6,8,1};
	cout<<array[3]<<endl;
	int j = 3;
	while(j<n)
	{
		array[j] = array[j+1];
		j++;
	}
	 n = n-1;
	cout<<array[4];
	return 0;	
}*/
int main()
{
	string list[6] = {"Asma","Wajeeha","Anabia","Fiza","Mare","mushera"};
	for(int i= 0; i<6; i++)
	{
		if (list[i] == "Asma")
		{
			
			cout<<"index:"<<i<<" "<<"name: "<<list[i];
		}
	 } 
}