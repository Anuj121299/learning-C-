#include <iostream>
using namespace std;
struct st {
	int roll;
	string name;
	int cls;
	double per;
	bool result;	
};
int main ()
{
	st s1,s2,s3;
	s1.roll = 1;
	s1.name = "Anuj";
	s1.cls = 10;
	s1.result = true ;
	s1.per = 99.95;
	
	s2.roll = 2;
	s2.name = "Ramesh";
	s2.cls = 11;
	s2.result = true ;
	s2.per = 66.45;
	
	s3.roll = 1;
	s3.name = "Rahul";
	s3.cls = 12;
	s3.result = false ;
	s3.per = 35;
	
	
	
	cout<<"Roll no : "<<s1.roll<<" Name : "<<s1.name<<" class : "<<s1.cls<<" per : "<<s1.per<<" result : "<<s1.result<<endl;
	cout<<"Roll no : "<<s2.roll<<" Name : "<<s2.name<<" class : "<<s2.cls<<" per : "<<s2.per<<" result : "<<s2.result<<endl;
	cout<<"Roll no : "<<s3.roll<<" Name : "<<s3.name<<" class : "<<s3.cls<<" per : "<<s3.per<<" result : "<<s3.result<<endl;

	
		return 0;
}
