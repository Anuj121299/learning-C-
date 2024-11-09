#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int cod=0,a,s,t,n;
	cout<<"enter the number : ";
	cin>>n;
	t=n;
	s=n*n;
	while(t>0){
		cod=cod+1;
		t=t/10;
	}
	t=n;
	int c = pow(10,cod);
	a=s%c;
	if(a==n){
		cout<<"number is automorphic "<<a;
	}else{
			cout<<"number is not automorphic "<<a;
	}
		return 0;
}
