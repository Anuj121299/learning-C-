#include <iostream>
using namespace std;
struct st{
	int roll;
	string name;
	int cls;
	double per;
	bool result;	
}st[10];
int main ()
{
	st[0].roll=1;
	st[0].name="Anuj";
	st[0].cls=12;
	st[0].per=99.56;
	st[0].result=true;
	
	st[1].roll=2;
	st[1].name="Neha";
	st[1].cls=11;
	st[1].per=25.23;
	st[1].result=false;
	
	st[2].roll=3;
	st[2].name="Rahul";
	st[2].cls=10;
	st[2].per=45.45;
	st[2].result=true;
	
	st[3].roll=4;
	st[3].name="Aman";
	st[3].cls=10;
	st[3].per=12.12;
	st[3].result=false;
	
	for(int i = 0;i<4;i++){
		cout<<"Name : "<<st[i].name<<endl<<"Roll no : "<<st[i].roll<<endl<<"class : "<<st[i].cls<<endl<<"per : "<<st[i].per<<endl<<"Result : "<<st[i].result<<endl<<endl;
	}
	
	
		return 0;
}
