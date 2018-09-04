#include<iostream>
using namespace std;
const int max = 30;
int main()
{
	int a[30];
	int n;
	cout << "N: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: "; cin >> a[i];
	}
	int *p = a;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) % 2 != 0)
			cout << *(p + i) << "\t";
	}
	int max = *p;
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) > max)
			max = *(p + i);
	}
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) == max)
			cout << "Dia chi cua max la: " << &(p[i]) << endl;
	}
	cout << &p[4];
	return 0;
}