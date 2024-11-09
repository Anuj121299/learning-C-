#include <iostream>
#include <math.h>
using namespace std;
void amrs(int n ){
	int t,cod=0,arm=0,r;
	t = n ;
	while( t> 0){
		cod=cod+1;
		t=t/10;
	}
	t=n;
	while(t>0){
		r=t%10;
		arm=arm+pow(r,cod);
		t=t/10;
	}
	if(arm==n){
		cout<<"number is armstrong : "<<arm<<endl;
	}
}
int main ()
{	for (int i =1;i<=1000;i++){
	amrs(i);
}

		return 0;
}
