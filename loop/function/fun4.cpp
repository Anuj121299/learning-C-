#include <iostream>
using namespace std;
void pali();
int main ()
{
     pali();
		return 0;
}
void pali(){
	int rev = 0,r,t,n;
	cout<<"Enter the number : ";
	cin>>n;
	t=n;
	while(t>0){
		r=t%10;
		rev = rev*10 + r;
		t=t/10;
	} if (rev==n){
		cout<<"Number is palindrom ";
	}else{
			cout<<"Number is not palindrom ";
	}
}
