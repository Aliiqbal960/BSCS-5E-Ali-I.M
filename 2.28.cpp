//2.28:: Digits of an integer.

#include<iostream>
using namespace std;
int main(){
 	int a;
 	
	cout<<"Enter four-digit number = ";
		cin>>a;
	cout<<"\n\n\n----------Your ans is below---------\n\n\n";
	
	cout<<a/1000<<"   ";
	a=a%1000;
	cout<<a/100<<"   ";;
	a=a%100;
	cout<<a/10<<"   ";;
	a=a %10;
	
	cout<<a/1<<"   ";;
	a=a%1;


}
