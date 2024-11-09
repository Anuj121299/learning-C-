#include <iostream>
using namespace std;
int main ()
{
 int n = 1;
	for (int i = 1;i<=5;i++){
		for (int j =1 ; j<=5;j++){
			n=n%10;
			if (n==7){
				n+=2;
			}
			cout<<n<< " ";
			n=n+2;
		}
		cout<<" "<<endl;
	}	

		return 0;
}
