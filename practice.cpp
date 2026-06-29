#include<iostream>
#include<conio.h>
using namespace std;
bool prime(int n)
{
	if ( n <= 1)
	{
		cout<<"negative number"<<endl;
	}
	for(int i = 2; i <= n/2; ++i)
	{
		if(n%i == 0)
		
			return false;
	}
		
		
			return true;
		
	
	
}
int main()
{
	int num ;
	cout<<"enter";
	cin>>num;
	if(prime(num))
	{
		cout<<"prime number"<<endl;
	}
	else
	{
		cout<<"not prime";
	}
}
/*
int math(int a, int b, int c)
{
	int sum;
	sum = a+b+c;
	cout<<sum;
}
int main()
{
	math(8,3,1);
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

// Function to calculate factorial using pass by reference
void factorialReference(int &n, int &result) {
    result = 1; // Initialize result
    for (int i = 1; i <= n; i++) {
        result *= i; // Update result
    }
}

int main() {
    int num, result;
    cout << "Enter a number to find its factorial: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        factorialReference(num, result);
        cout << "The factorial of " << num << " is: " << result << endl;
    }

    return 0;
}
*/