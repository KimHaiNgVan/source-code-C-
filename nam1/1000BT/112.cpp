#include<iostream>
using namespace std;
void cauA(int m, int n,char x)
{
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < m; i++)
		{
			cout << x;
		}
		cout << endl;
	}
}
void cauB(int m, int n, char x)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if((j == 1)||(j==m)||(i==1)||(i==n)) cout << x;
		
			else cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	int m, n;
	cout << "Nhap vao chieu dai,rong: "; cin >> m >> n;
	cout << "CAU A:" << endl;
	
	cauA(m,n, '*');
	cauB(m,n,'*');
	return 0;
}