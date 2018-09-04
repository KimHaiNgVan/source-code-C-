#include<iostream>
using namespace std;
class PhanSo {
private:
	int mau, tu;
public:
	void settu(int a);
	void setmau(int a);
	int gettu();
	int getmau();
	void nhapps(PhanSo &a);
	void xuatps(PhanSo a);
	void rutgon(PhanSo &a);
	PhanSo tinhtich(PhanSo a, PhanSo b);
	PhanSo tinhtong(PhanSo a, PhanSo b);
};
void PhanSo::settu(int a)
{
	tu = a;
}
void PhanSo::setmau(int a)
{
	mau = a;
}
int PhanSo::gettu()
{
	return tu;
}
int PhanSo::getmau()
{
	return mau;
}
void PhanSo::nhapps(PhanSo &a)
{
	cout << "Nhap vao TU va MAU cua phan so: ";
	cin >> a.tu >> a.mau;
}
void PhanSo::xuatps(PhanSo a)
{
	cout << a.tu << "/" << a.mau;
}
int ucln(int a, int b)
{
	while (b != 0)
	{
		int d = a%b;
		a = b;
		b = d;
	}
	return a;
}
void PhanSo::rutgon(PhanSo &a)
{
	int uc = ucln(a.tu, a.mau);
	a.tu = a.tu / uc;
	a.mau = a.mau / uc;
}
PhanSo PhanSo::tinhtich(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.tu;
	kq.mau = a.mau*b.mau;
	return kq;
}
PhanSo PhanSo::tinhtong(PhanSo a, PhanSo b)
{
	PhanSo kq;
	kq.tu = a.tu*b.mau + b.tu*a.mau;
	kq.mau = a.mau*b.mau;
	return kq;
}