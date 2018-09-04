#include<iostream>
#include"cau4.1.h"
using namespace std;

int main()
{
	ThoiGian thoigian;
	int h, m, s;
	do {
		cout << "Gio: "; cin >> h;
		if (h<0 || h>23)
		{
			cout << "Gio ko hop le.Nhap lai\n";
		}
	} while (h<0 || h>23);
	do {
		cout << "Phut: "; cin >> m;
		if (m<0 || m>59)
		{
			cout << "Phut ko hop le.Nhap lai\n";
		}
	} while (m<0 || m>59);
	do {
		cout << "Giay: "; cin >> s;
		if (s<0 || s>59)
		{
			cout << "Giay ko hop le.Nhap lai\n";
		}
	} while (s<0 || s>59);
	thoigian.setgiophutgiay(h,m,s);
	thoigian.kiemtra(thoigian);
	return 0;
}