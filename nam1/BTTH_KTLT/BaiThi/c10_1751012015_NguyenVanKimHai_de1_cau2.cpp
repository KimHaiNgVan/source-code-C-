#include<iostream>
using namespace std;
int demHoa(char *a)
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
int main()
{
	char a[20];
	cout << "Nhap chuoi: ";
	cin.getline(a, 21);
	char *p;
	p = a;
	cout << "So luong tu Hoa la: " << demHoa(p) << endl;
	return 0;
}