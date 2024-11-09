#include <iostream>
using namespace std;
class abc{
	public:
		void show(int x){
			cout<<"show a  ";
		}
		void show(int x,int y){
			cout<<"show b  ";
		}
		void show(int x,int y,int z){
			cout<<"Show c  ";
		}
};
int main ()
{	abc obj;
obj.show(22.2,11,2.2);
		return 0;
}
