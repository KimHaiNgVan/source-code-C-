#include<iostream>
using namespace std;
int main()
{
	int a[4][3];
	int i = 0;
	while (i < 4)
	{
		int j = 0;
		while (j < 3)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
			j++;
		}
		i++;
	}

	int c = 0;
	while (c < 4)
	{
		int b = 0;
		while (b < 3)
		{
			cout << a[c][b] << "\t";
			
			b++;
		}
		cout << endl;
		c++;
	}
	return 0;
}