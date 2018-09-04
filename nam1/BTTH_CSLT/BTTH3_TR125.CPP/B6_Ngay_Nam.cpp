#include <iostream>
#include <string>
using namespace std;
int main()
{
	int nam, thang,thang1;
	string  chuoi;
	cout << "Thang: ";
	cin >> thang;
	cout << "Nam: ";
	cin >> nam;
	cin >> thang1;
	switch (thang1)
	{
	case 1: "co 31 ngay"; break;
	case 3:"co 31 ngay. "; break;
	case 5:"co 31 ngay. "; break;
	case 7:"co 31 ngay. "; break;
	case 8:"co 31 ngay. "; break;
	case 10:"co 31 ngay. "; break;
	case 12:"co 31 ngay. "; break;
	case 2:if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
	{
		cout << " co 29 ngay.";
	}
		   else cout << "co 29 ngay. "; break;
	case 4:"co 30 ngay."; break;
	case 6:"co 30 ngay."; break;
	case 9:"co 30 ngay."; break;
	case 11:"co 30 ngay."; break;
	}

	cout << "Thang " << thang << "nam " << nam <<thang1;
	return 0;
}