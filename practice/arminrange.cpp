#include <iostream>
#include <math.h>
using namespace std;
void arms(int n){
	int cod=0,arm=0,t,r;
	t=n;
	while(t>0){
		cod++;
		t=t/10;
	} 
	t=n;
	while(t>0){
		r = t%10;
		arm = arm + pow(r,cod);
		t=t/10;
	} if (arm==n){
		cout<<"The number is armstrong : "<<arm<<endl;
	} 
}
int main ()
{   int lw,up;
	cout<<"Enter the lower limit : ";
	cin>>lw;
	cout<<"Enter the upper limit : ";
	cin>>up;
	
	for(int i = lw;i<=up;i++){
		arms(i);
	}

		return 0;
}
