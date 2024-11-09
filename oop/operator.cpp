#include <iostream>
using namespace std;
class anuj{
	public:
		int age;
		anuj(int a){
			age = a;
		}
		void operator ++(){
			age = age*2;
		}
		void show(){
			cout<<"age is : "<<age<<endl;
		}
};
int main ()
{
	anuj a(30);
	a.show();
	++(a);
	a.show();
	
		return 0;
}
