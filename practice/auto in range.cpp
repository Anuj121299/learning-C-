#include <iostream>
#include <math.h>
using namespace std;
void aut(int n){
	int cod= 0,t,s,a,c;
	t=n;
	s = n*n;
	while(t>0){
		cod=cod+1;
		t=t/10;
	}
	t=n;
	c=pow(10,cod);
	a = s%c;
	if(a==n){
		cout<<"number is automorphic : "<<a<<endl;
	}
}
int main ()
{
	for (int i =1;i<=1000;i++){
		aut(i);
	}
		return 0;
}
