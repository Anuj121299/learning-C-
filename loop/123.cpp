#include <iostream>
using namespace std;
int main ()
{ 	int rev=0,i,f,r;
cout<<"Enter the input : ";
cin>>i;
int a=i;
while(i>0){
	r = i%10;
	rev = rev * 10 + r;
	i=i/10;
}
 if(a==rev){
 	cout<<"Number "<<rev<<" is palindrome ";
 }else{
 	cout<<"Number "<<a<<" is not palindrome ";
 }
		return 0;
}
