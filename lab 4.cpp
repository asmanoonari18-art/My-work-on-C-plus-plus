#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
	int num1, num2;
	char opreation;
	cout<<"Calculate the following Opreations"<<endl;
	cout<<"Opreations are ( +,-,*,/,% )"<<endl;
	cout<<"Enter the first Number:";
		cin>>num1;
	cout<<"Enter the opreation you want to calculate:";
		cin>>opreation;
	cout<<"Enter the second Number:";
		cin>>num2;
	switch (opreation)
	{
	    case '+' :
			cout<<"Adittion = "<<(num1+num2)<<endl;
			break;	
		case '-' :
			cout<<"Subtraction = "<<(num1-num2)<<endl;
		    break;	
		case '*' :
			cout<<"Multipication = "<<(num1*num2)<<endl;
			break;
		case '/' :
			cout<<"Division = "<<(num1/num2)<<endl;
			break;
		case '%' :
			cout<<"Remainder = "<<(num1%num2)<<endl;
			break;
	}
	getch();
	return 0;
 } 

/*
{  
int num;
    cout<<"Enter any Number: ";
    cin>>num;
if (num > 0)
  {
    cout<<"It is a positive Number"<<endl;
  }
else
  {
  	cout<<"It is a Negative Number";
  }
getch();
return 0;
}*/
/*
{
	int myRoll;
	cout<<"Input My Roll Number: ";
	cin>>myRoll;
	if (myRoll == 14)//here no semicolon 
//brakets are important in if condition outside it condition does not work
	{
	  cout<<"My Name is Asma Nooanri."<<endl;
	  cout<<"I am student of Artificail Intelligence, Mehran Jamshoro.";	
	}
	else
	{
		cout<<"Roll no does not belong to this list";
	}
	getch();
	return 0;
}*/
// nested if condition
/*{
	int a = 30;
	if (a>10)
{
	if(a<50)
	{
	    cout<<"Number = 30"<<endl;
		cout<<"statement is true"<<endl;
		cout<<"end of second if"<<endl;
			}
		cout<<"end of first if"<<endl;	
}
cout<<"program end";
getch();
return 0;
}*/
/*
{
	int age;
	cout<<"Eligible Age Limit for Voting"<<endl;
	cout<<"Enter Age = ";
	cin>>age;
	if (age>=18)
	{
		cout<<"You are Eligible for vote in Election."<<endl;
    }  
		else{
		cout<<"Sorry! You not Eligible for the vote in Election Because you are under 18.";
	        }
	
	getch();
	return 0;
}*/


/*
int main()
{
	char alphabet = 'a,e,i,o,u';
	cout<<"Enter the Alphabet:";
	cin>>alphabet;
	switch(alphabet)
	{
	  case 'a':
	  case 'A':
		 cout<<"This Alhpabet is a vowel."<<endl;
	     break;
      case 'e':
	  case 'E':
    	 cout<<"This Alhpabet is a vowel."<<endl;
	     break;
      case 'i':
	  case 'I':
    	 cout<<"This Alhpabet is a vowel."<<endl;
	     break;
	  case 'o':
	  case 'O':
		 cout<<"This Alhpabet is a vowel."<<endl;
	     break;
	  case 'u':
	  case 'U':
		 cout<<"This Alhpabet is a vowel."<<endl;
		 break;
	  default:
		cout<<"This Alphabet is a Consonanat";
	}
	getch();
	return 0;
}*/
/*
int main()
{
	int number1,number2;
	cout<<"Input the first Number: ";
	cin>>number1;
	cout<<"Input the second Number: ";
	cin>>number2;
	if (number1 > number2)
	  {
		cout<<"First Number is greater than second Number"<<endl;
	  }
	else if(number2 > number1)
	  {
		cout<<"Second number is greater than first Number"<<endl;
	  }
	else
	  {
		cout<<"Sorry! Your Answer is not satisfy above condition ";
 	  }
	getch();
	return 0;
}*/
	