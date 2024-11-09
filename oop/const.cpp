#include <iostream>
using namespace std;
class anuj{
	public:
		int age ;
		anuj(int x){
			age=x;
		}
		void show(){
			cout<<"Your age is : "<<age<<endl;
		}
		
		anuj(anuj &i){
			age = i.age;
		}
};
int main ()
{
	anuj a(31);
	a.show();
	anuj b(45);
	b.show();

		return 0;
}
