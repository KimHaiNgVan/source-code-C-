#include<iostream>
#include"PhanSo(bai09).h"
using namespace std;

int main()
{
	PhanSo ps1, ps2, tich, kqtich,tong,kqtong;
	ps1.nhapps(ps1);
	ps2.nhapps(ps2);
	kqtich = tich.tinhtich(ps1, ps2);
	kqtich.rutgon(kqtich);
	kqtich.xuatps(kqtich);
	kqtong = tong.tinhtong(ps1, ps2);
	kqtong.rutgon(kqtong);
	kqtong.xuatps(kqtong);
	return 0;
}