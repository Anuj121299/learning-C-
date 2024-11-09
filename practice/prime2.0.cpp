#include <iostream>
using namespace std;
void pal(int n){
	int t=n,rev=0,r;
	while(t>0){
		r=t%10;
		rev= rev*10+r;
		t=t/10;
	}
	if(rev == n){
		cout<<"Number is palindrome ;"<<n<<endl;
	}
}
int main ()
{
int lw,up;
cout<<"enter the lower limit : ";
cin>>lw;
cout<<"enter the upper limit : ";
cin>>up;
for(int i = lw;i<=up;i++){
	pal(i);
}

		return 0;
}
