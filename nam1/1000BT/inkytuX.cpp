#include<iostream>
using namespace std;
void inkytuX(int h)
{
	int k = h;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			if ((j == i) || (j == k))
				cout << "*";
			else cout << " ";
		}
		cout << endl;
		k--;
	}
}
int main()
{
	int h;
	cin >> h;
	inkytuX(h);

	
	return 0;
}