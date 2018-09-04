#include<iostream>
#include<string>
using namespace std;
const int maxsize = 10;
struct Kho {
	string makho;
	string tenkho;
	double dongia;
};
void nhap1kho(Kho &s)
{
	cin.ignore();
	cout << "Ma kho: "; getline(cin, s.makho);
	cout << "Ten kho: "; getline(cin, s.tenkho);
	cout << "Don gia: "; cin >> s.dongia;
}
void nhapdskho(Kho *kho, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "---NHAP VAO THONG TIN KHO THU " << i + 1 << ": \n";
		nhap1kho(kho[i]);
	}
}

void xuat1kho(Kho kho)
{
	cout << "Ma kho: " << kho.makho << endl;
	cout << "Ten kho: " << kho.tenkho << endl;
	cout << "Don gia: " << kho.dongia << endl;
}
void xuatdskho(Kho *kho, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "--THONG TIN DANH SACH KHO THU " << i + 1 << " LA: \n";
		xuat1kho(kho[i]);
	}
}
void sapxep(Kho *kho, int n)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (kho[i].dongia>kho[j].dongia)
			{
				Kho tam = (kho[i]);
				(kho[i]) = (kho[j]);
				(kho[j]) = tam;
			}
		}
	}
}
int main()
{
	Kho *dskho;
	int n;
	do {
		cout << "Nhap vao so luong Kho: "; cin >> n;
		if (n<0 || n>maxsize)
			cout << "Sai roi. Nhap lai!\n";
	} while (n<0 || n>maxsize);
	dskho = new Kho[n];

	nhapdskho(dskho, n);
	xuatdskho(dskho, n);

	cout << "--THONG TIN DANH SACH KHO SAU KHI SAP XEP LA: \n";
	sapxep(dskho, n);
	xuatdskho(dskho, n);
	delete[] dskho;
	dskho = NULL;
	return 0;
}