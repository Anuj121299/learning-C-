#include <iostream>
using namespace std;
int main ()
{ int s , c;
cout<<"Enter your salary : ";
cin>>s;
cout<<"Enter your credit score : ";
cin>>c;
if(s>=50000){
	if(c>7){
		cout<<"Your loan is sanctioned ";
	}else {
		cout<<"your loan is not sanctioned";
	}
}else {
		cout<<"your loan is not sanctioned";
	}

		return 0;
}
