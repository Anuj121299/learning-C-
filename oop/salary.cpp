#include <iostream>
using namespace std;
class sal{
	private:
		int s,ta,da,pf,hra,tax,ttl;
		float ttl2;
		
		public:
			void party(){
				cout<<"Enter the salary : ";
				cin>>s;
				ta=s*0.15;
				da=s*0.35;
				hra=s*0.30;
				pf=s*0.125;
				cout<<"basic salary : "<<s<<endl;
				cout<<"ta : "<<ta<<endl;
				cout<<"da : "<<da<<endl;
				cout<<"hra : "<<hra<<endl;
				cout<<"pf : "<<pf<<endl;
				ttl = s+ta+da+hra-pf;
				cout<<"salary before tax : "<<ttl<<endl;
				if(ttl>85000 and ttl<100000){
					ttl2=ttl-ttl*0.10;
				}
				else if(ttl>100000 and ttl<120000){
					ttl2=ttl-ttl*0.20;}
				else if(ttl>120000 ){
					ttl2=ttl-ttl*0.30;}
				else {
					ttl2=ttl;
				}
		cout<<"Salary after tax : "<<ttl2<<endl;
			}
};
int main ()
{ sal a;
	a.party();

		return 0;
}
