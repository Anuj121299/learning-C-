#include <iostream>
using namespace std;
class anuj{
	int real;
	int img;
	public:
		anuj(int r ,int i){
			real = r;
			img = i;
		}
		void show () {
		cout<<real<<" + "<<img<<"j"<<endl;
		}
		anuj operator +(anuj &obj){
			anuj temp(0,0);
				temp.real = real + obj.real;
				temp.img = img + obj.img;
			return temp;	
			
		}
		anuj operator *(anuj &obj){
			anuj temp(0,0);
			temp.real=real * obj.real;
			temp.img = img * obj.img;
			return temp;
		}	
};
int main ()
{
 anuj a(2,3);
 anuj b (3,2);
 a.show();
 b.show();
  anuj c(0,0);
  c = a + b;
  c.show();
  c = a*b;
  c.show();
		return 0;
}
