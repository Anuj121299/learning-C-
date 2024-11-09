#include <iostream>
using namespace std;
struct elect{
	char vote;
	char gen;
	int age;
}elect[10];
void election(){
	int a;
	cout<<"Enter the number of person who came for vote : ";
	cin>>a;
	int ta = 0,tb = 0,tc = 0,td = 0;
	for(int i =0;i<a;i++){
		cout<<"enter the gender : ";
		cin>>elect[i].gen;
		cout<<"Enter the age : ";
		cin>>elect[i].age;
		if(elect[i].age>=18)
		{
			cout<<"Enter the vote {a,b,c,d}";
			cin>>elect[i].vote;
		
		if(elect[i].vote=='a'){
			ta +=1;
		}
		else if(elect[i].vote=='b'){
			tb +=1;
		}
		else if(elect[i].vote=='c'){
			tc +=1;
		}
		else{
			td+=1;
		}}else{
			cout<<"you are under age."<<endl;
		}
		
	}
	if(ta>tc && ta>tb && ta>td){
		cout<<"A won the election .Total vote : "<<ta<<endl;
	} else if(tb>tc && tb>ta && tb>td){
		cout<<"B won the election .Total vote : "<<tb<<endl;
	}else if(tc>ta && tc>tb && tc>td){
		cout<<"C won the election .Total vote : "<<ta<<endl;
	}else{
		cout<<"D won the election . Total vote : "<<tc<<endl;
	}
	
	
	
}


int main ()
{
	election();
		return 0;
}
