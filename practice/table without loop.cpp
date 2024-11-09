#include <iostream>
using namespace std;
int main ()
{
	int a ,mul=1;
	cout<<"Enter the number : ";
	cin>>a;
	pt:
		cout<<a<<" X "<<mul<<" = "<<a*mul<<endl;
		mul++;
		if(mul<=10){
			goto pt;
		}
		return 0;
}
