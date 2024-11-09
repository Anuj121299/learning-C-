#include <iostream>
using namespace std;
int main ()
{	int r,p=0,i;
	cout<<"Enter the number ";
	cin >>i;
	
	while(i>0){
		r=i%10;
		p=p+r;
		i=i/10;
		
	}
	cout<<"sum is "<<p;
	
	
		return 0;
}
