#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int cod = 0,n,t,arm=0,r;
	cout<<"Enter the number : ";
	cin>>n;
	t=n;
	while(t>0){
		cod=cod+1;
		t=t/10;
	} t=n;
	while(t>0){
		r= t%10;
		arm = arm + pow(r,cod);
		t=t/10;
	} if (arm==n){
		cout<<"the enter number is armstrong "<<arm;
	}else{
		cout<<"the enter number is not armstrong "<<arm;
	}
	
		return 0;
}
