#include <iostream>
using namespace std;
bool prm(int);
int main()
{int arr[]={22,33,44,55,66,77,88,99,101};
int s=sizeof(arr)/4;
for(int i=0;i<s;i++){
	if(prm(arr[i])){
		cout<<"prime number "<<arr[i]<<endl;
	}
	else{
		cout<<"Not a prime number "<<arr[i]<<endl;
	}
}

	return 0;
}
bool prm(int n){
	int cod=0;
	int i=1;
	while(i<=n){
		if(n%i==0){
			cod+=1;
		}i++;
	}
	if(cod==2)
	return true;
	else
	return false;
	
}