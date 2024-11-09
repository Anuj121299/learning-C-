#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int cod = 0,a,r,t,s,aut=1;
	cout<<"Enter the number : ";
	cin>>a;
	s=a*a;
	t=a;
	while(t>0){
		cod++;
		t=t/10;
	}
	int c = pow(10,cod);
	aut=s%c;
	if(aut==a){
		cout<<"number is automorphic";
	}else{
		cout<<"number is not automorphic";
	}
	
		return 0;
}
