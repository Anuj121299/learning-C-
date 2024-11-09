#include <iostream>
#include <math.h>
using namespace std;
int main ()
{ int cod=0,sum=0,r,n,t;
	cout<<"Enter the value : ";
	cin>>n;
	t=n;
	while(t>0){
		cod++;
		t=t/10;
	} 
	t=n;
	while(t>0){
		r=t%10;
		sum = sum + pow(r,cod);
		t=t/10; 
	} 
	if(sum==n){
		cout<<"Number is armstrong : "<<sum;
	}else{
		cout<<"Number is not armstrong : "<<sum;
	}

		return 0;
}
