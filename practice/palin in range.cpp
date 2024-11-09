#include <iostream>
using namespace std;
void pln(int a){
	int t,rev=0,r;
	t=a;
	while(t>0){
		r=t%10;
		rev=rev*10 + r;
		t=t/10;
		
	}
	
	if(rev==a){
			cout<<a<<" number is palindrome"<<endl;
	}
	
	
	
}
int main ()
{ int lw,up;
	cout<<"Enter the lower limit : ";
	cin>>lw;
	cout<<"Enter the upper limit : ";
	cin>>up;
	
	for(int i = lw;i<=up;i++){
		pln(i);
	}
		return 0;
}
