#include <iostream>
using namespace std;
class a{
	public:
		void s(int x,float y){
			cout<<"int "<<x<<"Float "<<y<<endl;
		}
};
int main ()
{   a obj;
	obj.s(2,2.5);


		return 0;
}
