#include <iostream>
using namespace std;
class a{
	public:
		a(){
			cout<<"const a"<<endl;
		}
		void show(){
			cout<<"method show"<<endl;
		}
};
class b:public a{
	public:
		b(){
			cout<<"const b"<<endl;
		}
};
class c:public a{
	public:
		c(){
			cout<<"const c"<<endl;
		}
};
class d:public b,public c{
	public:
		d(){
			cout<<"const d"<<endl;
		}
};
int main ()
{
	d a;
	//a.show();
		return 0;
}
