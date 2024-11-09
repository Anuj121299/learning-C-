#include <iostream>
using namespace std;
int main ()
{ float a;
cout<<"Enter the temperature : ";
cin>>a;
if(a<0){
	cout<<"Freezing";
}else if(a<10){
	cout<<"cold";
}else if(a<25){
	cout<<"warm";
}else if(a>25){
	cout<<"hot";
}

		return 0;
}
