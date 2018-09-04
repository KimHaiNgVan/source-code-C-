#include<iostream>
using namespace std;
const int max = 30;
int main()
{
	int a[max], n;
	cout << "N: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 - 1 + 1) + 1;
	}
	int *p = a;
	for (int i = 0; i < n; i++)
	{
		cout << *(p+i) << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << "\t";
	}
	cout << endl;
	
	return 0;
}