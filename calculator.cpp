//============================================================================
// Name        : calculator.cpp
// Author      : shraddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Calculator
{
   private:
   float num1,num2,result;
   char op;
   public:
   void get();
   void calculate();
};
void Calculator::get()
{
   cout<<"\n Enter first number,operator & second number";
   cin>>num1>>op>>num2;
}
void Calculator::calculate()
{
   switch(op)
   {
      case '+':
      result=num1+num2;
      break;
      case '-':
      result=num1-num2;
      break;
      case '*':
      result=num1*num2;
      break;
      case '/':
      if(num2==0)
      cout<<"\n Error. Not valid.";
      result=num1/num2;
      break;
   }
   cout<<" "<<num1<<" "<<op<<" "<<num2<<" = "<<result;
}
int main()
{
   char choice;
   Calculator obj;
 x:obj.get();
   obj.calculate();
   cout<<"\n Do you want to perform another operation? y/n";
   cin>>choice;
   if(choice=='y')
     goto x;
   else
	 cout<<"Thanks for Using calculator";
   return 0;
}
