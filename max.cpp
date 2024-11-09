#include <iostream>
using namespace std;
int main ()
{ int n1,n2,n3;
cout<<"Enter 1st number : ";
cin>>n1;
cout<<"Enter 2nd number : ";
cin>>n2;
cout<<"Enter 1st number : ";
cin>>n3;
if (n1>n2 && n1>n3){
	cout<<n1<<" is maximum "<<endl;
}
if (n2>n1 && n2>n3){
	cout<<n2<<" is maximum "<<endl;
}
if (n3>n2 && n3>n1){
	cout<<n3<<" is maximum "<<endl;
} 

if (n1<n2 && n1<n3){
	cout<<n1<<" is minimum "<<endl;
}
if (n2<n1 && n2<n3){
	cout<<n2<<" is minimum "<<endl;
}
if (n3<n2 && n3<n1){
	cout<<n3<<" is minimum "<<endl;
} 

		return 0;
}
