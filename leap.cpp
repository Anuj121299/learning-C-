#include <iostream>
using namespace std;
int main ()
{ int y ;
cout<<"Enter year : ";
cin>>y;
if(y%4==0){
	cout<<"Year "<<y<<" is leap year";
}else {
	cout<<"Year "<<y<<" is not leap year";
}

		return 0;
}
