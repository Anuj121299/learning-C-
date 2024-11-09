#include <iostream>
using namespace std;
int main ()
{
char a ;
float n1,n2,n3;
cout<<"Enter the 1st number : ";
cin>>n1;
cout<<"Enter the 2nd number : ";
cin>>n2;
cout<<"Choose {a=add,s=sub,m=multi,d=div} : ";
cin>>a;
 if(a=='a'){
	n3=n1+n2;
	cout<<"The addition of numbers is : "<<n3;
}else if(a=='s'){
	n3=n1-n2;
	cout<<"The subtraction of numbers is : "<<n3;
}else if(a=='m'){
	n3=n1*n2;
	cout<<"The multiply of numbers is : "<<n3;
}else if(a=='d'){
	n3=n1/n2;
	cout<<"The divison of numbers is : "<<n3;
}
		return 0;
}
