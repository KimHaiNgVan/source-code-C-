#include<cctype>
#include<iostream>
using namespace std;
void xoaspace(char *s)
{
	while (*s)
	{
		if (isspace(*s))
			s++;
		else break;
	}
}
int demspace(char *a)
{
	int space = 0;
	while (*a)
	{
		if (isspace(*a))
			space++;
		a++;
	}

	return space;
}
int demalpha(char *a)
{
	int alpha = 0;
	while (*a)
	{
		if (isalpha(*a))
			alpha++;
		a++;
	}
	return alpha;
}
int demupper(char *a)
{
	int dem = 0;
	while (*a)
	{
		if (isupper(*a))
			dem++;
		a++;
	}
	return dem;
}
int demlower(char *a)
{
	int dem = 0;
	while (*a)
	{
		if (islower(*a))
			dem++;
		a++;
	}
	return dem;
}
void inhoa(char *a)
{
	while (*a)
	{
		*a = toupper(*a);
		a++;
	}

}
void inthuong(char *a)
{
	while (*a)
	{
		*a = tolower(*a);
		a++;
	}
	cout << "Chuoi sau khi in hoa toan bo la: " << a << endl;
}
void inhoatudau(char *a)
{
	while (*a)
	{
		if (isspace(*a))
			a++;
		else break;
	}
	while (*a)
	{
		if (isspace(*(a - 1)) && islower(*a))
		{
			*a = toupper(*a);
		}
		a++;
	}
}
int demKT(char *a)
{
	int dem = 0;
	dem = strlen(a);
	return dem;
}
int demtu(char *a)
{
	int dem = 0;
	while (*a)
	{
		if (isspace(*a))
			a++;
		else break;
	}
	dem++;
	a++;
	if (demKT(a) == 0)
		dem = 0;
	else {
		while (*a)
		{
			if (isspace(*(a - 1)) && isalnum(*a))
			{
				dem++;
			}
			a++;
		}
	}
	return dem;
}
int main()
{
	
	char a[50];
	cout << "Nhap chuoi a: ";
	cin.getline(a, 50);
	char *q;
	q = a;
	inhoa(q);
	cout << "Chuoi sau khi in hoa toan bo la: " << q << endl;
	cout << "So tu trong chuoi la: " << demtu(q) << endl;
	cout << "So ky tu HOA trong chuoi la: " << demupper(q) << endl;
	cout << "So ky tu THUONG trong chuoi la: " << demlower(q) << endl;
	cout << "So KHOANG TRANG trong chuoi la: " << demspace(q) << endl;
	cout << "So KY TU trong chuoi la: " << demalpha(q) << endl;
	return 0;
}