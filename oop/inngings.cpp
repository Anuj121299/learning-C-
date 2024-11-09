#include <iostream>
using namespace std;
class anuj{
	int in1,in2;
	public:
	anuj(int i1,int i2){
		in1 = i1;
		in2 = i2;
	}
	void show(){
		cout<<"india's first inning score "<<in1<<endl;
		cout<<"india's second inning score "<<in2<<endl;
	}
	anuj operator +(anuj &obj){
		anuj temp(0,0);
		temp.in1= in1 + obj.in1;
		temp.in2 = in2+obj.in2;
		
		return temp;
	}
};
int main ()
{
anuj a(2,3);
anuj b (4,6);
a.show();
anuj c(0,0);
c=a+b;
c.show();
		return 0;
}
