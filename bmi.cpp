#include <iostream>
using namespace std;
int main ()
{
float w,f,i,cm,m,bmi;
cout << " Enter the weight in kg : "<<endl;
cin >> w;
cout << "Enter the height in feet : "<< endl;
cin>>f;
cout<< " Enter your height in inch : "<<endl;
cin>>i;
cm = ((f*12)+i)*2.54;
m = cm/100;
bmi = w/(m*m);
cout<<"your BMI is : "<<bmi;
		return 0;
}
