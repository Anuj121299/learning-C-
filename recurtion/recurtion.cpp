#include <iostream>
using namespace std;
int fun(int n){
	if(n==1){
		return 1;
	} 
	return n + fun(n-1);
}
int main ()
{
	cout<<fun(10);
		return 0;
}
