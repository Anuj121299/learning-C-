#include <iostream>
using namespace std;
int main ()
{
 	int a,b,c,total;
 	cout<<"Enter the number of Rs.20 notes : ";
 	cin>>a;
 	cout<<"Enter the number of Rs.50 notes : ";
 	cin>>b;
 	cout<<"Enter the number of Rs.100 notes : ";
 	cin>>c;
 	total = (a*20) + (b*50) + (c*100);
 	cout<<"Total money you have is Rs."<<total;
		return 0;
}
