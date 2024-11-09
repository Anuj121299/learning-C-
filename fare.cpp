#include <iostream>
using namespace std;
int main ()
{
 float chld,fmale,male,tc,tf,tm,tt;
 cout<<" Enter number of children : ";
 cin>>chld;
cout<<" Enter number of Female : ";
cin>>fmale;
cout<<" Enter number of Male : ";
cin>>male;
tc = chld * 12;
tf = fmale * 15;
tm = male *20;
tt = tc + tf +tm;
cout<<" Total Fare of children : "<<tc<<endl;
cout<<" Total Fare of Female : "<<tf<<endl;
cout<<" Total Fare of male : "<<tm<<endl;
cout<<" Total Fare Earned : "<<tt<<endl;
		return 0;
}
