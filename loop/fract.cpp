#include <iostream>
using namespace std;
int main ()
{   int a ;
cout<<"Enter the number for factorial : ";
cin>>a;
 	int mul=1;
 	int fact =1;
 	while(mul<=a){
 		fact = fact*mul;
 	mul++;
	 
	 }
	 cout<<fact;

		return 0;
}
