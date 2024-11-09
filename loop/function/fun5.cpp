#include <iostream>
using namespace std;
bool prm(){
	int c=0,n;
	cout<<"Enter the value :";
	cin>>n;
	for(int i = 1;i<=n;i++){
		if(n%i==0){
			c++;
		}
		
	} if(c==2){
		return true;}
	else
	{ return false;
		}	
}
int main ()
{ 	if(prm()){
	cout<<"Number is prime  ";
}else{
	cout<<"number is not prime";
}

		return 0;
}
