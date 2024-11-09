#include <iostream>
using namespace std;
void prm(int n){
	int a=n,cod=0,r,rev=0,i=1;
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	while(i<=rev){
		if(rev%i==0){
			cod+=1;
		}i++;
	}
	if(cod==2){
		cout<<"Number "<<a<<" REverse "<<rev<<" is prime number"<<endl;
	}
	
}
int main()
{for(int i=10;i<=100;i++){
	prm(i);
}

	return 0;
}