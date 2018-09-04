#include<iostream>
using namespace std;
int main()
{
	int n=0,sdn=0,chuso=0,cs;

	cout <<"Nhap vao so nguyen n: ";
	cin >>n;

	cs=n;
	while(n>0)
	{
		chuso=n%10;
		sdn =sdn*10+chuso;
		n/=10;
	}
	cout <<"So dao nguoc cua "<<cs<<" la "<< sdn<<endl;

}