#include <iostream>
using namespace std;
bool prm(int n){
int c=0;
	for(int i=2;i<n;i++)
	{
		if (n%i==0){
			c++;
		}
	}if(c==0){
		return true;
		
	}else{
		return false;
	}
}
int main ()
{ 	for(int j=1;j<=200;j++){
	if(prm(j)){
		cout<<j<<endl;
	}
}

		return 0;
}
