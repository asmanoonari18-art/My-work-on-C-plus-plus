#include<iostream>
#include<conio.h>
using namespace std;
class address
{
   private:
   int H_no;
   int Streetno;
   string block;
   public:
   string city;
   string prov;
   string country;	
   address(int h, int s, string b)
   {
   	H_no = h;
   	Streetno = s;
   	block = b;
   }
   string getHomeAddress() const {
        return "House No: " + to_string(H_no) + ", Street No: " + to_string(Streetno) + ", Block: " + block;
    }
};
int main()
{
	address data(272,5,"C");
	data.city = "Hyderabad";
	data.prov = "Sindh";
	data.country = "Pakistan";
	cout<<"*****Address Detail*****"<<endl;
	cout<<"Country = "<<data.country <<endl;
	cout<<"Province = "<<data.prov <<endl;
	cout<<"City = "<<data.city <<endl;
	cout<<"Home Address = "<<data.getHomeAddress()  <<endl;
}
/*
class circle
{
	public:
	float radius;
	circle()
	{
		 radius = 0;
	}
	circle(float r_of_c)
	{
		radius = r_of_c;
	}
	float area()
	{
		float pi = 3.14;
		return pi * radius * radius;
	}
};
int main ()
{
	circle A1;
	cout<<"The Area Of Circle With default Constructor of Radius 0(zero). Area = "<<A1.area() <<endl;
	circle A2(7.2);
	cout<<"The Area Of Circle With Paramerized Constructor of Radius 5(Five). Area = "<<A2.area();
}
*/

class student
{
	public:
	string name;
	string fname;
	string std_id;
	int DoB;
	int age;
	string gender;	
	int std_info()
	{
		cout<<"Enter Student Information"<<endl;
		cout<<"Enter Your Name: ";
		cin>>name;
		cout<<"Enter Your Father Name: ";
		cin>> fname;
		cout<<"Enter Your ID: ";
		cin>>std_id;
		cout<<"Enter Your Date Of Birth: ";
		cin>>DoB;
		cout<<"Enter Your Age: ";
		cin>>age;
		cout<<"Gender: ";
		cin>> gender;
	}
};
class course
{
	public:
	string course1;
	string course2;
	string course3;
	string course4;
	string course5;
	int course_info()
	{
		cout<<"Enter The Courses You Want To Do"<<endl;
		cin>>course1 >>course2 >>course3 >>course4 >>course5;
	}
};
int main()
{
	student data;
	course info;
	data.std_info();
	info.course_info();
	cout<<"---------------Student Registation Form-------------------"<<endl;
	cout<<"Name = "<<data.name  <<endl;
	cout<<"F/Name = "<<data.fname <<endl;
	cout<<"ID = "<<data.std_id  <<endl;
	cout<<"Age = "<<data.age <<endl;
	cout<<"Date Of Birth = "<<data.DoB  <<endl;
	cout<<"Gender = "<<data.gender  <<endl;
	cout<<endl<<endl;
	cout<<"**********Courses***********"<<endl;
	cout<<"Course no 1 = "<<info.course1 <<endl;
	cout<<"Course no 2 = "<<info.course2 <<endl;
	cout<<"Course no 3 = "<<info.course3 <<endl;
	cout<<"Course no 4 = "<<info.course4<<endl;
	cout<<"Course no 5 = "<<info.course5<<endl;
	 
}
*/
/*
class rectangle
{
	private:
		int l;
		int w;
	public:
		
		int set(int L,int width)
		{
		l = L;
		w = width;
	}
	    int getarea ()
	    {
		int area = l * w;	
	    return area;
	}
};
int main()
{
	rectangle Areacalculate;
	Areacalculate.set(12,7) ;
	cout<<"Area Of Rectangle"<<endl<<endl;
	cout<<"Area Of Rectangle Is "<<Areacalculate.getarea()<<" Meter.Square." <<endl;
}
*/

