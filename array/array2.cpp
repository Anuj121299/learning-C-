#include <iostream>
using namespace std;
int main ()
{
	int ar[]={22,23,25,28,85,8,9,56,9,56,5,6};
    for(int i = 0;i<=12;i++){
		cout<<ar[i];
		if(i<=9){
			cout<<", ";
		} else if( i==10){
			cout<<" and ";
		}
	} 
		return 0;
}
