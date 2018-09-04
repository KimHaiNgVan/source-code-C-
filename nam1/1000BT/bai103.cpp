#include<iostream>
using namespace std;

bool laNamnhuan(int nam)
{
	bool laNamnhuan = false;
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam & 400 == 0)) laNamnhuan = true;
	return laNamnhuan;
}

int ngaytrongthang(int thang)
{
	int ngaytrongthang;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: ngaytrongthang = 31; break;
	case 2: if (laNamnhuan) ngaytrongthang = 29;
			else ngaytrongthang = 28;
			break;
	default: ngaytrongthang = 30; break;
	}
	return ngaytrongthang;
}
void ngaytruocdo(int ngay, int thang, int nam)
{
	if (ngay == 1)
	{
		if (thang == 1)
		{
			thang = 12;
			nam--;
		}
		else
		{
			ngay = ngaytrongthang(thang - 1);
			thang--;
		}
	}
	else ngay--;
	cout << "Ngay thang nam truoc do la: "<<ngay<<"/"<<thang<<"/"<<nam<<endl;
}
int main()
{
	int nam, ngay, thang;
	do
	{
		cout << "Ngay: "; cin >> ngay;
		cout << "Thang: "; cin >> thang;
		cout << "Nam: "; cin >> nam;
		if (ngay <= 0 || ngay > 31) cout << "Ngay ko hop le."<<endl;
		if (thang < 0 || thang >12) cout << "Thang ko hop le."<<endl;
		if (nam < 0) cout << "Nam ko hop le."<<endl;
	} while ((ngay <= 0 || ngay > 31) || (thang < 0 || thang >12) || (nam < 0));

	ngaytruocdo(ngay, thang, nam);
	return 0;
}