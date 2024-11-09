#include <iostream>
using namespace std;
int main ()
{
	int ar[]={2,5,9,4,5,23,25,14,16,18,12,13,15,38,89,82,88,46};
	int s=sizeof (ar)/sizeof(ar[0]);
	int max = ar[0];
	
	for (int i =1;i<s;i++){
		if(ar[i]>max){
			max=ar[i];
		}
	}
	cout<<"Max : "<<max<<endl;
	int min=ar[0];
	for (int i = 1;i<s;i++){
		if(ar[i]<min){
			min=ar[i];
		}
	}
	cout<<"Min : "<<min;
	
	
	
	
		return 0;
}
