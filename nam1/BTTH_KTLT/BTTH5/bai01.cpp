#include<iostream>
#include<string>
using namespace std;
struct PhongBan{
	string maphongban;
	string tenphongban;
};
int main()
{
	PhongBan phongban;
	cout << "Nhap thong tin phong ban: " << endl;
	cout << "Ma phong ban: "; getline(cin, phongban.maphongban);
	cout << "Ten phong ban la: "; getline(cin, phongban.tenphongban);

	cout << "Xuat thong tin phong ban vua nhap la: " << endl;
	cout << "\tMa phong ban la: " << phongban.maphongban<<endl;
	cout << "\tTen phong ban la: " << phongban.tenphongban << endl;
	return 0;
}