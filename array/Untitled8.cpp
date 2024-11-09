#include <iostream>
using namespace std;
int main ()
{	float			 m1[5],m2[5],m3[5],m4[5],m5[5];
	float ttl1=0,ttl2=0,ttl3=0,ttl4=0,ttl5=0;
	
	for(int i = 0;i<5;i++){
		cout<<"Marks of 1st student : ";
		cin>>m1[i];
	} cout<<endl;
		for(int i = 0;i<5;i++){
		cout<<"Marks of 2nd student : ";
		cin>>m2[i];
	}cout<<endl;
		for(int i = 0;i<5;i++){
		cout<<"Marks of 3rd student : ";
		cin>>m3[i];
	}cout<<endl;
		for(int i = 0;i<5;i++){
		cout<<"Marks of 4th student : ";
		cin>>m4[i];
	}cout<<endl;
		for(int i = 0;i<5;i++){
		cout<<"Marks of 5th student : ";
		cin>>m5[i];
	}cout<<endl;
	for(int i = 0;i<5;i++){
		ttl1=ttl1+m1[i];
		ttl2=ttl2+m2[i];
		ttl3=ttl3+m3[i];
		ttl4=ttl4+m4[i];
		ttl5=ttl5+m5[i];
	}
	cout<<"Total marks of 1st student : "<<ttl1<<" and % :"<<ttl1/5<<endl;
	cout<<"Total marks of 2nd student : "<<ttl2<<" and % :"<<ttl2/5<<endl;
	cout<<"Total marks of 3rd student : "<<ttl3<<" and % :"<<ttl3/5<<endl;
	cout<<"Total marks of 4th student : "<<ttl4<<" and % :"<<ttl4/5<<endl;
	cout<<"Total marks of 5th student : "<<ttl4<<" and % :"<<ttl5/5<<endl;

		return 0;
}
