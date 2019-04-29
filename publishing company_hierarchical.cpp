//============================================================================
// Name        : GA_9.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Publication
{
protected:
	char title[60];
	float price;
};

class Book:public Publication
{
private:
	int page_count;
public:
	void get()
	{
		try
		{
		cout<<"\n Enter Book Title & price = ";
		cin>>title>>price;
		cout<<"\n Enter Page Count for Book = ";
		cin>>page_count;
		if (page_count<=0)
		   throw 1;
	    }
	    catch(int i)
	    {
		 if (i==1)
		 {
			 cout<<"\n You Entered Invalid Page Count";
			 page_count=0;
			 cout<<"\npage_count= "<<page_count;

			 cout<<"\n Enter page count again";
			 cin>>page_count;
		 }


	     }
	}
	void put()
	{
		cout<<"\n Book Details are:"<<endl;
		cout<<"\n \t BOOK TITLE \t\t PRICE \t\t PAGE COUNT";
		cout<<"\n \t"<<title<<"\t\t"<<price<<"\t\t"<<page_count;
	}
};

class Tape:public Publication
{
private:
	float playing_time;
public:
	void get1()
	{
		cout<<"\n Enter Tape Title & price = ";
		cin>>title>>price;
		cout<<"\n Playing Time in Minutes for Tape = ";
		cin>>playing_time;
	}
	void put1()
	{
		cout<<"\n\n Tape Details are:"<<endl;
		cout<<"\n \t TAPE TITLE \t\t PRICE \t\t PLAYING TIME";
		cout<<"\n \t"<<title<<"\t\t"<<price<<"\t\t"<<playing_time;
	}
};
int main()
{
    Book B;
    Tape T;
    cout<<"\n Enter Details for Book : ";
    B.get();
	cout << "\n Enter Details for Tape : ";
	T.get1();
	// Details are
	B.put();
	T.put1();

	return 0;
}
