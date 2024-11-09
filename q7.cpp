#include <iostream>
using namespace std;
int main ()
{
float u,p;
cout<<"Enter the unit consumed : ";
cin>>u;
if(u<=100){
	p = u*0.50;
	cout<<"Your bill is : $"<<p;
}else if(u<=200){
	p = u*0.75;
	cout<<"Your bill is : $"<<p;
}else if(u<=300){
	p = u*1.20;
	cout<<"Your bill is : $"<<p;
}else if(u>300){
	p = u*1.55;
	cout<<"Your bill is : $"<<p;
}

		return 0;
}
