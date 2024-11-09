#include <iostream>
using namespace std;
int main ()
{
	string a = "elephant";
	int ss = a.size();
	int c = 0;
	int d =0;
	for(int i = 0;i<=ss;i++){
		if (a[i]==97||a[i]==101||a[i]==111||a[i]==117){
			c++;
		}else{
			d++;
		}
	}cout<<c<<"  "<<d;
		return 0;
}
