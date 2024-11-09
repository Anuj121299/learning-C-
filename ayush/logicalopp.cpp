#include <iostream>
using namespace std;
int main ()
{
	int num1,num2,num3,a;
	bool r;
	cout<<"Enter Number 1:- ";
	cin>>num1;
	cout<<"Enter Number 2:- ";
	cin>>num2;
	cout<<"Enter Number 3:- ";
    cin>>num3;
	r= num1>=0&&num2>=0&&num3>=0;
	(r>0)?(cout<<"All Number are Positive"):(cout<<"All number are not Positive");
		return 0;
}
