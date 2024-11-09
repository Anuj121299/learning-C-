#include <iostream>
using namespace std;
int main ()
{
	int f,i;
	float c;
	cout<<"Nigga enter hight in feet : "<< endl;
	cin>>f;
	cout<<"Nigga enter hight in inch : " <<endl;
	cin>>i;
	float h = (f * 12) + i;
	cout<<h<<endl;
	c = h * 2.54;
	cout<<c<<endl;
		
	
		return 0;
}
