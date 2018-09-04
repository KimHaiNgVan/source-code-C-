#include<iostream>
using namespace std;
void vepascal(int h,int a[20][20])
{
	/*for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				a[i][j] = 1;
				cout << a[i][j] << " ";
			}
			else
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
				cout << a[i][j] << " ";
			}
		}
		cout << endl;
	}*/
	for (int i = 0; i < h; i++)
	{ 
		
		if (i == j || j == 0)
		return 1;
	}
	
}
int main()
{
	int h,a[20][20];
	cout << "Chieu cao la: "; cin >> h;
	vepascal(h,a);

	return 0;
}