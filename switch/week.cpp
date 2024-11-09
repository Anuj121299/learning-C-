#include <iostream>
using namespace std;
int main ()
{ int d;
cout<<"Enter day number : ";
cin>>d;
switch (d){
	case 1 :
		cout<<"Monday";
		break;
	
	case 2 :
		cout<<"Tuesday";
		break;
	
	case 3 :
		cout<<"wednesday";
		break;
	
	case 4 :
		cout<<"Thrusday";
		break;
	
	case 5 :
		cout<<"Friday";
		break;
	
	case 6 :
		cout<<"Saturday";
		break;
	
	case 7 :
		cout<<"Sunday";
		break;
	
	defalut : cout<<"Invalid";
}

		return 0;
}
