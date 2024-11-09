#include <iostream>
using namespace std;
int main ()
{
	int num1,num2;
	cout<<"Enter Number 1 :- ";
	cin>>num1;
	cout<<"Enter Number 2 :- ";
	cin>>num2;
	bool eq,noteq,great,less,greateq,lesseq;
	eq= num1==num2;
	noteq = num1 != num2;
	great = num1 >num2;
	less = num1<num2;
	greateq = num1>=num2;
	lesseq = num1<=num2;
	cout<<"Number 1 is Equal to Number 2 :- "<<eq<<endl;
	cout<<"Number 1 is Not Equal to Number 2 :- "<<noteq<<endl;
	cout<<"Number 1 is Gtreater than Number 2 :- "<<great<<endl;
	cout<<"Number 1 is Less than Number 2 :- "<<less<<endl;
	cout<<"Number 1 is Greater than Equal to Number 2 :- "<<greateq<<endl;
	cout<<"Number 1 is Less than to Number 2 :- "<<lesseq<<endl;

		return 0;
}
