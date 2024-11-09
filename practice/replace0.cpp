#include <iostream>
using namespace std;
int main ()
{
	int a,t,r=0,t2,p=1,n=0;
	cout<<"Enter the number : ";
	cin>>a;
	t=a;
	while(t>0){
		r=t%10;
		if(r==0){
			r++;
		}
		n=n+p*r;
		p=p*10;
		t=t/10;
	}
	cout<<n;
		return 0;
}
