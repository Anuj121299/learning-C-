#include <iostream>
using namespace std;
int main ()
{
	float num1,num2,add,sub,multi,div;
	cout<<"Enter the first number :";
	cin>>num1;
	cout<<"Enter the second number :";
    cin>>num2;
    add = num1 += num2;
    sub -=num2;
    multi = num1 *=num2;
   // div = num1 /=num2;
    cout<<"Addition of both number is : "<< add<<endl;
   // cout<<"Substraction of both number is : "<< sub<<endl;
    cout<<"Multiplication of both number is : "<< multi<<endl;
    //cout<<"Division of both number is : "<< div<<endl;

		return 0;
}
