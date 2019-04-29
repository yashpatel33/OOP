//============================================================================
// Name        : file.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
#include<string.h>
#include <iostream>
using namespace std;
int main ()
{
   char name[100];
   float marks;
   // open a file in write mode.

   ofstream outfile;
   outfile.open("result");

   cout << "\n Writing to the file";

   cout << "\n Enter your name: ";
   cin.getline(name, 100);
   cout<<"\n Enter your age= ";
   cin>>marks;

   // write inputted data into the file.
    outfile << name << endl;
    outfile <<marks;

   // close the opened file.
   outfile.close();

   // open a file in read mode.

   ifstream infile;
   infile.open("result");

   cout << "\n Reading from the file" << endl;

   infile.getline(name,100);
   cout<<name<<endl;

   infile>>marks;
   cout<<marks;

  // close the opened file.
   infile.close();

   return 0;
}
