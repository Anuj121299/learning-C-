#include <iostream>
using namespace std;
class abc{
	public:
		int x;
		abc(int a){
			x =a;
		}
		void show(){
			cout<<"ans is : "<<x<<endl;
		}
		void operator +(abc temp){
			x =x*temp.x;
		}
};
int main ()
{
 abc a(20);
 abc b(30);
 a+b;
 a.show();
 abc c(50);
 abc d(36);
 c+d;
 c.show();
		return 0;
}
