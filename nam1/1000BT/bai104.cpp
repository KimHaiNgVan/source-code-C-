#include<iostream>
using namespace std;
bool laNamnhuan(int nam)
{	
	bool namnhuan = false;
	if (((nam % 4 == 0 && nam % 100 != 0)) || (nam % 400 == 0))
	{
		namnhuan = true;
	}
	return namnhuan;
}
int ngaytrongthang(int thang, int nam)
{
	int ngaytrongthang = 0;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		ngaytrongthang = 31; break;
	case 4: case 6: case 9: case 11: 
		ngaytrongthang = 30; break;
	case 2: if (laNamnhuan(nam))
		ngaytrongthang = 29;
			else ngaytrongthang = 28; break;
	}
	return ngaytrongthang;
}
void tinhngaythubaonhieu(int ngay, int thang, int nam)
{
	int tongngay = 0;
	for (int i = 1; i < thang; i++)
	{
		tongngay += ngaytrongthang(i, nam);
	}
	tongngay += ngay;
	cout << "Cach ngay dau trong nam la: " << tongngay << endl;
}
int main()
{
	int ngay, thang, nam;
	cout << "Nhap vao ngay, thang, nam: "; cin >> ngay >> thang >> nam;
	tinhngaythubaonhieu(ngay, thang, nam);
	return 0;
}