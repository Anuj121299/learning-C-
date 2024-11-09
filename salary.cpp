#include <iostream>
using namespace std;
int main ()
{ char a;
float bs,da,ta,hra,pf,tax,total,t;
cout<<"Enter the gender : ";
cin>>a;
cout<<"Enter the basic salary : ";
cin>>bs;
if(a=='m'){
	da=bs*0.4;
	ta=bs*0.15;
	hra=bs*0.20;
	pf=bs*0.12;
	total = da+ta+hra+bs-pf;
	//cout << "Salary before tax : "<<total;
	
	if(total>100000){
		tax=total*0.10;
		t=bs-tax;
		cout<<"Gross salary : "<<total<<endl;
		cout<<"Basic salary : "<<bs<<endl;
		cout<<"DA : "<<da<<endl;
		cout<<"TA : "<<ta<<endl;
		cout<<"HRA : "<<hra<<endl;
		cout<<"PF : "<<pf<<endl;
		cout<<"TAX : "<<tax<<endl;
		cout<<"Salary after tax : "<<t<<endl;
			}
	else{
			cout<<"Gross salary : "<<total<<endl;
		cout<<"Basic salary : "<<bs<<endl;
		cout<<"DA : "<<da<<endl;
		cout<<"TA : "<<ta<<endl;
		cout<<"HRA : "<<hra<<endl;
		cout<<"PF : "<<pf<<endl;
		cout<<"TAX : "<<tax<<endl;
		cout<<"Salary after tax : "<<total<<endl;
	}
} else if (a=='f'){
	da=bs*0.5;
	ta=bs*0.10;
	hra=bs*0;
	pf=bs*0.12;
	total = da+ta+hra+bs-pf;
//	cout << "Salary before tax : "<<total<<endl;
	if(total>100000){
		tax=total*0.20;
		t=bs-tax;
		cout<<"Gross salary : "<<total<<endl;
		cout<<"Basic salary : "<<bs<<endl;
		cout<<"DA : "<<da<<endl;
		cout<<"TA : "<<ta<<endl;
		cout<<"HRA : "<<hra<<endl;
		cout<<"PF : "<<pf<<endl;
		cout<<"TAX : "<<tax<<endl;
		cout<<"Salary after tax : "<<t<<endl;
	
}else {
		cout<<"Gross salary : "<<total<<endl;
		cout<<"Basic salary : "<<bs<<endl;
		cout<<"DA : "<<da<<endl;
		cout<<"TA : "<<ta<<endl;
		cout<<"HRA : "<<hra<<endl;
		cout<<"PF : "<<pf<<endl;
		cout<<"TAX : "<<tax<<endl;
		cout<<"Salary after tax : "<<total<<endl;
}


		return 0;}
}
