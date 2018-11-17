#include <iostream>
#define MAX 100
using namespace std;

struct Book
{
	int id;
	char title[40];
	float price;
};

void InputABook(Book &b)
{
	cout << "\tNhap ma sach: ";
	cin >> b.id;

	cin.ignore();

	cout << "\tNhap tua sach: ";
	gets_s(b.title);

	cout << "\tNhap gia: ";
	cin >> b.price;
}

void InputListBook (Book b[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap thong tin sach thu " << i + 1 << "\n";
		InputABook(b[i]);
	}
}

void OutputListBook (Book b[], int n)
{
	cout << "Ma sach\tTua sach\t\tGia\n";
	for (int i = 0; i < n; i++)
	{
		cout << b[i].id << "\t|\t" << b[i].title << "\t|\t" << b[i].price << "\n";
	}
}

//Tim sach co ma la x
int FindIdAsX (Book b[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (b[i].id = x)
			return i + 1;
	}
	return -1;
}

int main ()
{
	Book _b[MAX];
	int n;

	cout << "Nhap so luong sach: ";
	cin >> n;

	InputListBook(_b, n);

	OutputListBook(_b, n);

	system("pause");
	return 0;
}