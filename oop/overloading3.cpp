#include <iostream>
using namespace std;
class a{
	public:
		void show(int a){
			cout<<"pops"<<endl;
		}
};
class b:public a{
	public:
		void show(int j){
			cout<<"sons"<<endl;
		}
};
int main ()
{
	b obj;
	obj.show(554);
		return 0;
}
