#include <iostream>
#include <fstream>
using namespace std;
int main ()
{	ofstream obj("abc.txt");
	int n;
	if(obj.is_open()){
		
	cout<<"Enter the number : ";
	cin>>n;
	for(int i = 1;i<=10;i++){
		obj<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	obj.close();	
	}
	else{
		
	}

		return 0;
}
