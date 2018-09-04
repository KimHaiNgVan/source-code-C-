#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inm;
	inm.open("BT1.txt", ios::in);
	if (inm.is_open())
	{
		int tong;
		cout << "Mo file de doc du lieu thanh cong." << endl;
		inm >> tong;
		cout << "Tong la: " << tong;
	}
	else {
		cout << "Mo file de doc du lieu khong thanh cong." << endl;
	}
	return 0;
}