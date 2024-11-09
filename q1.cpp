#include <iostream>
using namespace std;
int main ()
{ int d ;
cout<<"Enter the digit between 1-7 : ";
cin>>d;
if(d==1){
	cout<<" Monday "<<endl;
}
 else if(d==2){
	cout<<" Tuesday "<<endl;
}
else if(d==3){
	cout<<" Wednesday "<<endl;
}
else if(d==4){
	cout<<" Thursday "<<endl;
}
else if(d==5){
	cout<<" Friday "<<endl;
}
else if (d==6){
	cout<<" Saturday "<<endl;
}else if(d==7){
	cout<<" Sunday "<<endl;
} else {
	cout<<" Invalid digit ";
}



		return 0;
}
