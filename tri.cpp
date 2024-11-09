#include <iostream>
using namespace std;
int main ()
{
float a,b,c,total;
cout<<"Enter the 1st angle  :";
cin>>a;
cout<<"Enter the 2nd angle  :";
cin>>b;
cout<<"Enter the 3rd angle  :";
cin>>c;
total=a+b+c;
if(total > 180){
	cout<<"The triangle is invalid";
}else {
	cout<<"The triangle is valid";
}
		return 0;
}