/*
class calculator
{
	public:
		int a;
		int b;
		
		int sum()
		{
			int c =a+b;
			cout<<c;
		}
		int sub()
		{
			int x = a-b;
			cout<<x;
		}
		int multi()
		{
			int y = a * b;
			cout<<y;
		}
		int dvd()
		{
			int z = a / b;
			cout<<z;
		}
		int mod()
		{
			int r = a % b;
			cout<<r;
		}
};

int main()
{
	calculator data;
	cout<<"Enter 1st Value: ";
		cin>>data.a;
		cout<<"Enter 2nd Value: ";
		cin>>data.b;
		cout<<"Subtraction = ";
	    data.sub(); 
		cout<<endl;
	    cout<<"Addtion = ";
		data.sum(); 
		cout<<endl;
		cout<<"Multiplication = ";
		data.multi(); 
		cout<<endl;
		cout<<"Division = ";
		data.dvd() ;
		cout<<endl;
		cout<<"Remiander = ";
		data.mod() ;
}
*/
/*
class num

{
	public:
	int a;
	int b;
	int d;
	int c;
};
int main()
{
     num callno;
	 callno.a = 23;
	 callno.b = 65;
	 callno.c = 890;
	 callno.d = 2345;
	 cout<<callno.a<<"  "<<callno.b<<"   "<<callno.c<<"  "<<callno.d; 	
}
*/
/*
class data
{
	public:
		string name;
		string roll_no;
		string depart;
		string sub;
		int age;
		data(string a, string b, string c, string d, int e)
		{
			name = a;
			roll_no = b;
			depart = c;
			sub = d;
			age = e;
		}	
};
int main()
{
	data my("ASMA","24BSAI014","ARTIFICIAL INTELLIGENCE","PROGRAMMING FUNDAMENTALS",18);
	cout<<"Name "<<my.name <<endl;
	cout<<"Roll no "<<my.roll_no  <<endl;
	cout<<"Department "<<my.depart <<endl;
	cout<<"Subject "<<my.sub  <<endl;
	cout<<"age "<<my.age  <<endl;
}
*/
/*
// constructor
class Car
{
	public:
		string brand;
		string model;
		int year;
		Car(string x, string y, int z)
		{
			brand = x;
			model = y;
			year = z;
		}
};
int main()
{
	Car carobj1("BMW","XS",1987);
	Car carobj2("FORD","MUSTING",2003);
	cout<<carobj1.brand <<" "<<carobj1.model <<carobj1.year <<endl;
	cout<<carobj2.brand <<" "<<carobj2.model <<carobj2.year <<endl;
}
*/
/*
class calculator
{
	public:
	int sum(int a, int b)
	{
		int c = a+b;
		cout<<c;
	}	
	int sub(int x, int y)
	{
		int z = x - y;
		cout<<z;
	}	
};
int main()
{
	calculator obj;
	{
		obj.sum(4,6);
		cout<<endl;
		obj.sub(9,4);
	}
	return 0;
}
*/
/*
class data
{
	public:
	void Asma()
	{
		cout<<"Name = Asma Noonari"<<endl;
		cout<<"Roll NO# 24BSAI014"<<endl;
		cout<<"Result = Good"<<endl;
		cout<<"Behavoir = Excellent"<<endl;
		cout<<"Subject = Programming Fundamentals"<<endl;
		cout<<"Attendence = 100%"<<endl;
	}
};
int main()
{
	data namecall;
	{
		namecall.Asma();
	}
	return 0;
	
}
*/



/*
class Myclass
{
	public: //access specifier
	
	void Dispalymsg()
	{
		cout<<"Wellcome to Class 24BSAI"<<endl;
	}// end method
};//TERMINATOR IS IMPORTANT // end clASs

int main()
{
	// creating an object of myclass
	// installtiating an object of myclass
	Myclass Myobj;
	{
		//calling  myobj method displaying
		// use . operaotr to call the method of class
		Myobj.Dispalymsg();
	}
	return 0;
}
*/