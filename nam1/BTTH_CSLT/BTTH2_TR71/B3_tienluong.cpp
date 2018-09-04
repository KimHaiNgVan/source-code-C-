#include <iostream>
using namespace std;
int main()
{
	int ngay, cong, luong;

	cout << "Tien cong la: \n";
	cin >> cong;
	cout << "Ngay lam viec la: \n";
	cin >> ngay;

	luong = cong*ngay;

	cout << "Luong la: " << luong << endl;

	return 0;
}