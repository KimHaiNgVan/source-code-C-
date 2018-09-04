#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void vitriGTNN(int a[], int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < a[min]) min = i;
	}
	cout << "Vi tri cua GTNN: " << min+1 << endl;
}
int main()
{
	int n, a[50];
	cout << "Kich thuoc Mang: ";
	cin >> n;
	nhap(a, n);
	vitriGTNN(a, n);
	return 0;
}