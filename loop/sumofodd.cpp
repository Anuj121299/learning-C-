#include <iostream>
using namespace std;
int main ()
{	int l,u,c=0,d=0;
	cout<<"Enter the lower range : ";
	cin>>l;
	cout<<"Enter the upper range : ";
	cin>>u;
	while(l<=u){
		if(l%2==1){
			c=c+l;
			
		}else{
			d=d+l;
			
		}
		l++;
		
	}cout<<"Sum of odd number is : "<<c<<endl;
		cout<<"Sum of even number is : "<<d<<endl;

		return 0;
}
