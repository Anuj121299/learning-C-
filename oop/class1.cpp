#include <iostream>
using namespace std;
class a{
	public:
		int age;
		string name;
};
int main ()
{	a obj[10];
	obj[0].age=30;
	obj[0].name="Anuj";
	cout<<obj[0].age<<endl;
	cout<<obj[0].name<<endl;

		return 0;
}
