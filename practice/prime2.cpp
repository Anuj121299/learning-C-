#include <iostream>
using namespace std;
int main ()
{	int a;
	cout<<"Enter the number : ";
	cin>>a;
	int c=0;
	for (int i = 2;i<a;i++){
		if(a%i==0){
			c=c+1;
		}
	}if(c==0){
		cout<<"number is prime : "<<a;
	}else{
		cout<<"number is not prime : "<<a;
	}

		return 0;
}
