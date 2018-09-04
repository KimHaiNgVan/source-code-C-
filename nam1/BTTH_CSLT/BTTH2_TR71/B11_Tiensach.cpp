#include<iostream>
using namespace std;
int main()
{
	double trigia, tongtien, thue, vanchuyen, tongsach;

	cout << "Nhap vao tong so tien mua sach la: ";
	cin >> tongtien;
	cout << "Nhap vao tong co sach la: ";
	cin >> tongsach;

	thue = 0.075*tongtien;
	vanchuyen = 2000 * tongsach;
	trigia = tongtien + thue + vanchuyen;

	cout << "Tong tri gia cua don hang la: " << trigia<<endl;
	return 0;
}