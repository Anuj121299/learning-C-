#include <iostream>
using namespace std;
class anuj{
	public:
		int a;
		anuj(int b){
			a=b;
		}
		void show(){
			cout<<"ans is : "<<a<<endl;
		}
		void operator *(anuj temp){
			a =a*temp.a;
			
		}
};
int main ()
{
anuj obj(20);
anuj obj1(30);
obj*obj1;
obj.show();
		return 0;
}
