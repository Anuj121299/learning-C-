#include <iostream>
using namespace std;
int main ()
{
	int n1,n2,hcf=0,lcm=0;
	cout<<"Enter the 1st number : ";
	cin>>n1;
	cout<<"Enter the 2nd number : ";
	cin>>n2;
	for(int i = 1;i<=n1 && i<=n2;i++){
		if(n1%i==0 and n2%i==0){
			hcf=i;
		}
	}
	lcm=(n1*n2)/hcf;
	cout<<"hcf : "<<hcf<<endl;
	cout<<"lcm : "<<lcm<<endl;
	
		return 0;
}
