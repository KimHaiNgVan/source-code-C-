#include<iostream>
using namespace std;
bool kiemtraNamnhuan(int nam)
{
	bool namnhuan=false;
	if ((nam % 4 == 0 && nam & 100 != 0) || (nam % 400 == 0))
		namnhuan = true;
	return namnhuan;
}
int main()
{
	int nam, thang,ngay;
	cout << "Nam: "; cin >> nam;
	cout << "Thang: ", cin >> thang;
	switch (thang) {
	case 1:
	case 3:
	case 5: 
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Co 31 ngay:" << endl; break;
	case 2: {if (kiemtraNamnhuan(nam)) cout << "Co 29 ngay ";
			else cout << "Co 28 ngay "; break; }
	default:cout << "Co 30 ngay." << endl; break;
	}
	return 0;
}