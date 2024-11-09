#include <iostream>
using namespace std;
int main ()
{	int a,p=1,r=0,n=0,t,t2;
	cout<<"Enter the number : ";
	cin>>a;
	t=a;
	while(t>0){
		r=r%10;
		if(r==0){
			r++;
		}
		n=n+r*p;
		p=p*10;
		t=t/10;
	}
	cout<<n;

		return 0;
}
