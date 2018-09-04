#include <iostream>
using namespace std;
void tinhNhietDo();
int main()
{
	void tinhNhietDo();
	return 0;
}
void tinhNhietDo()
{
	int luachon;
	double doC, dof;
	while (2)
	{
		cout << "#1.Doi tu do F sang do C.";
		cout << "#2.Doi tu do C sang do F.";
		cout << "#3.KetThuc";
		cout << "Moi lua chon (1-3)"; cin >> luachon;
		if (luachon == 1)
		{
			cout << "Nhap vao do F: " << endl; cin >> dof;
			doC = (dof - 32) / 1.8;
			cout << "Do C la: " << doC << endl;
		}
		else if (luachon == 2)
		{
			cout << "Nhap vao do C: " << endl; cin >> doC;
			dof = (doC * 1.8) + 32;
			cout << "Do C la: " << dof << endl;
		}
		else if (luachon == 3) break;
		else cout << "Khong hop le";
	}
	return;
}