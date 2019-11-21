//2.20:: Find diameter, circumference and area from radius and print it.
#include<iostream>
using namespace std;
int main(){
	const float pi=3.14;
	float rad,dia,cir,area;
	cout<<"Enter the radius of a circle = ";
	cin>>rad;
	dia=rad*2;
	cir=2*pi*rad;
	area=4*pi*rad*rad;
	cout<<"\n\n\n------------Your ans are below---------------\n\n\n";
	cout<<"\nYour radius is        =  "<<rad;
	cout<<"\nYour Diameter is      =  "<<dia;
	cout<<"\nYour Circumference is =  "<<cir;
	cout<<"\nYour Area is          =  "<<area;
	cout<<"\n\n\n";
}
