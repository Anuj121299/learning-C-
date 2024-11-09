#include <iostream>
#include <math.h>
using namespace std;
bool arm(int n){
	int c=0,a=0,r,t;
	t=n;
	while (t>0){
		c++;
		t=t/10;
	}
	t=n;
	while(t>0){
		r=t%10;
		a=a+pow(r,c);
		t=t/10;
	}
	if(a==n){
		return true;
	}
	else{
		return false;
	}
	
}
int main ()
{	int a[]={153,145,12,168,56,6};
	int s=sizeof(a)/sizeof(a[0]);
	for(int i =0;i<s;i++){
		if(arm(a[i])){
			cout<<"armstrong : "<<a[i]<<endl;
		}
		else{
			cout<<"not armstrong : "<<a[i]<<endl;
		}
	}

		return 0;
}
