//#include <iostream>
//using namespace std;
//void xoaKhoangTrangDauCuoi(char *p)
//{
//	while (*p)
//	{
//		if (isspace(*p))
//			for (int i = 0; i < strlen(p); i++)
//			{
//				p[i] = p[i + 1];
//			}
//		else
//			break;
//	}
//	char *q = p;
//	q = q + strlen(p) - 1;
//	while (*q)
//	{
//		if (isspace(*q))
//			*q = '\0';
//		else
//			break;
//		q--;
//	}
//}
//void kiemTraKhoangTrang(char *p)
//{
//	char *t = strstr(p, "  ");
//	while (t != NULL)
//	{
//		int l = strlen(p) - strlen(t);
//		for (int i = l; i< strlen(p); i++)
//			p[i] = p[i + 1];
//		t = strstr(p,"  ");
//	}
//}
//int main()
//{
//	char s[100];
//	char *p = s;
//	cout << "nhap chuoi ky tu :";
//	cin.getline(p, 99);
//	xoaKhoangTrangDauCuoi(p);
//	kiemTraKhoangTrang(p);
//	cout << s;
//}
#include<iostream>
#include<cctype>
using namespace std;
void xoakhoangtrang(char *a, int &l)
{
	while (*a) // xoa dau 
		if (isspace(*(a)))
		{
			strcpy(a, a + 1);
			l--;
		}
		else break;

	while (a[l - 1] == ' ')//xoa cuoi
		{
		strcpy(a + l, a + l - 1);
		l--;
		
		}

	while (*a != NULL) //xoa giua 
	{
		if (*a == ' ')
		{
			strcpy(a, a + 1);
			a--;
			l--;
		}
		else a++;
	}
}
void xuat(char *a)
{
	while (*a)
	{
		cout << *a;
		a++;
	}
}
int main()
{
	char a[201];
	cout << "Chuoi: "; cin.getline(a, 201);
	char *p;
	p = a;
	int l = strlen(a);
	xoakhoangtrang(p, l);
	xuat(a);
	return 0;
}