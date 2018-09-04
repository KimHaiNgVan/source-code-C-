#include<iostream>
using namespace std;
class GPG {
private:
	int gio, phut, giay;
public:
	int getgio();
	int getphut();
	int getgiay();
	void setgio(int a);
	void setphut(int a);
	void setgiay(int a);
	void nhap(GPG &a);
	void xuat(GPG a);
	GPG thanhtich(GPG a, GPG b);
};
void GPG::setgio(int a)
{
	gio = a;
}
void GPG::setphut(int a)
{
	phut = a;
}
void GPG::setgiay(int a)
{
	giay = a;
}
int GPG::getgio()
{
	return gio;
}
int GPG::getphut()
{
	return phut;
}
int GPG::getgiay()
{
	return giay;
}
void GPG::nhap(GPG &a)
{
	int h, p, g;
	do {
		cin >> a.gio >> a.phut >> a.giay;
		if (a.gio<0 || a.phut<0 || a.giay<0 || a.gio>11 || a.phut>59 || a.giay>59)
			cout << "Sai roi.Nhap lai\n";
	} while (a.gio<0 || a.phut<0 || a.giay<0 || a.gio>11 || a.phut>59 || a.giay>59);

}
void GPG::xuat(GPG a)
{
	cout << a.gio << ":" << a.phut << ":" << a.giay << endl;
}
GPG GPG::thanhtich(GPG bd, GPG kt)
{
	GPG kq;
	int giaybd, giaykt, thanhtich;
	giaybd = bd.gio * 3600 + bd.phut * 60 + bd.giay;
	giaykt = kt.gio * 3600 + kt.phut * 60 + kt.giay;
	if (giaybd>giaykt)
	{
		kq.gio = kq.phut = kq.giay = 0;
	}
	else
	{
		thanhtich = giaykt - giaybd;
		kq.gio = thanhtich / 3600;
		kq.phut = (thanhtich - kq.gio) / 60;
		kq.giay = thanhtich - kq.gio * 3600 - (kq.phut * 60);
	}
	return kq;
}
int main()
{
	GPG bd, kt, kq, thanhtich;
	cout << "Nhap vao thoi gian BAT DAU: ";
	bd.nhap(bd);
	cout << "Nhap vao thoi gian KET THUC: ";
	kt.nhap(kt);
	bd.xuat(bd);
	kt.xuat(kt);
	thanhtich = kq.thanhtich(bd, kt);
	cout << "Thanh tich dat duoc la: ";
	thanhtich.xuat(thanhtich);
	return 0;
}