#include <iostream>
#define MAX 100
using namespace std;

//Nhap cac gia tri vao mang mot chieu
void input (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

//Xuat cac gia tri tu mang mot chieu ra man hinh
void output (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

//Tim kiem gia tri bat ki trong mang mot chieu
int search (int a[], int n, int x)
{
	int i;
	for (i = 0; i < n;)
	{
		if (a[i] != x)
			i++;
		else
			break;
	}

	if (i == n)
		return -1;
	return i;
}

//Chen them mot phan tu tai vi tri cuoi mang
void InsertLast (int a[], int &n, int x)
{
	n++;
	a[n - 1] = x;
}

//Xoa phan tu cuoi danh sach
void DeleteLast (int a[], int &n)
{
	n--;
}

//Xoa mot phan tu tai vi tri i trong danh sach
int DeleteAti(int a[], int &n, int i)
{
	if (i >= 0 && i < n)
	{
		for (int j = i; j < n; j++)
			a[j] = a[j + 1];
		n--;
		return 1;
	}
	return 0;
}

//Them mot phan tu tai vi tri i trong danh sach
int InsertAti(int a[], int &n, int i, int x)
{
	if (i >= 0 && i < n)
	{
		n++;
		for (int j = n - 1; j > i; j--)
			a[j] = a[j - 1];
		a[i] = x;
		return 1;
	}
	return 0;
}

//Tim va xoa neu tim thay
int SearchandDelete(int a[], int &n, int x)
{
	int Find = search(a, n, x);
	if (Find != -1)
	{
		DeleteAti(a, n, Find);
		return 1;
	}
	return 0;
}

int main()
{
	int a[MAX];

	int n;

	//Nhap xuat mang
	cout << "Nhap so luong phan tu n: ";
	cin >> n;

	input (a, n);
	cout << "Mang cua ban la: ";
	output(a, n);

	//Tim 
	int _value01;
	cout << "\nNhap gia tri can tim: ";
	cin >> _value01;
	int _test01 = search(a, n, _value01);
	
	if (_test01 == -1)
		cout << "Khong tim thay gia tri!\n";
	else
		cout << "Tim thay gia tri " << _value01 << " tai vi tri thu: " << _test01 << endl;

	//Chen mot phan tu cuoi danh sach
	int _value02;
	cout << "Nhap gia tri can chen: ";
	cin >> _value02;

	InsertLast(a, n, _value02);
	cout << "\nMang sau khi chen phan tu vao cuoi mang la: ";
	output(a, n);

	//Xoa phan tu cuoi danh sach
	cout << "\nMang sau khi xoa phan tu cuoi la: ";
	DeleteLast(a, n);
	output(a, n);

	system("pause");
	return 0;
}