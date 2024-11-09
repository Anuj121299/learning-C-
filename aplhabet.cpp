#include <iostream>
using namespace std;
int main ()
{ char a;
cout<<"Enter the character : ";
cin>>a;
if(a>=48 && a<=57){
	cout<<"The character is digit";
}else if(a>=65 && a<=90){
	cout<<"The character is Upper case letter";
}else if(a>=97 && a<=122){
	cout<<"The character is Lower case letter";
}else{
	cout<<"The character is special character ";
}

		return 0;
}
