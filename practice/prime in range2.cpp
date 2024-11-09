#include <iostream>
using namespace std;
void prm(int n){
	int c=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			c++;
		}
	}if(c==0){
		cout<<"Number is prime : "<<n<<endl;
	}
}
int main()
{	
	for (int i =1;i<=50;i++){
		prm(i);
	}
	return 0;
}