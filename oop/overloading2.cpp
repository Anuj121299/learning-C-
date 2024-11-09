#include <iostream>
using namespace std;
class a{
	public:
		void show(int x,int y){
			cout<<"int int"<<endl;
		}
		void show(double x,int y){
			cout<<"double int"<<endl;
		}
		void show(double x,double y){
			cout<<"Show c"<<endl;
		}
			void show(int x,double y){
			cout<<"int double"<<endl;
		}	
};
int main ()
{	a obj;
obj.show(2.1,1);

		return 0;
}
