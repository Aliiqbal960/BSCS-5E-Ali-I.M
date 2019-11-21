//2.19:: Write a program that input three intger and prints sum,avg,product,smallest and larger number.
#include<iostream>
using namespace std;
int main()
{
	float a,b,c,sum,avg,p;
	cout<<"Put first number = ";
	cin>>a;
	cout<<"Put second number = ";
	cin>>b;
	cout<<"Put third number = ";
	cin>>c;
	sum=a+b+c;
	avg=sum/3;
	p=a*b*c;
	cout<<"\n\n\n------------Your ans is below-------------\n\n\n";
	cout<<"Your sum is     = "<<sum;
	cout<<"\nYour average is = "<<avg;
	cout<<"\nYour product is = "<<p<<endl;
	//Here coding starting for Larger
if(a>b){
		if(a>c){
			cout<<a<<" is larger"<<endl;
		}
		else{
			cout<<c<<" is larger"<<endl;
		}
	}
	else if(b>a){
		if(b>c){
		cout<<b<<" is larger"<<endl;
		}
		else{
			cout<<c<<" is larger"<<endl;
		}
	}
	
	//Here coding starting for smallest
	if(a<b){
		if(a<c){
			cout<<a<<" is smallest";
		}
		else{
			cout<<c<<" is smallest";
		}
	}
	else if(b<a){
		if(b<c){
		cout<<b<<" is smallest";
		}
		else{
			cout<<c<<" is smallest";
		}
	}





}
