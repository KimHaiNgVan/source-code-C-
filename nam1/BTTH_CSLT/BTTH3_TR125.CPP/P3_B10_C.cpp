#include<iostream>
using namespace std;
int  main()
{
	int h = 0;

	do {
		cout << "Nhap vao chieu cao h la: ";
		cin >> h;
		if (h < 0)
			cout << "Sai roi. Nhap lai ";
	} while (h < 0);

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			cout << "*";	
		}
		cout << endl;
	}
	return 0;
}