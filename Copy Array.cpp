//============================================================================
// Name        : Array.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdlib.h>ss
using namespace std;
class CppArray
{
	int n;
	int a[10];
public:
	CppArray()
	{
		n=0;
	}
	CppArray operator =(CppArray cp1)
	{
		n=cp1.n;
		for(int i=0;i<n;i++)
		{
			a[i] = cp1.a[i];
		}
		cout<<"\nArray copied successfully";
	}
	int size()
	{
		return n;
	}
	CppArray(int s)
	{
		n=s;
		cout<<"\nEnter the numbers";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
	void display()
	{
		cout<<"\nThe numbers are\n";
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
	void check_range()
	{
		int max,min,cnt=0;
		cout<<"\n Enter min and max numbers of the range";
		cin>>min>>max;

		for(int i=0;i<n;i++)
		{
			if(a[i]>=min && a[i]<=max)
			{
				cnt++;
				cout<<"\t"<<a[i];

			}
		}
		cout<<"\n There are in all"<<cnt<<" numbers in the given range";


	}




};


int main() {
	int choice,n;
	CppArray cp2;

	cout<<"\nEnter size of array";
					cin>>n;
					CppArray cp1(n);


	do
	{
			cout<<"\n1)Display Array\n2)Check Size\n3)Check Range\n4)Copy Array\nEnter your choice";
			cin>>choice;

			switch(choice)
			{

			case 1:

				cp1.display();
				break;
			case 2:
				cout<<"Size of the array is "<<cp1.size();
				break;

			case 3:
				cp1.check_range();
				break;
			case 4:
				cp2=cp1;
				cout<<"\nThe copied array is\n";
				cp2.display();
				break;
			case 5:
				exit(0);
			}

		}while(choice!=5);

	return 0;
}
