#include<iostream>
using namespace std;

int main()
{
	int n, a[20][20],value=1;
	cout << "Nhap vao n: "; cin >> n;
	int min, max;
	min = 0;
	max = n-1;
	while(value<=n*n)
	{ 
		for (int i = 0; i < n; i++)
		{
			a[i][min] = value++;
		}
		min++;
		for (int i = n-1; i >=0; i--)
		{
			a[i][min]=value++;
		}
		min++;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	return 0;
}