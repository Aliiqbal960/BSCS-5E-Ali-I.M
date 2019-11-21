//2.25:: Write program for finding factor.

#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter First number = ";
	cin>>a;
	cout<<"enter second number = ";
	cin>>b;
		cout<<"enter third number = ";
	cin>>c;
	
	cout<<"\n\n\n--------------Your ans is here--------------\n\n\n";
	cout<<"For first number.\n";
	if(c%a==0){
		cout<<a<<" is the multiple of "<<c<<"\n";
		
	}
	else{
		cout<<a<<" is not the multiple of "<<c<<"\n";
	}
	
	cout<<"For second number.\n";
	if(c%b==0){
		cout<<b<<" is the multiple of "<<c<<"\n";
		
	}
	else{
		cout<<b<<" is not the multiple of "<<c<<"\n";
	}
	
}
