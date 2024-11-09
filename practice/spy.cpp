#include <iostream>
using namespace std;
int main ()
{	int a,t=0,r=1,sum = 0 ,mul = 1;
	cout<<"Enter the number : ";
	cin>>a;
	t=a;
	
	while(t>0){
		r=t%10;
		sum=sum+r;
		t=t/10;
	} cout<<"sum of digit is :"<<sum<<endl;
	t=a;
	while(t>0){
		r=t%10;
		mul=mul*r;
		t=t/10;
	}cout<<"Product of digit is :"<<mul<<endl;
	
	if(sum==mul){
		cout<<"Number is syp number "<<a;
	}
	else{
		cout<<"Number is not syp number "<<a;
	}
	
	
	
		return 0;
}
