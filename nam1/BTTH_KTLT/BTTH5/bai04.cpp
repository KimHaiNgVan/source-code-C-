#include<iostream>
#include<string>
using namespace std;
const int maxsize = 45;
struct SinhVien {
	string mssv;
	string hoten;
	string diachi;
	int namsinh;
	double toan;
	double van;
	double anh;
};
void xuat1sv(SinhVien sv)
{
	cout << "MSSV: " << sv.mssv << endl;
	cout << "Ho ten: " << sv.hoten << endl;
	cout << "Dia chi: " << sv.diachi << endl;
	cout << "Nam sinh: " << sv.namsinh << endl;
	cout << "Diem toan: " << sv.toan << endl;
	cout << "Diem van: " << sv.van << endl;
	cout << "Diem Tieng anh: " << sv.anh << endl;
}
void nhap1sv(SinhVien &sv)
{
	cin.ignore();
	cout << "MSSV: "; getline(cin, sv.mssv);
	cout << "Ho ten: "; getline(cin, sv.hoten);
	cout << "Dia chi: "; getline(cin, sv.diachi);
	cout << "Nam sinh: "; cin >> sv.namsinh;
	cout << "Diem toan: "; cin >> sv.toan;
	cout << "Diem van: "; cin >> sv.van;
	cout << "Diem Tieng anh: "; cin >> sv.anh;
}
void nhap1dssv(SinhVien sv[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "THONG TIN CUA SINH VIEN THU " << i + 1 << " LA: " << endl;
		nhap1sv(sv[i]);
	}
}
void xuatthongtin(SinhVien sv[], int n, int x)
{
	for (int i = 0; i<n; i++)
	{
		if (i + 1 == x)
			xuat1sv(sv[i]);
	}
}
double tinhdtb(SinhVien ds)
{
	double dtb = 0.0;
	dtb = ((ds.toan + ds.van) * 2 + ds.anh) / 5;
	return dtb;
}
void xuatdsdtb(SinhVien sv[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "Thong tin va Diem trung binh cua sinh vien thu " << i + 1 << " la: " << endl;
		double dtb = tinhdtb(sv[i]);
		xuat1sv(sv[i]);
		cout << "Diem trung binh la: " << dtb << endl;
	}
}
void xeploai(SinhVien sv[], int n)
{
	for (int i = 0; i<n; i++)
	{
		double diem = tinhdtb(sv[i]);
		if ((diem) >= 8)
			cout << "Sinh vien thu " << i + 1 << " xep loai Gioi\n";
		else if ((diem)<8 && (diem) >= 6.5)
			cout << "Sinh vien thu " << i + 1 << " xep loai Kha\n";
		else if ((diem)<6.5 && (diem)>5)
			cout << "Sinh vien thu " << i + 1 << " xep loai Trung binh\n";
		else if ((diem)<5)
			cout << "Sinh vien thu " << i + 1 << " xep loai duoi Trung Binh\n";
	}
}
int main()
{
	int n, x;
	SinhVien sv[maxsize];

	do {
		cout << "Nhap vao so luong Sinh Vien: "; cin >> n;
		if (n<0 || n>maxsize)
			cout << "Sai roi. Nhap lai";
	} while (n<0 || n>maxsize);

	nhap1dssv(sv, n);
	cout << "Nhap vao so thu tu cua sinh vien can kiem thong tin: "; cin >> x;
	xuatthongtin(sv, n, x);
	xuatdsdtb(sv, n);
	cout << "Bang xep hang cua sinh vien la: " << endl;
	xeploai(sv, n);
	return 0;
}


