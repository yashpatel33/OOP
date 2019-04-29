//============================================================================
// Name        : GA_13.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class Personal_Record
{
protected:
	char name[80],address[80], email[40];
	long int phone_no;
};
class Professional_Record
{
protected:
	char Cname[50],Caddress[80];
	long int Cphone_no;
	float exp;
};
class Academic_Record
{
protected:
	char qualification[30],Uname[50];
	int passing_year;
	float percentage;
};
class Biodata:public Personal_Record,public Professional_Record,public Academic_Record
{
public:
	void accept();
	void display();
};
void Biodata::accept()
{
	//Enter Personal Information


	cout<<"\n Enter Your Full Name = ";
	cin.getline(name,80);
	cout<<"\n Enter Your Address = ";
    cin.getline(address,80);
    cout<<"\n Enter Your Phone No= ";
	cin>>phone_no;
	cout<<"\n Enter Your Email_ID = ";
	cin>>email;

	//Enter Professional Information

	cin.get();
	cout<<"\n Enter Your Company Name = ";
	cin.getline(Cname,50);
	cout<<"\n Enter Your Company Address = ";
	cin.getline(Caddress,80);
	cout<<"\n Enter Your Company Phone No= ";
	cin>>Cphone_no;
	cout<<"\n Enter Your Experience = ";
	cin>>exp;

	//Enter Academic Information

	cout<<"\n Enter Your Qualification = ";
	cin>>qualification;
	cout<<"\n Enter Your University Name= ";
	cin>>Uname;
	cout<<"\n Enter Your Passing Year = ";
	cin>>passing_year;
	cout<<"\n Enter Your Percentage= ";
	cin>>percentage;

}
void Biodata::display()
{
	//Display Personal Information
	cout<<"\n ------------------ PERSONAL INFORMATION --------------- "<<endl;
	cout<<"\n Name : "<<name;
	cout<<"\n Address : "<<address;
	cout<<"\n Phone No : "<<phone_no;
	cout<<"\n Email_ID : "<<email;

	//Display Academic Information
		cout<<"\n\n ------------- ACADEMIC INFORMATION -------------- "<<endl;
		cout<<"\n Qualification : "<<qualification;
		cout<<"\n University Name : "<<Uname;
		cout<<"\n Year Of Passing : "<<passing_year;
		cout<<"\n Percentage : "<<percentage;

	//Display Professional Information
		cout<<"\n\n ------------ Professional INFORMATION ------------ "<<endl;
		cout<<"\n Name of the Company : "<<Cname;
		cout<<"\n Address of Company : "<<Caddress;
		cout<<"\n Company Phone No : "<<Cphone_no;
		cout<<"\n Experience : "<<exp;

}
int main()
{
	Biodata B;
	cout<<"\n Enter Your Detail Information for Biodata:";
	B.accept();
	cout <<"\n \t\t ************* BIODATA ************ " << endl;
	B.display();
	return 0;
}
