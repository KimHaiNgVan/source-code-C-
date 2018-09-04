#include<iostream>
#include<cctype>
using namespace std;
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
int main()
{
	char a[50];
	cout << "Nhap chuoi a: ";
	cin.getline(a, 50);
	char *q;
	q = a;
	strlen(q);
	cout << "Chieu dai cua chuoi la: "<<strlen(q)<<endl;
	cout << "So ky tu HOA trong chuoi la: " << demlower(q) << endl;
	return 0;
}