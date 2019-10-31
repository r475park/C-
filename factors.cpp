#include <iostream>
using namespace std;
int main () {
	int a;
	while(a != -1){
		int a,fact,sum;
		cout<<"Enter a Number: ";
		cin>>a;
		for(int i=1;i<=a;i++){
			if(a % i == 0){
				fact = a % i;
				if(i==1){
				cout<<"The Facors of "<<a<<" is: "<<endl;
			}
				cout<<endl<<fact<<" * "<<i<<" = "<< a<<endl;
			}
		}
		cout<<endl;
	}
}
