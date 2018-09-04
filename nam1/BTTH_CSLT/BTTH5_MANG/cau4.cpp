#include<iostream>
using namespace std;
int main()
{
	const int max = 100;
	int a[max];
	int n;
	cout << "So luong phan tu cua mang: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; 
		cin >> a[i];
	}
	double tong=0.0;
	double tbc=0.0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
		tbc = tong / (i + 1);
	}
	cout << "Tong cua mang la: " << tong<<endl;
	cout << "Trung binh cong cua mang la: " << tbc << endl;
	return 0;
}