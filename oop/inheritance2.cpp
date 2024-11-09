#include <iostream>
using namespace std;
class papa{
	public:
		void home1(){
			cout<<"this is papa home1 "<<endl;
		}
};
class mum:public papa{
	public:
		void home2(){
			cout<<"this is mum home2 "<<endl;
		}
};
class son:public mum{
	public:
		void scooty(){
			cout<<"this is son scooty "<<endl;
		}
};




int main ()
{
	son a;
	a.home1();
	a.home2();
	a.scooty();
		return 0;
}
