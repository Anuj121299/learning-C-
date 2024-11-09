#include <iostream>
using namespace std;
int main ()
{ 
float maths,phy,chem,total,per;
cout<<" Enter the marks of maths : "<<endl;
cin>>maths;
cout<<" Enter the marks of physics : "<<endl;
cin>>phy;
cout<<" Enter the marks of chemistry : "<<endl;
cin>>chem;
total = maths + phy + chem;
per = total/3;
cout<<"Total marks obtain are : "<<total<<endl;
cout<< " Total Percentage : "<<per<<endl;
if (maths>phy && maths>chem){
	cout<<" Highest marks are in maths : "<<maths<<endl;	
}
if (phy>maths && phy>chem){
	cout<<" Highest marks are in physics : "<<phy<<endl;	
}
if (chem>phy && chem>maths){
	cout<<" Highest marks are in chemistry : "<<chem<<endl;	
}

if (maths<phy && maths<chem){
	cout<<" Lowest marks are in maths : "<<maths<<endl;	
}
if (phy<maths && phy<chem){
	cout<<" Lowest marks are in physics : "<<phy<<endl;	
}
if (chem<phy && chem<maths){
	cout<<" Lowest marks are in chemistry : "<<chem<<endl;	
}



		return 0;
}
