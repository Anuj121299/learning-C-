#include <iostream>
using namespace std;
int main ()
{
int p;
cout<<"Enter the month number : ";
cin>>p;
if(p==1 || p==3 || p==5 || p==8 || p==7 || p==10 || p==12){
	cout<<"The month have 31 days ";
}else if (p==4 || p==6 || p==9 || p==11){
	cout<<"The month have 30 days ";
}else if(p==2){
	cout<<"The month have 28 days ";
}else{
	cout<<"The input is invalid";
}
		return 0;
}
