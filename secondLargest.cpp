#include<iostream>
using namespace std;
int main () {
	int num1 = 0,num=0,even=0,odd=0,a=0,b=0;
	while(num != -1){
		cout<<"Enter a number: ";
		cin>>num;
		if(num % 2 == 0){
			even++;
		}else if(num %2 == 1) {
			odd++;
		}
		if(num>a){
			b = a;
		} else if(num >= b && num != a){
			b = num;
		}
		if(num>a){
			a=num;
		}
	cout<<endl;
	cout<<"Largest Number: "<<a<<endl;
	cout<<"Second largest: "<<b<<endl;
	cout<<"Even: "<<even<<endl;
	cout<<"Odd: "<<odd<<endl;
	cout<<endl;
	}
	return 0;
}
