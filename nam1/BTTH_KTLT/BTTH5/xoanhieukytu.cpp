#include<iostream>
#include<cctype>
using namespace std;
void xoanhieukytu(char *p, int &n, int x,int y)
{
	int dai = strlen(p);
	for (int i= x-1; i <dai; i++)
	{
		
		(p[i]) = (p[i + y]);
	}
	n=n-y;
}

void xuat(char *p)
{
	while (*p)
	{
		cout << *p;
		p++;
	}
}
int main()
{

	char a[30];
	cout << "Chuoi: ";
	cin.getline(a, 30);
	char *p;
	p = a;
	int chieudai = strlen(a);
	int x;
	cout << "Vi tri can xoa: "; cin >> x;
	int y;
	cout << "Nhap so luong: ";
	cin >> y;
	xoanhieukytu(p, chieudai, x,y);
	
	return 0;
}