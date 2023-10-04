//C++ program to create calculator.

#include<iostream>
using namespace std;
class operation             //class
{
	int a,b,c;             //declaring variables
	public:          
	    //declaring functions
		void add();
		void sub();
		void mul();
		void divi();	
};

//defining functions
void operation::add()
{
	cout<<"Enter First Number and Second Number=";
	cin>>a>>b;
	c=a+b;
	cout<<"Addition="<<c;
}

void operation::sub()
{
	cout<<"Enter First Number and Second Number=";
	cin>>a>>b;
	c=a-b;
	cout<<"Subtraction="<<c;
}

void operation::mul()
{
	cout<<"Enter First Number and Second Number=";
	cin>>a>>b;
	c=a*b;
	cout<<"Multiplication="<<c;
}

void operation::divi()
{
	cout<<"Enter First Number and Second Number=";
	cin>>a>>b;
	c=a/b;
	cout<<"Division="<<c;
}

//main function
int main()
{
	operation O;       //creating object
	int ch;
	while(1)
	{
		cout<<"\nMenu"<<endl;
		cout<<"1.Addition"<<endl;
		cout<<"2.Subtraction"<<endl;
		cout<<"3.Multiplication"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"Enter Choice=";
		cin>>ch;
		switch(ch)                       //switch cases
		{
			case 1:O.add();             //calling functions
		           break;
		       
	     	case 2:O.sub();
		           break;
		        
		    case 3:O.mul();
		           break;
		       
		    case 4:O.divi();
		           break;
	    }
	}
}





