#include <iostream>
using namespace std;
int main ()
{
	int ar[]={2,5,9,4,5,23,25,14,16,18,12,13,15,384,89,82,88,46};
	int s = sizeof(ar)/sizeof(ar[0]);
	int odd=0 , even =0;
	
	for(int i = 0 ; i<s;i++){
		if(ar[i]%2==0){
			even =even + ar[i];
		}else{
			odd+=ar[i];
		}
	} cout<<"Sum of even : "<<even<<" sum of odd : "<<odd;
		return 0;
}
