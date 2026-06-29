#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int size = 5;
	int arr[size];
	for(int i =0; i<size; i++)
	{
		cout<<"Enter any value:"<<i<<endl;
		cin>>arr[i];
	}
	for(int j =0;j<size; j++)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}