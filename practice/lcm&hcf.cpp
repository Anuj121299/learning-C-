#include <iostream>
using namespace std;
int main ()
{
	int a ,b,hcf,lcm;
	cout<<"Enter the 1st number : ";
	cin>>a;
	cout<<"Enter the 2nd number : ";
	cin>>b;
	
	for(int i =1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			hcf=i;
		}
	}
	cout<<"hcf of given numbers are : "<<hcf<<endl;
	lcm=(a*b)/hcf;
	cout<<"Lcm of given numbers are : "<<lcm;
		return 0;
}
