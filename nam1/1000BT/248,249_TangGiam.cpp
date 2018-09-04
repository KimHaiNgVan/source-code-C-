#include<iostream>
using namespace std;

void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}

void tangdan(int a[], int n)
{
	bool tangdan;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] > a[i + 1])
		{
			tangdan = false;
			
		}
		
		else if (a[i] < a[i + 1])
		{
			tangdan = true;
		}
		
	}
	if (tangdan == true) cout << "Mang tang dan" << endl;
	else if (tangdan==false) cout << "Mang giam dan" << endl;
	else cout << "Ko xac dinh" << endl;
}

int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	tangdan(a, n);
	return 0;
}