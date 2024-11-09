#include <iostream>
using namespace std;
class a{
	public:
		void show(int x){
			cout<<"Show a"<<endl;
		}
		void show(int x,int y){
			cout<<"Show b"<<endl;
		}
		void show(int x,int y,int z){
			cout<<"Show c"<<endl;
		}	
};
int main ()
{	a obj;
obj.show(2.1);

		return 0;
}
