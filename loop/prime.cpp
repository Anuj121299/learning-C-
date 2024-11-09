#include <iostream>
using namespace std;
int main ()
{
int i = 10, o = 100,c=0;
while(i<=o){
	if(o%i == 0){
		c++;
	}i++;
	if(c==2){
		cout<<"number is prime ";
	}else{
		cout<<"number is not prime";
	}
}
		return 0;
}
