#include <iostream>
using namespace std;
int main ()
{int a[4],b[4],c[4],d[4];
int tt1=0,tt2=0,tt3=0,tt4=0;

	for (int i=0;i<4;i++){
		cout<<"Enter the number of student "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"----------------------------------------------------"<<endl;
	for (int i=0;i<4;i++){
		cout<<"Enter the number of student "<<i+1<<" : ";
		cin>>b[i];
	}
	cout<<"----------------------------------------------------"<<endl;
	for (int i=0;i<4;i++){
		cout<<"Enter the number of student "<<i+1<<" : ";
		cin>>c[i];
	}
	cout<<"----------------------------------------------------"<<endl;
	for (int i=0;i<4;i++){
		cout<<"Enter the number of student "<<i+1<<" : ";
		cin>>d[i];
	}
		cout<<"----------------------------------------------------"<<endl;
	
	for (int i=0;i<4;i++){
		tt1=tt1+a[i];
		tt2=tt2+b[i];
		tt3=tt3+c[i];
		tt4=tt4+d[i];
	}
	cout<<"Total of st1 : "<<tt1<<endl;
	cout<<"Total of st2 : "<<tt2<<endl;
	cout<<"Total of st3 : "<<tt3<<endl;
	cout<<"Total of st4 : "<<tt4<<endl;
		return 0;
}
