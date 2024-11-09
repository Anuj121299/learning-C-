#include <iostream>
using namespace std;
bool pal(int n ){
	int rev=0;
	int t=n;
	int r;
	while (t>0){
		r=t%10;
		rev=rev*10 + r;
		t=t/10;
	}
	if(rev==n){
		return true;
	}else{
		return false;
	}
	
}
int main ()
{
	int a[]={11,21,54,121,131,55,89,321,1451};
	int s=sizeof(a)/sizeof(a[0]);
	for (int i =0;i<s;i++){
		if(pal(a[i])){
			cout<<"number is palindrome : "<<a[i]<<endl;
		}else{
			cout<<"number is not palindrome : "<<a[i]<<endl;
		}
	}
		return 0;
}
