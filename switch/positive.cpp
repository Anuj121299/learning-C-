#include <iostream>
using namespace std;
int main ()
{ int a;
cout<<"Enter the number : ";
cin>>a;
switch (a>0){
	case 1 : cout<<"Number is postive";
	break;
	case 0 : {
		switch (a<0){
			case 1: cout<<"Number is negative";
			break;
			case 0 : cout<<"Number is zero";
		}
	}
}

		return 0;
}
