#include<iostream>
#include<string>
using namespace std;
struct HangHoa {
	string mahang;
	string tenhang;
	double dongia;

};
void nhap1hanghoa(HangHoa &hanghoa)
{
	cin.ignore();
	cout << "Ma hang: "; getline(cin, ((hanghoa)).mahang);
	cout << "Ten hang: ";getline(cin, ((hanghoa)).tenhang);
	cout << "Don gia: "; cin >> hanghoa.dongia;
}
void nhapdshanghoa(HangHoa *hanghoa, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "---NHAP VAO THONG TIN HANG HOA THU " << i + 1 << endl;
		nhap1hanghoa(hanghoa[i]);
	}
}
void xuat1hanghoa(HangHoa hanghoa)
{
	cout << "Ma hang: " << ((hanghoa)).mahang<<endl;
	cout << "Ten hang: " << ((hanghoa)).tenhang<<endl;
	cout << "Don gia: " << hanghoa.dongia<<endl;
}
void xuatdshanghoa(HangHoa *hanghoa, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "---THONG TIN HANG HOA THU " << i + 1 << " :\n";
		xuat1hanghoa(hanghoa[i]);
	}
}
void xoahanghoa(HangHoa *hanghoa, int &n, int x)
{
	for (int i = 0; i<n - 1; i++)
	{
		if (i + 1 == x)
			hanghoa[i] = hanghoa[i + 1];
	}
	n--;
}
int main() {
	int n;
	HangHoa *hanghoa;
	do {
		cout << "Nhap vao so luong hang hoa: "; cin >> n;
		if (n<0 || n>10)
			cout << "So luong khong hop le.Nhap lai!\n";
	} while (n<0 || n>10);
	hanghoa = new HangHoa[n];
	nhapdshanghoa(hanghoa, n);
	xuatdshanghoa(hanghoa, n);
	int stt;
	do {
		cout << "Nhap vao So thu tu hang hoa muon xoa: "; cin >> stt;
		if (stt<0 || stt>n)
			cout << "So thu tu khong hop le.Nhap lai!\n";
	} while (stt<0 || stt>n);
	xoahanghoa(hanghoa, n, stt);
	cout << "--THONG TIN HANG HOA SAU KHI XOA LA: \n";
	xuatdshanghoa(hanghoa, n);
	delete[] hanghoa;
	hanghoa = NULL;
	return 0;
}