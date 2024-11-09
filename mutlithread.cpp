#include <iostream>
#include <Thread>
using namespace std;
void tab(){
	int n;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	for (int i =1; i<=10;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
void ta(){
	int n;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	for (int i =1; i<=10;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
void t(){
	int n;
	cout<<"Enter the number :"<<endl;
	cin>>n;
	for (int i =1; i<=10;i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
}
int main ()
{    
    thread t1(tab);
	thread t2(ta);
	thread t3(t);
	t1.join();
	t2.join();
	t3.join();
	
		return 0;
}
