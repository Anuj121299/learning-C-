		#include <iostream>
		using namespace std;
		int main ()
		{ float a;
		cout<<"Enter the hour : ";
		cin>>a;
		if(a<=11){
		cout<<" Good Morning ";
		}else if (a<=17){
			cout<<" Good Afternoon";
		}else if (a<=23){
			cout<<" Good Evening";
		}else {
			cout<<" invalid input";
		}
		
				return 0;
		}
