#include <iostream>
using namespace std;
int main ()
{ int a[]={1,2,3,4,5,6,7,8,9,10};
	int s = sizeof(a)/sizeof(a[0]);
	for (int i = 0;i<s;i++){
	cout<<a[i];
		if(a[i]<=8){
			cout<<" , ";
		}
		if(a[i]==9){
			cout<<" and ";
		}
		}
	

		return 0;
}
