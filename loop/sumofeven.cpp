#include <iostream>
using namespace std;
int main ()
{int a ,b,c=0,d=0;
 cout<<"Enter the lower range  : ";
 cin>>a;
 cout<<"Enter the upper range : ";
 cin>>b;
 while (a<=b){
 if (a%2==1){
 	c=c+a;
 	
 }else {
 	d=d+a;
 }a++;	
 }
 cout<<"sum of odd "<<c<<endl;
 cout<<"sum of even "<<d<<endl;

		return 0;
}
