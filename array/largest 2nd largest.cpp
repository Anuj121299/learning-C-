#include <iostream>
using namespace std;
int main ()
{
	int ar[6];
	for(int i=0;i<6;i++){
		cout<<"Enter the number "<<i+1<<" : ";
		cin>>ar[i];
	}
	for(int i=0;i<6;i++){
		cout<<ar[i]<<endl;
	}
	int t;
	for (int i =0;i<6;i++){
		for(int j = i+1;j<6;j++){
			if(ar[i]<ar[j]){
			t=ar[i];
			ar[i]=ar[j];
			ar[j]=t;
			}
		}
	}
	cout<<"Largest number : "<<ar[0]<<endl;
	cout<<"second largest number : "<<ar[1]<<endl;
		return 0;
}
