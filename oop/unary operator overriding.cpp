#include <iostream>
using namespace std;
class abc{
	public:
		int age;
		abc(int a){
			cout<<"enter the age : ";
			cin>>a;
			age=a;
		}
		abc operator ++(){
			age = age*2;
		}
		void show(){
			cout<<"your age : "<<age;
		}
};
int main ()
{	abc obj(0);
++obj;
obj.show();

		return 0;
}