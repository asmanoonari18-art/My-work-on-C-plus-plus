#include<iostream>
#include<conio.h>
using namespace std;
/*
// factorail task
int factorial(int num) 
{
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i; 
    }
    return result;
}

int main() {
    int num1;
    cout << "Enter a number to calculate its factorial: ";
    cin >> num1;

   if (num1 < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(num1); 
        cout << "The factorial of " << num1 << " is " << result << endl;
    }

    return 0;
}*/

/*
// three max numbers
int maximumNum(int x, int y, int z)
 {
    int max = x; 
    if (y > max)
	 {
        max = y; 
    }
    if (z > max)
	 {
        max = z; 
    }
    return max; 
}

int main()
 {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
        int maximum = maximumNum(num1, num2, num3);
    cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is " << maximum << endl;

    return 0;
}
*/

/*
// factors of NUmbers
int findFactors(int n)
 {
    cout << "The factors of " << n << " are: ";
    for (int i = 1; i <= n; i++)
	 {
        if (n % i == 0) 
		{  
            cout << i << " "; 
        }
	 }
    cout << endl;
 }
int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    findFactors(num);
    return 0;
}
*/





// prime NUmbers
int primeNum()
{
	int a;
	int b;
	int c = 0;
	cout<<"PRIME NUMBERS"<<endl;
	cout<<endl;
	cout<<"Enter a Number: ";
	cin>>a;
	for(b= 1; b<=a; b++) 
	{
      	if( a % b == 0 )
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
	cout<<a<<" is a Composite Number"<<endl;
   }	  
}
int main () 
{
    primeNum();     
   return 0;
}


/*
{
	float a;
	cout<<"the decimal number = ";
	cin>>a;
	cout<<"integer part"<<(int)a<<endl;
    float b = a - (int)a;
	cout<<"decimal part"<<b;
	
}*/