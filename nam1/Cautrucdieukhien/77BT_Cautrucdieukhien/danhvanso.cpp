#include <iostream>
using namespace std;
int main()
{
	string  c, dv;
	int so,c1, dv1,;
	cout << "Nhap vao so nguyen co 2 chu so: ";
	cin >> so;

	c1 = so / 10;
	dv1 = so % 10;

	switch (c1)
	{
		case 1: cout << "Muoi "; break;
		case 2: cout << "Hai muoi "; break;
		case 3: cout << "Ba muoi "; break;
		case 4: cout << "Bom muoi "; break;
		case 5: cout << "Nam muoi "; break;
		case 6: cout << "Sau muoi "; break;
		case 7: cout << "Bay muoi "; break;
		case 8: cout << "Tam muoi "; break;
		case 9: cout << "Chin muoi "; break;
		default:cout << "Khong hop le !!!";
	}

	

	switch (dv1)
	{
	case 1: cout << "Mot "; break;
	case 2: cout << "hai "; break;
	case 3: cout << "ba  "; break;
	case 4: cout << "bon "; break;
	case 5: cout << "nam "; break;
	case 6: cout << "sau"; break;
	case 7: cout << "bay "; break;
	case 8: cout << "tam "; break;
	case 9: cout << "chin "; break;
	default:cout << "Khong hop le !!!";
	}
	
	cout << c1<<dv1 ;
	return 0;
}