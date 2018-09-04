#include<iostream>
#include<string>
using namespace std;
struct NhanVien {
	string manhanvien;
	string hoten;
	int namlam;
	int namsinh;
};
void nhap1NV(NhanVien &nv)
{
	cout << "Nhap day du thong tin nhan vien \n";
	cout << "Ma nhan vien la: "; getline(cin, nv.manhanvien);
	cout << "Ho va ten Nhan vien la: "; getline(cin, nv.hoten);
	cout << "Nam vao lam cua nhan vien la: "; cin >> nv.namlam;
	cout << "Nam sinh cua nhan vien la: "; cin >> nv.namsinh;
}
void xuat1NV(NhanVien nv)
{
	cout << "\nDay du thong tin nhan vien \n";
	cout << "Ma nhan vien la: " << nv.manhanvien << endl;
	cout << "Ho va ten Nhan vien la: " << nv.hoten << endl;
	cout << "Nam vao lam cua nhan vien la: " << nv.namlam << endl;
	cout << "Nam sinh cua nhan vien la: " << nv.namsinh << endl;
}
void tinh(NhanVien nv)
{
	int tuoi, thamnien;
	tuoi = 2018 - nv.namsinh;
	thamnien = 2018 - nv.namlam;
	cout << "Tuoi cua nhan vien la: " << tuoi << endl;
	cout << "Tham nien cua nhan vien la: " << thamnien << endl;
}
int main()
{
	NhanVien nv;
	nhap1NV(nv);
	xuat1NV(nv);
	tinh(nv);
	return 0;
}