#include<iostream>
using namespace std;
int main()
{
	const int max = 100;
	int a[max];
	int n;
	cout << "So phan tu cua mang: "; 
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	int lonnhat=a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > lonnhat)
			lonnhat = a[i];
	}
	cout << "Lon nhat la: "<<lonnhat<<endl;
}
