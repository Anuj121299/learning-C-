#include <iostream>
#include <math.h>
using namespace std;
void atu (int a ){
	int t=a,cod=0,r,s,aut =0,p=0;
	s=a*a;
	while (t>0){
		cod++;
		t=t/10;
	}
	p = pow(10,cod);
	aut = s%p;
	if(aut == a)
	{
		cout<<"the number is automorphic "<< aut <<endl;
	}
	
	
}
int main ()
{	int a,b;
cout<<"Enter the lower limit : "<<endl;
cin>>a;
cout<<"Enter the upper limit : "<<endl;
cin>>b;



	for(int i =a;i<=b;i++){
	atu(i);
}

		return 0;
}
