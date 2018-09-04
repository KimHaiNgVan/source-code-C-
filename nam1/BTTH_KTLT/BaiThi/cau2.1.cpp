#include<iostream>
using namespace std;
double cauA(int n)
{
	if (n == 0)
		return 1.0 / 2;
	else return (1.0 / ((2 * n) + 2)) + cauA(n - 1);
}
int demchucai(char *a)
{
	int dem = 0;
	while (*a)
	{
		if (isalpha(*a))
			dem++;
		a++;
	}
	return dem;
}
int main()
{
	int n;
	do {
		cout << "Nhap vao n: ";
		cin >> n;
		if (n<0)
			cout << "Sai roi. Nhap Lai.\n";
	} while (n<0);
	cout << "Ket qua cua ham de quy cau A tren la: " << cauA(n) << endl;
	cin.ignore();
	char a[20];
	cout << "Nhap vao chuoi ky tu: ";
	cin.getline(a, 100);
	char *p;
	p = a;
	cout << "So chu cai trong chuoi la: " << demchucai(p) << endl;
	return 0;
}