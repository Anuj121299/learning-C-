#include <iostream>
using namespace std;
int main ()
{ int age ;
char a = 'm';
char b = 'f';
char c;
cout<<" Enter the gender of person : "<<endl;
cin>>c;
cout<<" Enter the age of the person : "<<endl;
cin>>age;
if(c=='m'){
	if(age>=90){
		cout<<" Your pension is Rs. 4000 "<<endl;
	}
		if(age>=60){
		cout<<" Your pension is Rs. 6000 "<<endl;
	}
		if(age<60){
		cout<<" Your pension is Rs. 0 "<<endl;
	}
}
if(c=='f'){
	if(age>=90){
		cout<<" Your pension is Rs. 3000 "<<endl;
	}
		if(age>=60){
		cout<<" Your pension is Rs. 5000 "<<endl;
	}
		if(age<60){
		cout<<" Your pension is Rs. 0 "<<endl;
	}
}
		return 0;
}
