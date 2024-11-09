#include <iostream>
#include <math.h>
using namespace std;
int main ()
{	int cod=0,r,t,n,arm=0;
	cout<<"Enter the number : ";
	cin>>n;
	t=n;
	while(t>0){
		cod=cod+1;
		t=t/10;
	}
	t=n;
	while(t>0){
		r=t%10;
		arm=arm + pow(r,cod);
		t=t/10;
	}
	if(arm==n){
		cout<<"armstorong : "<<arm;
	}else{
		cout<<"not armstorong : "<<arm;
	}

		return 0;
}
