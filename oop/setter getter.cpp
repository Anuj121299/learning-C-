#include <iostream>
using namespace std;
class employee{
	private:
		int sal;
		public:
			void set(int s){
				sal=s;
			}
			void get(){
				cout<<"sal : "<<sal<<endl;
			}
};
int main ()
{
	employee a;
	a.set(450000);
	a.get();
	a.set(65000);
	a.get();

		return 0;
}
