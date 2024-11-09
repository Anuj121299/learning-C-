#include <iostream>
using namespace std;
int main ()
{
	int n ;
	cout<<"Enter the seat number : ";
	cin>>n;
	if (n<0 or n>72){
		cout<<"seat number is invalid :"<<n;
	}else{
		if (n%8==0){
			cout<<"side upper berth ";
		}
		if (n%8==7){
			cout<<"side lower berth ";
		}
		if(n%8==1 or n%8==4){
			cout<<"lower berth";
		}
		if(n%8==2 or n%8==5){
			cout<<"middle berth";
		}if(n%8==3 or n%8==6){
			cout<<"upper berth";
		}
		
	}
		return 0;
}
