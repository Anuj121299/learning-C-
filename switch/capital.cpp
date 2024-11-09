#include <iostream>
using namespace std;
int main ()
{ char a;
cout<<"Enter the character : ";
cin>>a;
switch (a>=65 && a<=90 ){
	
	case 1 : cout<<"Capital"; 
	break;
} case 0 : {
	switch (a>=97 && a<=122){
		case 1 : cout<<"small";
	} case 0 : {
	switch (a>=47 && a <= 58){
	case 1 : 	cout<<"num";break;
		
		
	}}
}default : cout<<"character";

		return 0;
}
