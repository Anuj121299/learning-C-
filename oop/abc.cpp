#include <iostream>
using namespace std;
void prm(int n)
{
		int cod = 0;
		for(int i = 2;i<n;i++)
		{
			if(n%i==0)
			{
				cod++;
			}
		}
		if(cod==0)
		{
			cout<<"number is prime : "<<n<<endl;
		}
	
}
int main ()
{
	int a[]={11,25,554,6,1,144,56,85,21,13,17,19,65,74};
	
	int s=sizeof(a)/4;
	for (int i = 0;i<s;i++)
	{
		prm(a[i]);
	//	cout<<a[i]<<", ";
	}
		return 0;
}