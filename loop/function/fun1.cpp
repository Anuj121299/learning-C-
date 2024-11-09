#include <iostream>
using namespace std;
void pal(){
	int a,rev= 0,r,b;
	cout<<"Enter the number : ";
	cin>>a;
	b=a;
	while(a>0){
		r=a%10;
		rev = rev*10 + r;
		a=a/10;
	} if(rev==b){
		cout<<"Number is palindrome ";
	}else{
		cout<<"Number is not palindrome ";
	}
	
}
int main ()
{
	pal();
		return 0;
}
