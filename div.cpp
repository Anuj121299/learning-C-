#include <iostream>
using namespace std;
int main ()
{
int n;
cout<<"Enter the number : ";
cin>>n;
if(n%5==0){
	cout<<"The number "<<n<<" is divisible by 5";
}else if(n%11==0){
	cout<<"The number "<<n<<" is divisible by 11";
}else {
	cout<<"The number "<<n<<" is not divisible by 5 or 11";
}
		return 0;
}
