#include <iostream>
using namespace std;
int main ()
{ char a;
cout<<"Enter the character : ";
cin>>a;
if(a>=65 || a<90){
	cout<<"The letter is in upper case : ";
}else if(a>=97 || a<=122){
	cout<<"The letter is in lower case : ";
}else{
	cout<<"Invalid input ";
}

		return 0;
}
