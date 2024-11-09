#include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter Num ";
    cin>>row;
    for(int i=1; i<=row; i++)
    {
        for(int col=1; col<=(row-i+1); col++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
	return 0;
	}