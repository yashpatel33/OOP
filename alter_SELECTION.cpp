	#include<iostream>
	using namespace std;

	template<class T>
	void selection(T a[],int n)
	{
	   T temp;
	   int min,i,j;
	   for(i=0;i<n-1;i++)
	   {
	     min=i;
	     for(j=i+1;j<n;j++)
	     {
	       if(a[j]<a[min])
	       {
	         min=j;
	       }
	     }
	      temp=a[i];
	      a[i]=a[min];
	      a[min]=temp;
	    }
	  cout<<"\n\t sorted array elements:\n\t\t";
	  for(i=0;i<n;i++)
	  cout<<a[i]<<"  ";
	}


	int main()
	{
	   int n,i,ch,ch1;
	   
	   do
	   {
	     cout<<"\t\n 1. int\t\t2.float";
	     cout<<"\n\tenter u r choice:";
	     cin>>ch;
	   switch(ch)
	   {
	     case 1:
	         cout<<"\n \t enter the size of array:";
	         cin>>n;
	         int x[n];
	         cout<<"\n\tenter the array elements:";
	         for(i=0;i<n;i++)
	             cin>>x[i];
	         selection(x,n);
	          break;
	      case 2:
	          cout<<"\n \t enter the size of array:";
	           cin>>n;
	           float y[n];
	           cout<<"\n\tenter the array elements:";
	          for(i=0;i<n;i++)
	              cin>>y[i];
	          selection(y,n);
	            break;
	       default:
	            cout<<"\n\tu r choice is wrong";
	    }
	   cout<<"\n\t do u want cont....press 1:";
	    cin>>ch1;
	  }while(ch1==1);
	return 0;
	}

