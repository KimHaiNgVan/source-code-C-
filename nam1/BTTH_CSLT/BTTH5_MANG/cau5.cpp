#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n;
	cout << "Nhap vao kich thuoc cua mang la ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a["<<i<<"]=";
		cin >> a[i];
	}
	int m,x;
	cout << "2 vi tri can xoa la: ";
	cin >> m>>x;
	for (int i = 0; i < n; i++)
	{
		if (i + i == m)
		{
			i = i + 1;
		}
		if (i + i == x)
		{
			i = i + 1;
		}
			cout << a[i]<<" ";
	}
	return 0;
}