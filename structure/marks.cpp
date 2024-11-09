#include <iostream>
using namespace std;
struct st{
	int roll;
	string name;
	int cls;
	int mark[5];
	double per;
	bool result;
}st[10];
void getdata (){
	int a ;
	cout<<"Enter the number of student : ";
	cin>>a;
	
	for(int i = 0 ; i<a;i++){
		cout<<"Enter the roll no : ";
		cin>>st[i].roll;
		cout<<"Enter the name : ";
		cin>>st[i].name;
		cout<<"Enter the class : ";
		cin>>st[i].cls;
		int ttl = 0;
		for(int j =0;j<5;j++){
			cout<<"Enter the marks : ";
			cin>>st[i].mark[j];
			ttl += st[i].mark[j];
		}
		st[i].per=ttl/5;
		if(st[i].per>50){
			st[i].result=true;
		}else{
		st[i].result=false;	
		}	
	}
	
		for(int i = 0 ; i<a;i++)
{
	cout<<"Name : "<<st[i].name<<endl<<"Roll no : "<<st[i].roll<<endl<<"class : "<<st[i].cls<<endl<<"per : "<<st[i].per<<endl<<"Result : "<<st[i].result<<endl<<endl;
		}
}

int main ()
{	getdata();

		return 0;
}
