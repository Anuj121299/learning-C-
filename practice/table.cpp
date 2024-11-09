#include <iostream>
using namespace std;
int main ()
{	int a , mul=1;
	cout<<"Enter the number : ";
	cin>>a;
	for(int i = 1;i<=10;i++){
		mul = a*i;
		cout<<a<<" x "<<i<<" = "<<mul<<endl;
	}

		return 0;
}
