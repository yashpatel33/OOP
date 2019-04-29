//============================================================================
// Name        : GA_12.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string.h>
using namespace std;


class Book
{
	char publisher[60];


public:
	char author[50],title[50];
	int stock;
	float price;
	void get();
	void put();
};

void Book::get()
{
	cout<<"\n Enter Book author, Book title,publisher";
	cin>>author>>title>>publisher;
	cout<<"\n Enter Books stock: ";
	cin>>stock;
	cout<<"\n Enter book price";
	cin>>price;
}
void Book::put()
{

	cout<<"\n\t"<<author<<"\t|\t"<<title<<"\t|\t"<<publisher<<"\t|\t"<<stock<<"\t|\t"<<price<<endl;

}


int main()
{
	Book B[3];
	int i,flag=0,p=0,s=0,copies;
	float Total_amount;
	char Tit[50],aut[50];

	cout << "!!!Enter the Data for 3 Books!!!" << endl; // prints !!!Hello World!!!
	for(i=0;i<3;i++)
	{
		B[i].get();
	}
	cout<<"\t\t****** Your Book Details are ****** ";
	cout<<"\n\t Author\t\t Title\t\t Publisher\t\t stock\t\t Price";

	for(i=0;i<3;i++)
	{
		B[i].put();
	}
	cout<<"\n enter the Title & Author:";
	cin>>Tit>>aut;
	for(i=0;i<3;i++)
	{
	    if(strcmp(Tit,B[i].title)==0  && strcmp(aut,B[i].author)==0)
	    	{
	    	flag=1;
	    	   p=B[i].price;
	    	   s=B[i].stock;
	    	break;
	    	}
	    else
	    	flag=0;
	}
	if(flag==1)
	{
		cout<<"\n Book is available";
        cout<<"\n How many copies u want";
        cin>>copies;
           if(copies>s)
           {
              cout<<"\n Required Copies not in a stock, copies available are = "<<s;

           }
           else
           {
               Total_amount=copies*p;
        	   cout<<"\n Your requested copies are available";
        	   cout<<"\n Total cost of Requested Copies are = "<<Total_amount;
           }
	}
	else
	{
		cout<<"\n Book is not available";
	    cout<<"\n Thanks";
	}
	return 0;
}
