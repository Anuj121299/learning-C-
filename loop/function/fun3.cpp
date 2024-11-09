#include <iostream>
using namespace std;
void primenum(){
	int a,c=0,b,i=1;
	cout<<"Enter the number : ";
	cin>>a;
	while(i<=a){
		if(a%i==0){
		c++;
		}i++;
		
	} if (c==2){
		cout<<"Number  is prime : "<<a;
	}else{
			cout<<"Number not is prime : "<<a;
	}
}
int main ()
{	primenum();

		return 0;
}
