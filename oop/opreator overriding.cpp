#include <iostream>
using namespace std;
class a{
	public:
	int n;
	a (int x){
		n=x;
	}
	void show(){
		cout<<"sq is : "<<n;
	}
 void operator !()
 {
 	n=n*n;
 }
};
int main ()
{
	a obj(4);
	!(obj);
	obj.show();
	
		return 0;
}
