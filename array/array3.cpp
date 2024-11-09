#include <iostream>
using namespace std;
int main ()
{   int ar [4] = {22,23,25,26};
	int br [4] = {22,24,75,26};
	int cr [4] = {22,28,85,76};
	int dr [4] = {72,53,25,26};
	int tl1 = 0,tl2=0,tl3=0,tl4=0;
	for(int i = 0;i<4;i++)
	{
		tl1 =tl1 + ar[i];
		tl2 =tl2 + br[i];
		tl3 =tl3 + cr[i];
		tl4 =tl4 + dr[i];
	}
	cout<<tl1<<" , "<<tl2<<" , "<<tl3<<" , "<<tl4;
		
		return 0;
}
