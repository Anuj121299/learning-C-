#include <iostream>
using namespace std;
int main ()
{
	int c=0,n;
	cout<<"Enter the number : ";
	cin>>n;
	for (int i = 2 ; i<n;i++){
		if(n%i==0){
			c++;
		}
	}if(c==0){
		cout<<"you have enter prime number : "<<n;
	}else{
		cout<<"you have enter composite number : "<<n;
	}
		return 0;
}
