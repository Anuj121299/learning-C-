#include <iostream>
using namespace std;
int main ()
{
int a=1,mul=1,b;
cout<<"Enter the number : ";
cin>>b;
while(a<=b){
	mul=mul*a;
	a++;
} cout<<"Factorial of "<<b<<" is : "<<mul;
		return 0;
}
