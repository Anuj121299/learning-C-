#include <iostream>
using namespace std;
int main ()
{
	int r,t,rev=0,a;
	cout<<"Enter the number : ";
	cin>>a;
	t=a;
	while(t>0){
		r=t%10;
		rev = rev*10 + r;
		t=t/10;
	}
	if(rev==a){
		cout<<a<<" number is palindrome";
	}else{
		cout<<a<<" number is not palindrome";
	}
	
		return 0;
}
