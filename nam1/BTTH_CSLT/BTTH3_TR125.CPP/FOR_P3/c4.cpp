#include<iostream>
using namespace std;

int main()
{	
	int n,tong=0;
	
	cout <<"Nhap bao nhieu so ";
	cin >>n;
	for(int i=1;i<=n;i++)
	{
		cout <<"Nhap vao so thu "<<i<<" ";
		cin >>i;
		tong+=i;
	}

	cout <<"Tong 3 so la : "<<tong<<endl;
	return 0;
}