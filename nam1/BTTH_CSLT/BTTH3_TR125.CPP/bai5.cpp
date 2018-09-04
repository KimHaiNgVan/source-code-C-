#include<iostream>
using namespace std;
int main()
{
	int n,nhonhat,lonnhat,chan=0,le=0;
	
	cout <<"Nhap vao so nguyen n: ";
	cin >>n;
	lonnhat=n;
	nhonhat=n;
	
	while(cin>>n)
	{
		if(n%2==0)
		{
			chan+=1;
		}
		else if (n%2==1)
		{
			le+=1;
		}

	if (n<nhonhat)
		{	
			nhonhat=n;
		}
	else if(n>lonnhat)
		{
			lonnhat=n;
		}
	}
	cout <<"Nho nhat cua day so la: "<<nhonhat<<endl;
	cout <<"Lon nhat cua day so la "<<lonnhat<<endl;
	cout <<"Co "<<le<<" so le"<<endl;
	cout<<"Co "<<chan<<" so chan "<<endl;
	return 0;
}