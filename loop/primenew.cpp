#include <iostream>
using namespace std;
int main ()
{
	int i,c,a=1;
	cout<<"Enter the number : ";
	cin>>i;
	
	while(a<=i){
		if (i%a==0){
			c++;
		} a++;
		
	} if (c==2){
			cout<<"The number is prime : "<<i;
		}else {
			cout<<"The number is composite : "<<i;
		}
		
	
		return 0;
		}
