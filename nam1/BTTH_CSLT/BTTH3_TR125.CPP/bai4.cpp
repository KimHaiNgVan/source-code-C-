#include<iostream>
using namespace std;
int main()
{
	int n=0,a=0;

	cout <<"Nhap vao so nguyen n > 0";
	cin >>n;

	int tong =0;
	while(n>0)
	{
		a=n%10;	
		if (a%2==1)
		{
			tong+=a;
		}
		n/=10;
	}

	cout <<"Tong cac so le la: "<<tong<<endl;
	return 0;
}