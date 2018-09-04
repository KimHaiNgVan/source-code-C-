#include<cctype>
#include<iostream>
using namespace std;
double cauA(int n)
{
	if (n == 1)
		return 1.0;
	else return (1.0 / ((2 * n) - 1)) + cauA(n - 1);
}
int demso(char *a)
{
	int so = 0;
	while (*a)
	{
		if (isdigit(*a))
			so++;
		a++;
	}
	return so;
}
int main()
{
	//cau a.
	int n;
	cout << "Nhap vao so nguyen n: "; cin >> n;
	cout << "Ket qua cua ham de quy cau A la: " << cauA(n);
	cin.ignore();
	char a[20];
	char *p;
	cout << "Nhap vao chuoi: ";
	cin.getline(a, 20);
	p = a;
	cout << "So ky tu So trong chuoi la: " << demso(p) << endl;
	return 0;
}