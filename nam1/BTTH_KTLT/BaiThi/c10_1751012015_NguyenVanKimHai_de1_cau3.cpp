#include<iostream>
const int maxsize = 10;
using namespace std;
struct SP{
	char tensp[31];
	char masp[31];
	char tenkho[31];
	int soluong;
	double dongia;
};
void nhap1sp(SP &sp)
{
	cin.ignore();
	cout << "Ten san pham: "; cin.getline(sp.tensp, 30);
	cout << "Ma san pham: "; cin.getline(sp.masp, 30);
	cout << "Ten kho: "; cin.getline(sp.tenkho, 30);
	cout << "So luong: "; cin >> sp.soluong;
	cout << "Don gia: "; cin >> sp.dongia;
}
void nhapdssp(SP *sp, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "---NHAP THONG TIN CUA SAN PHAM THU " << i + 1 << ": \n";
		nhap1sp(*(sp+i));
	}
}

void xuat1sp(SP sp)
{
	cout << "Ten san pham: "<<sp.tensp<<endl;
	cout << "Ma san pham: "<<sp.masp<<endl;
	cout << "Ten kho: "<<sp.tenkho<<endl;
	cout << "So luong: "<<sp.soluong<<endl;
	cout << "Don gia: "<< sp.dongia<<endl;
}
void xuatdssp(SP *sp, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "---THONG TIN SAN PHAM THU " << i + 1 << ": \n";
		xuat1sp(*(sp+i));
	
	}
}
void sapxep(SP *sp, int n)
{
	for(int i=0;i<n;i++)
		for (int j = i + 1; j < n; j++)
		{
			if ((*(sp + i)).dongia > (*(sp + j)).dongia)
			{
				SP tam = (*(sp + i));
				(*(sp + i)) = (*(sp + j));
				(*(sp + j)) = tam;
			}
		}
}
int demB(SP *sp,int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (((*(sp + i)).masp)[0] == 'B')
			dem++;
	}
	return dem;
}
int main()
{
	SP *pdssp;
	int n;
	do {
		cout << "So luong San Pham: ";
		cin >> n;
		if (n < 0 || n>maxsize)
			cout << "Sai roi. Nhap lai\n";
	} while (n < 0 || n>maxsize);
	
	pdssp = new SP[n];
	nhapdssp(pdssp, n);
	xuatdssp(pdssp, n);
	cout << "Danh sach sau khi sap xep la: \n";
	sapxep(pdssp, n);
	xuatdssp(pdssp, n);
	if (demB(pdssp, n) != 0)
	{
		cout << "So san pham co ten bat dau bang B: " << demB(pdssp, n) << endl;
	}
	else {
		cout << "So san pham co ten bat dau bang B la 0."<< endl;
	}
	
	delete[]pdssp;
	pdssp = NULL;
	return 0;
}