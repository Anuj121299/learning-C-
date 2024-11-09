#include <iostream>
using namespace std;
int main ()
{
	int a[]= {1,22,3,55,66,8,45,58,56,48,6,98,98,95};
	int s = sizeof(a)/4;
	int max = a[0];
	for(int i = 0; i<s;i++){
		if(a[i]>a[i+1]){
			max = a[i+1];
		}
	}
	cout<<max;
	
		return 0;
}
