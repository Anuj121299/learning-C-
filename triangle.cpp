#include <iostream>
using namespace std;
int main ()
{ float a,b,c;
cout<<"Eneter the 1st side : ";
cin>>a;
cout<<"Eneter the 2st side : ";
cin>>b;
cout<<"Eneter the 3st side : ";
cin>>c;
if(a==b && b==c ){
	cout<<"The triangle is equilateral triangle ";
} else if (a==b || b==c || a==c){
	cout<<"The triangle is isosceles triangle ";
} else {
	cout<<"The triangle is scalene";
}

		return 0;
}
