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
	   int n,i;



	         cout<<"\n \t enter the size for int array:";
	         cin>>n;
	         int x[n];
	         cout<<"\n\t enter the elements for int array:";
	         for(i=0;i<n;i++)
	             cin>>x[i];
	         selection(x,n);


	          cout<<"\n \t enter the size for float array:";
	           cin>>n;
	           float y[n];
	           cout<<"\n\tenter the elements for float array:";
	          for(i=0;i<n;i++)
	              cin>>y[i];
	          selection(y,n);



	return 0;
	}

