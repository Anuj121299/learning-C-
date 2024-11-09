#include <iostream>
using namespace std;
int main ()
{	int a[6];
	for(int i = 0;i<6;i++){
		cout<<"Enter the "<<i+1<<" number : ";
		cin>>a[i];
		
	}
	for(int i = 0;i<6;i++){
		cout<<a[i]<<endl;
	}
	int t;
	for(int i = 0;i<6;i++)
	{
		for(int j =i+1;j<6;j++){
			if(a[i]<a[j]){
			t=a[i];
			a[i]=a[j];
			a[j]=t;	
			}
		}
	}
	cout<<"higest number is : "<<a[0]<<endl;
	cout<<"second higest number is : "<<a[1];
		return 0;
}
