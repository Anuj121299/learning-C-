#include <iostream>
using namespace std;
int main ()
{	int a[10];
    int odd = 0;
	int even = 0;
	

	for (int i =0;i<10;i++){
		cout<<"Enter the number "<<i+1<<" : ";
		cin>>a[i];
	}
	for(int i = 0;i<10;i++){
		if(a[i]%2==0){
			even = even + a[i];
		
		}else{
			odd = odd + a[i];
			
		}
	}
	cout<<"even sum : "<<even<<endl;
	cout<<"odd sum : "<<odd<<endl;


		return 0;
}
