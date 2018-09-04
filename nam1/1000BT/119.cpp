#include<iostream>
using namespace std;
bool laSNT(int a)
{
	if (a < 2)
	{
		return false;
	}
	else if (a > 2)
	{
		if (a % 2 == 0)
		{
			return false;
		}
		for (int i = 3; i <= 1.0*sqrt((double) a); i += 2)
			{
				if (a%i == 0)
				{
					return false;
				}
			}
	}
	return true;
}
void lietkeSNT(int a)
{
	for (int i = 1; i <= a; i++)
	{
		if (laSNT(i)==false)
			cout << i << " ";
	}
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	lietkeSNT(n);
	return 0;
}