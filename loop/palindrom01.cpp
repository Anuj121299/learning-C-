#include <iostream>
using namespace std;
int main ()
{ 	int a,b,r,rev=0;
	cout<<"Enter the digit : ";
	cin>>a;
	a=b;
	while(a>0){
		r = a % 10;
		rev = rev * 10 + r;
		a=a / 10;
		
	} 
	cout<<"reverse number is : "<<rev<<endl;

		return 0;
}
