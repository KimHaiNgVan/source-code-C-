/*#include<iostream>
using namespace std;
int  main()
{
	int h = 0;

	do {
		cout << "Nhap vao chieu cao h la: ";
		cin >> h;
		if (h < 0)
			cout << "Sai roi. Nhap lai ";
	} while (h < 0); int o = h;
	for (int i = 1; i <= o; i++)
	{
		for (int j = 1; j <= h - 1; j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
		h--;
	}



	return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
	int h;
	cout << "Nhap vao chieu cao h: ";
	cin >> h;

	for (int i = 1; i<=h; i++)
	{
		for (int j = h;j>=1 ; j--)
		{
			if (j >i)
				cout << " ";
			else
				cout << "*";
		
		}
	
		cout << endl;
	}

	return 0;
}
