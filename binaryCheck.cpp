#include <iostream>
using namespace std;
int main () {
	int bin,cbin;
	cout<<"Enter a Binary Number: ";
	cin>>bin;
	bin = cbin;
	for(int i = 1;i<10;i++){
		cbin = cbin % 10;
		cout<<cbin;
	}
	system("pause");
	return 0;
}
