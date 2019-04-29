//============================================================================
// Name        : GA_2_Complex.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class complex
{
public:
	float real,imag;
	complex()
	{
		real=0;imag=0;
	}
	complex operator+(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.imag=imag+c.imag;
		return(temp);
	}
	complex operator*(complex c)
	{
		complex temp;
		temp.real=(real*c.real)-(imag*c.imag);
		temp.imag=(real*c.imag)+(imag*c.real);
			return(temp);
	}
	friend istream& operator>>(istream &inn,complex &c1)
	{
		inn>>c1.real>>c1.imag;
		return inn;
	}
	friend ostream& operator<<(ostream &outt,complex &c1)
		{
			outt<<c1.real<<" "<<"i"<<c1.imag;
			return outt;
		}
};
int main()
{
	complex c1,c2,c3;
	cout << "\n Enter Real & Imaginary Part for 1st Object=";
	cin>>c1;
	cout << "\n Enter Real & Imaginary Part for 2nd Object=";
	cin>>c2;

	cout<<"\n Addition of Complex Number is =";
	c3=c1+c2;
	cout<<c3;
	cout<<"\n Multiplication is = ";
	c3=c1*c2;
	cout<<c3;

	return 0;
}
