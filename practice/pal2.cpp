#include <iostream>
using namespace std;
int main ()
{	int rev=0,r,t,n;
	cout<<"Enter the number : ";
	cin>>n;
	t=n;
	while(t>0){
		r=t%10;
		rev= rev*10+r;
		t=t/10;
	}if(rev==n){
		cout<<"number is palindorme "<<n<<endl;
	}else{
		cout<<"number is not palindorme "<<n<<endl;
	}

		return 0;
}
