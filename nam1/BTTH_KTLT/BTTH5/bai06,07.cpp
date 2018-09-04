#include<string>
#include<iostream>
using namespace std;
const int maxsize = 30;
struct SanPham {
	char masp[11];
	string tensp;
	double dongia;
	int soluong;
};
void nhap1sp(SanPham &psp)
{
	cout << "Ma san pham: "; cin >> psp.masp;
	cin.ignore();
	cout << "Ten san pham: "; getline(cin, psp.tensp);
	cout << "Don gia: "; cin >> psp.dongia;
	cout << "So luong: "; cin >> psp.soluong;

}
void nhapdssp(SanPham *psp, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "---THONG TIN SAN PHAM THU " << i + 1 << "---\n";
		nhap1sp(*(psp + i));
	}
}
void xuat1sp(SanPham psp)
{
	cout << "Ma san pham: " << psp.masp << endl;
	cout << "Ten san pham: " << psp.tensp << endl;
	cout << "Don gia: " << psp.dongia << endl;
	cout << "So luong: " << psp.soluong << endl;
}
void xuatdssp(SanPham *psp, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "---THONG TIN SAN PHAM THU " << i + 1 << "---\n";
		xuat1sp(*(psp + i));
	}
}
void suathongtin(SanPham *psp, int n, int x, int y)
{
	for (int i = 0; i<n; i++)
	{
		if (i + 1 == y)
		{
			if (x == 1)
			{
				cout << "Ma San Pham la: "; cin >> (psp + i)->masp;
			}
			else if (x == 2)
			{
				cout << "Ten san pham la: "; getline(cin, (psp + i)->tensp);
			}
			else if (x == 3)
			{
				cout << "Don gia la: "; cin >> (*(psp + i)).dongia;
			}
			else if (x == 4)
			{
				cout << "So luong ton kho la: "; cin >> (psp + i)->soluong;
			}
			else cout << "Ko hop le.";
		}
	}
}
void hoandoi(SanPham &a, SanPham &b)
{
	SanPham tam = a;
	a = b;
	b = tam;
}
void sapxep(SanPham *psp, int n)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (((psp + i))->soluong>((psp + j))->soluong)
			{
				hoandoi(psp[i], psp[j]);
			}
		}
	}
}
void xoa(SanPham *psp, int &n, int p)
{
	for (int i = p; i<n - 1; i++)
	{
		psp[i] = psp[i + 1];
	}
	n--;
}
void xoasanpham(SanPham *psp, int &n, int sothutuxoasp)
{
	for (int i = 0; i<n; i++)
	{
		if (i + 1 == sothutuxoasp)
			xoa(psp, n, i);
	}
}
int main()
{
	int n, thongtinsp = -1, sothutusp = -1, sothutuxoasp = -1;
	SanPham *psp;
	do {
		cout << "NHAP SO LUONG SAN PHAM: "; cin >> n;
		if (n<0 || n>maxsize)
			cout << "Sai roi. Nhap lai!\n";
	} while (n<0 || n>maxsize);

	psp = new SanPham[n];

	nhapdssp(psp, n);
	xuatdssp(psp, n);
	do {
		cout << "Nhap vào thong tin muon thay doi: \n1.Ma san pham. \n2.Ten san pham. \n3.Don gia. \n4 So luong.\n";
		cin >> thongtinsp;
		if (thongtinsp <= 0 || thongtinsp>5)
			cout << "Ko hop le. Nhap lai.\n";
	} while (thongtinsp <= 0 || thongtinsp>4);

	do {
		cout << "Nhap vao so thu tu san pham muon thay doi Thong tin: ";
		cin >> sothutusp;
		if (sothutusp <= 0 || sothutusp>n)
			cout << "Ko hop le. Nhap lai.\n";
	} while (sothutusp <= 0 || sothutusp>n);
	cout << "THONG TIN CUA DANH SACH SAN PHAM SAU KHI THAY DOI LA: \n";
	cin.ignore();
	suathongtin(psp, n, thongtinsp, sothutusp);
	xuatdssp(psp, n);

	do {
		cout << "Nhap vao so thu tu san pham muon XOA : "; cin >> sothutuxoasp;
		if (sothutuxoasp<0 || sothutuxoasp>n)
			cout << "Sai roi. Nhap lai.\n";
	} while (sothutuxoasp<0 || sothutuxoasp>n);
	xoasanpham(psp, n, sothutuxoasp);
	cout << "--THONG TIN DANH SACH SAN PHAM SAU KHI XOA: ---\n";
	xuatdssp(psp, n);

	cout << "DANH SACH SAN PHAM SAU KHI SAP XEP: ";
	sapxep(psp, n);
	xuatdssp(psp, n);
	delete[] psp;
	psp = nullptr;
	return 0;
}