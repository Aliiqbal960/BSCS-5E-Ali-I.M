//2.16:: Write a program that asks the user to enter two numbers, obtain the two numbers from user and print the sum, product, difference and qoutient of the two numbers.

#include <iostream>
using namespace std;
int main(){
	float a,b;
	cout<<"Put the first number =";
	cin>>a;
	cout<<"\n"<<"Put the second number =";
	cin>>b;
	cout<<"\n\n\n"<<"----------Your answers are below----------";
	cout<<"\n\n\n"<<"Your sum is        = "<<a+b;
	cout<<"\n"<<"Your product is    = "<<a*b;
	cout<<"\n"<<"Your difference is = "<<a-b;
	cout<<"\n"<<"Your qoutient is   = "<<a/b;
}
