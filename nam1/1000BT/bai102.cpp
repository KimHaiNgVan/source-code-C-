#include<iostream>
using namespace std;

bool laNamnhuan(int nam)
{
	bool laNamnhuan = false;
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		laNamnhuan = true;
	return laNamnhuan;
}
int ngaytrongthang(int thang,int nam)
{
	int ngaytrongthang;
	switch (thang)
	{
	case 1: 
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		ngaytrongthang = 31;
		break;
	case 2:
		if (laNamnhuan(nam)) ngaytrongthang = 29;
		else ngaytrongthang = 28;
		break;
	default: ngaytrongthang = 30;
	}
	return ngaytrongthang;
}
void ngayketiep(int ngay, int thang, int nam)
{
	
	if (ngay<ngaytrongthang(thang,nam))
	{
		ngay++;
	}
	else if (thang < 12 && ngay==ngaytrongthang(thang,nam))
	{
		ngay = 1;
		thang++;
	}
	else if(thang==12 && ngay==ngaytrongthang(thang,nam))
	{
		ngay = thang = 1;
		nam++;
	}
	
	cout << "Ngay ke tiep la: " << ngay << "/" << thang << "/" << nam << endl;
}
int main()
{
	int ngay, thang, nam;
	do
	{
		cout << "Nam ";
		cin >> nam;
		if (nam < 0)
			cout << "Nam ko hop le.";
	} while (nam < 0);

	do 
	{
		cout << "Thang: ";
		cin >> thang;
		if (thang < 0 || thang>12)
			cout << "Thang khong hop le.";
	} while (thang < 0 || thang>12);

	do
	{
		
		cout << "Ngay ";
		cin >> ngay;
		if (ngay < 0) cout << "Ngay ko hop le.";
	} while (ngay<0 );
		ngayketiep(ngay, thang, nam);
	return 0;
}