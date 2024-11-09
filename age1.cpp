#include <iostream>
using namespace std;
int main ()
{
 int age;
 cout<<"Enter the age : ";
 cin>>age;
 
 if (age<0){
 	cout<<"Yet to be born "<<endl;
 } else if (age<11){
 	cout<<"Child";
 }else if (age<18){
 	cout<<"Teenage";
 }else if (age<45){
 	cout<<"Young";
 }else if (age<60){
 	cout<<"Experience";
 }else {
 	cout<<"Old age";
 }
 
		return 0;
}
