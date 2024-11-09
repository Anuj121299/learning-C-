#include <iostream>
using namespace std;
int main ()
{
	float num1,num2,num3;
	cout<<"Enter the first number :";
	cin>>num1;
	cout<<"Enter the second number :";
    cin>>num2;
    cout<<"Enter the third number :";
    cin>>num3;
     bool b = num1>0 && num2>0 && num3>0 ;
     (b > 0)?(cout<< "All number are positive"):(cout<<"All number are not positive");
    

		return 0;
}
