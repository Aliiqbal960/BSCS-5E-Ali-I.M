//2.18:: Write a program that asks the user to enter two integers obtain the number from the users then print the larger number followed by the word " is larger".If the numbers are equal print the message "These numbers are equal".

#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Put your first integer = ";
	cin>>a;
	cout<<"Put your second integer = ";
	cin>>b;
	cout<<"\n\n\n------------your ans--------------\n\n\n";
	if(a==b){
		cout<<"These numbers are equal";
	}
	if(a>b){
		cout<<"a is larger";
	}
	if(a<b){
		cout<<"b is larger";
	}

}
