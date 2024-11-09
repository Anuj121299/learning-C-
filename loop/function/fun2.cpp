#include <iostream>
using namespace std;
void sumofdigit(){
	int a ,r, sum=0;
	cout<<"Enter the digit : ";
	cin>>a;
	
	while(a>0){
		r=a%10;
		sum = sum +r;
		a=a/10;
	} cout<<"The sum of digit is : "<<sum;
}
int main ()
{ 	
	sumofdigit();

		return 0;
}
