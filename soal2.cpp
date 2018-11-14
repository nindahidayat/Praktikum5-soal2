#include <iostream>

using namespace std;


int main()
{
	int a,b,c;

	cout<<"masukan nilai ke 1 :";
	cin>>a;
	cout<<"masukan nilai ke 2 :";
	cin>>b;
	cout<<"masukan nilai ke 3 :";
	cin>>c;

	if( (a+b==c) || (a+c==b) )
	{
		cout<<"BENAR";
	}
	else if((b+c==a))
	{
		cout<<"BENAR";
	}
	else
	    {
	    cout<<"SALAH";
	    }

	return 0;
}