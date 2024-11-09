#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	cout<<"Enter the number :";
	cin>>a;
	if(a>0){
		b = a%2;
		cout<<"number is positve"<<endl;
		if (b==1){
			cout<<"number is odd"<<endl;
			c = a%5;
			if (c==0){
				cout<<"number is divisible by 5 "<<endl;
			}
		}
	}
		return 0;
}
