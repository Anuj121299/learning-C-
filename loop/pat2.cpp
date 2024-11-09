#include <iostream>
using namespace std;
int main ()
{ int n;
cout<<"Enter the row value : ";
cin>>n;
for(int i = 1;i<=n;i++){
	for(int j = 1;j<=n-i;j++){
		cout<<"  ";
	}
	for(int s = 1; s<=i;s++){
		cout<<"* ";
	} 
	cout<<endl;
}

		return 0;
}
