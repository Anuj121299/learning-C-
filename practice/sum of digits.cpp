#include <iostream>
using namespace std;
int main ()
{	int r,sum =0,t,a;
	cout<<"Enter the digits : ";
	cin>>a;
	t=a;
	while(t>0){
		r=t%10;
		sum = sum + r;
		t=t/10;
	} 
	cout<<"Sum of given digits are : "<<sum;

		return 0;
}
