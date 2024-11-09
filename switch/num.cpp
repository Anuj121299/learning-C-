#include <iostream>
using namespace std;
int main ()
{ int a ;
cout<<"Enter the number : ";
cin>>a;
switch(a<=100 && a>=80){
	case 1 : cout<<"A+";
	break;
} switch (a<80 && a>61) {
	case 1 : cout<<"B";
	break;
}switch(a<60 && a>41){
	case 1 : cout<<"C";
	break;
}switch(a>40 && a<3){
	case 1: cout<<"D";
	break;
}

		return 0;
}
