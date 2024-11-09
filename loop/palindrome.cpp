#include <iostream>
using namespace std;
int main ()
{ int n,rev=0,r,x,i=1;
cout<<"Enter the number : ";
cin>>n;
n=x;
while(i<=n){
	r=n%10;
	rev=rev*10 + r;
	n=n/10;
	
}
cout<<rev;
		return 0;
}
