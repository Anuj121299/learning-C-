#include <iostream>
using namespace std;
int main ()
{
	int lw,up,even=0,odd=0;
	cout<<"Enter the lower limit : ";
	cin>>lw;
	cout<<"Enter the upper limit : ";
	cin>>up;
	
	 while(lw<=up){
	 	if(lw%2==0){
	 		even = even + lw;
		 }else{
		 	odd = odd + lw;
		 }lw++;
	 }
		cout<<"Sum of even number is : "<<even<<endl;
		cout<<"Sum of odd number is : "<<odd<<endl;
		
	
		return 0;
}
