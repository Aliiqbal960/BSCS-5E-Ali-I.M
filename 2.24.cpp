//2.24:: Find even and odd number from 2 numbers.

#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first number = ";
	cin>>a;
	cout<<"Enter second number = ";
	cin>>b;
	c=a+b;
	cout<<"\n\n\n-----------Your ans is below------------\n\n\n";
	cout<<"Your sum is = "<<c<<"\n\n";
	
	if(a%2==0){
		cout<<a<<" is an even number\n";
	}
	else{
		cout<<a<<" is an odd number\n";
	}
	
	if(b%2==0){
		cout<<b<<" is an even number\n";
	}
	else{
		cout<<b<<" is an odd number\n";
	}
	
	if(c%2==0){
		cout<<c<<" is an even number\n";
	}
	else{
		cout<<c<<" is an odd number\n";
	}
	
	
}
