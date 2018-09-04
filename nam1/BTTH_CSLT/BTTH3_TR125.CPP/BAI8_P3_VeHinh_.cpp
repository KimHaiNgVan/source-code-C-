#include<iostream>
using namespace std;
int main()
{
	int i, j, n,chieudai,chieurong;

	cout << "Chieu dai la: "; cin >> chieudai;
	cout << "Chieu rong la: "; cin >> chieurong;
	
	for (int i = 1; i <= chieurong; i++)
	{
		
		for (int j = 1; j <= chieudai; j++)
		{
			cout << "*";
		}
		cout <<endl;
	}
	cout << "\n \n \n ";



	for (int a = 1; a <= chieurong; a++)
	{
		if (a == 1 || a == chieurong)
		{
			for (int i = 1; i <= chieudai; i++)
			{
				cout << "*";
			}
		}
		else
		{
			for (int i = 1; i <= chieudai; i++)
			{
				if (i == 1 || i == chieudai)
				{
					cout << "*";
				}
				else {
					cout << " ";
				}
			}
		}
		cout << endl;
	}
	
	return 0;
}