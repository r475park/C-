#include<iostream>
using namespace std;
int main() {
	int factorial=1,num;
	cout<<"Enter a number: : ";
	cin>>num;
	cout<<endl;
	for(int i=1;i=<num;i++){
		factorial = factorial*i;
	}
	cout<<"The Factorial of "<<num<<" is: "<<factorial<<endl;
	system("pause");
	return 0;
}
