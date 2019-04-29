//============================================================================
// Name        : Complex.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class complex
{
	 float r;   //real part
	 float i;   //imaginary part
  public:
	 complex(float real=0,float imag=0)
	 {
		 r=real;
		 i=imag;
	 }
	complex operator+(complex);
	complex operator*(complex);
	void display();
	void display1();
};
//code for addition
complex complex::operator+(complex c)
{
	complex temp;        //temp is the temporary object of class complex
	temp.r=r+c.r;
	temp.i=i+c.i;
	return(temp);
}
complex complex::operator*(complex c)
{
	complex temp;        //temp is the temporary object of class complex
	temp.r=(r*c.r)-(i*c.i);
	temp.i=(r*c.i)+(i*c.r);
	return(temp);
}
void complex::display()
{
	cout<<r<<"+j"<<i<<"\n";
}
void complex::display1()
{
	cout<<r<<"*j"<<i<<"\n";
}
int main()
{
	complex c1,c2,c3,c4;      //object of class complex
	c1=complex(2.5,3.5);
	c2=complex(1.6,2.7);
	  //call to operator overloading
	cout<<"\n Addition Operation is: \n";
	cout << "c1= ";
	c1.display();
	cout << "c2= ";
    c2.display();
    cout<<"\n Addition of Complex Number is: \n";
    c3=c1+c2;
    cout << "c3= ";
    c3.display();
    cout<<"\n Multiplication of Complex Number is: \n";
    c4=c1*c2;
    cout << "c4= ";
    c4.display1();
	return 0;
}
