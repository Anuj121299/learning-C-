#include <iostream>
using namespace std;
int main ()
{
int child,female,male,total,totalchildfair,totalfemalefair,totalmalefair;
cout<<"Enter the number of child :- ";
cin>>child;
cout<<"Enter the number of female :- ";
cin>>female;
cout<<"Enter the number of male :- ";
cin>>male;
totalchildfair = child*12;
totalfemalefair = female*15;
totalmalefair = male*20;
cout<<"Total chid fare is :- "<<totalchildfair<<endl;
cout<<"Total female fare is :- "<<totalfemalefair<<endl;
cout<<"Total male fare is :- "<<totalmalefair<<endl;
total = totalchildfair+totalfemalefair+totalmalefair;
cout<<"Total fare is :- "<<total<<endl;

		return 0;
}
