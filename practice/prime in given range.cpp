#include <iostream>
using namespace std;
void prime(int n){
	int c=0;
	for(int i = 2; i<n;i++){
		if(n%i==0){
			c++;
		}
	}if(c==0){
		cout<<n<<endl;
	}
}
int main ()
{ int lw,up;
cout<<"Enter the lower range : ";
cin>>lw;
cout<<"Enter the upper range : ";
cin>>up;
	for(int i= 1;i<=50;i++){
		prime(i);
	}
		return 0;
}
