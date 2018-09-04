#include<iostream>
#include<fstream>
#include<string>
const int max = 20;
using namespace std;
int main()
{
	char a[max];
	char *p;
	cout << "Nhap vao chuoi ky tu la: ";
	cin.getline(a,20);
	p = a;
	ofstream outBT4;
	outBT4.open("BT5.txt", ios::app);
	if (outBT4.is_open())
	{
		/*int len = strlen(p);
		for (int i = 0; i < len; i++)
		{
			(p[i])=toupper((p[i]));
		}

		for (int i = 0; i < len; i++)
		{
			outBT4 << p[i]<<endl;
		}*/
		while (*p)
		{
			*p = toupper(*p);
			outBT4 << *p;
			p++;
		}
		outBT4.close();
		cout << "Ghi file thanh cong.";
	}
	else
	{
		cout << "Ghi file that bai";
	}
	return 0;
}