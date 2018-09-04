using namespace std;
#include<iostream>
class ThoiGian {
private:
	int gio, phut, giay;
public:
	int getgio();
	int getphut();
	int getgiay();
	void setgiophutgiay(int a, int b, int c);
	void kiemtra(ThoiGian a);
};
int ThoiGian::getgio() {
	return gio;
}
int ThoiGian::getphut() {
	return phut;
}
int ThoiGian::getgiay() {
	return giay;
}
void ThoiGian::setgiophutgiay(int a, int b, int c)
{
	gio = a;
	phut = b;
	giay = c;
}
void ThoiGian::kiemtra(ThoiGian thoigian)
{
	if (thoigian.gio >= 0 && thoigian.gio<12)
	{
		thoigian.gio = thoigian.gio;
		cout << "Ket qua la: " << thoigian.gio << ":" << thoigian.phut << ":" << thoigian.giay << " AM\n";
	}
	else
	{
		thoigian.gio = thoigian.gio - 12;
		cout << "Ket qua la: " << thoigian.gio << ": " << thoigian.phut << ":" << thoigian.giay << "PM\n";
	}
}