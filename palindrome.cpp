#include <iostream>
using namespace std;
int main ()
{
int x,r, y,z ;
int rev = 0;
cout << "enter the 4 digit number : " << endl;
cin >> x ;
z=x;
r = x %10;							
rev = rev * 10 + r;
x = x/10;
r = x %10;
rev = rev * 10 + r;
x = x/10;
r = x %10;
rev = rev * 10 + r;
x = x/10;
r = x %10;
rev = rev * 10 + r;
x = x/10;
cout << "Reverse of the given number is : "<<rev<<endl;
y = rev - z;
cout << " reverse - actual is : "<< y<<endl;
if (rev == z){
	cout<<"The given number is palindrome "<<endl;
} else {
   cout<<"The number is not palindrome"<<endl;
}


		return 0;
}
