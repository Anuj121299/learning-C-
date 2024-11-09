#include <iostream>
using namespace std;
int main ()
{
	int num1,num2;
	cout<<"Enter the first number :";
	cin>>num1;
	cout<<"Enter the second number :";
    cin>>num2;
    
    bool b;
    b =  num1 == num2;
    cout<<"num1==num2 : "<< b<<endl; 
    
    b = num1 != num2;
	cout <<"num1!=num2 : "<< b <<endl;
	
	b = num1 > num2;
	cout <<"num1>num2 : "<< b <<endl;
	b = num1 < num2;
	cout <<"num1<num2 : "<< b <<endl;
	b = num1 <= num2;
	cout <<"num1<=num2 : "<< b <<endl;
	b = num1 >= num2;
	cout <<"num1>=num2 : "<< b <<endl;
	
    

		return 0;
}
