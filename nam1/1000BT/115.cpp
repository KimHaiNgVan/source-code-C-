#include<iostream>
#include<string>
using namespace std;
int main()
{
	int dtb[50];
	int toan[50], van[50],n;
	string ten[50];
	cout << "So hoc sinh la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
	
		cout << "Ho va ten: ";
		cin >> ten[i];
		cout << "Diem toan: ";
		cin >> toan[i];
		cout << "Diem van: ";
		cin >> van[i];
		dtb[i] = ((toan[i] + van[i]) / 2);
		cout << "Diem trung binh cua " << ten[i] << " la " << dtb[i] << endl;

	}
	return 0;
}
