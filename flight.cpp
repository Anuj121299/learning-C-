#include <iostream>
using namespace std;
int main ()
{
 int s;
 cout<<"Enter the seat number : ";
 cin>>s;
 if(s>0 || s<31){
 	if(s%6==1 || s%6==0){
 		cout<<"You have window seat : ";
	 }else if(s%6==2 || s%6==5){
	 	cout<<" You have middle seat : ";
	 }else if(s%6==3 || s%6==4){
	 	cout<<"You have corner seat : ";
	 }
 }else{
 	cout<<"You have invalid inpute ";
 }
		return 0;
}
