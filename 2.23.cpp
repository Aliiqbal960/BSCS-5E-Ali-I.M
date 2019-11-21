//2.23:: Find largest and smallest number from five integers.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,smallest,largest;
	cout<<"Enter first integer  = ";
	cin>>a;
	cout<<"Enter second integer = ";
	cin>>b;
	cout<<"Enter third integer  = ";
	cin>>c;
	cout<<"Enter fourth integer = ";
	cin>>d;
	cout<<"Enter fifth integer  = ";
	cin>>e;

	smallest=a;
	largest=a;
	
	
	//Largerst
	
	if(a>largest)
	{
		largest=a;
	}
	if(b>largest)
	{
		largest=b;
	}if(c>largest)
	{
		largest=c;
	}if(d>largest)
	{
		largest=d;
	}if(e>largest)
	{
		largest=e;
	}
	
	//Smallest
	if(a<smallest)
	{
	    smallest=a;
	}
	if(b<smallest)
	{
		smallest=b;
	}if(c<smallest)
	{
		smallest=c;
	}if(d<smallest)
	{
		smallest=d;
	}if(e<smallest)
	{
		smallest=e;
	}
	cout<<"\n\n\n------------Your ans is below-------------\n\n\n";
	cout<<"Your smallest no. is  = "<<smallest<<"\nYour Largest  no. is =  "<<largest;
	cout<<"\n\n\n";
}
