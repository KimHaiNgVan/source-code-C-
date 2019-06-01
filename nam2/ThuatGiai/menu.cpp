#include<iostream>
using namespace std;
#define MAX = 100
int menu()
{
	int choose;
	cout << "==============MENU=============\n"
		<< "1. Heap sort.\n"
		<< "2. Quick sort.\n"
		<< "3. Counting sort.\n"
		<<"==============END===============\n"
		<< "Chon [1-3]: ";
	cin >> choose;
	return choose;
}
void input(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}
void swap(int &a, int &b)
{
	
	int tam = a;
	a = b;
	b = tam;
}

void quicksort(int a[], int left, int right,int &gan, int &ss, int &hv)
{
	int i, x, j;
	i = left;
	j = right;
	x = a[(left + right) / 2];
	gan += 3;
	while (ss++,i < j)
	{
		while (ss++,a[i] < x)
		{
			i++;
			gan++;
		}
		while (ss++,a[j] > x)
		{
			j--;
			gan++;
		}
		if (ss++,i <= j)
		{
			swap(a[i], a[j]);
			hv++;
			i++;
			j--;
			gan += 5;
		}
	}
	if (ss++,j > left)
		quicksort(a, left, j, gan, ss, hv);
	if (ss++,right > i)
		quicksort(a, i, right, gan, ss, hv);
}
void countingsort(int a[], int b[], int n, int &kt, int k, int &gan, int &ss, int &hv)
{
	int c[100];
	int i, j;
	for (gan++,i = 0;ss++, i <= k;gan++, i++)
	{
		c[i] = 0;
		gan++;
	}
	for (gan++,j = 0; ss++,j < n; gan++,j++)
	{
		c[a[j]]++;
		gan++;
	}
	kt = 0;
	gan++;
	for (gan++,i = 0; ss++,i <= k;gan++, i++)
	{
		while (ss++,c[i] > 0)
		{
			b[kt++] = i;
			c[i]--;
			gan += 3;
		}
	}
	
}
void shift(int a[], int l, int n,int &gan,int & ss, int &hv)
{
	int i = l;
	int j = 2 * i;
	int x = a[i];
	gan += 3;
	while (ss++, j <= n)
	{
		if (ss++,j < n) {
			if (ss++,a[j] < a[j + 1])
			{
				gan++;
				j++;
			}
		}
		if (ss++,a[j] <= a[i])
		{
			return;
		}
		else
		{
			a[i] = a[j];
			a[j] = x;
			i = j;
			j = 2 * i;
			x = a[i];
			gan += 5;
		}
	}
}
void heapsort(int a[], int n, int &gan, int &ss, int &hv)
{
	int q = n / 2;
	gan++;
	while (ss++,q >= 0)
	{
		shift(a, q, n - 1,gan,ss,hv);
		q--;
		gan++;
	}
	int right = n - 1;
	gan++;
	while (ss++,right > 0)
	{
		swap(a[0], a[right]);
		hv++;
		gan += 4;
		right--;
		if (ss++,right > 0)
		{
			shift(a, 0, right, gan, ss, hv);
		}
	}
}
void app() {
	int choose,soluong,gan,hv,ss;
	do {
		int a[100];
		system("cls");
		choose = menu();
		int left, right;
		do {
			cout << "Nhap vao so luong: "; cin >> soluong;
			if (soluong < 0)
			{
				cout << "sai roi. nhap lai.\n";
			}
		} while (soluong < 0);
		input(a, soluong);
		switch (choose)
		{
		
		case 1: 
			ss = hv = gan = 0;
			heapsort(a, soluong,  gan, ss,hv);
			cout << "Ham sau khi sap xep la: ";
			output(a, soluong);
			cout << "Phep gan: " << gan << endl;
			cout << "Phep so sanh: " << ss << endl;
			cout << "Phep hoan vi: " << hv << endl;
			break;
		case 2:
			ss = hv = gan = 0;
			left = 0;
			right = soluong - 1;
			quicksort(a, left, right, gan, ss, hv);
			cout << "Ham sau khi sap xep la: ";
			output(a, soluong);
			cout << "Phep gan: " << gan << endl;
			cout << "Phep so sanh: " << ss << endl;
			cout << "Phep hoan vi: " << hv << endl;
			break;
		case 3:
			ss = hv = gan = 0;
			int b[100]; int k = 0, kt;
			for (int i = 0; i < soluong; i++)
			{
				if (a[i] > k)
				{
					k = a[i];
				}
			}
			countingsort(a, b, soluong, kt, k, gan, ss, hv);
			cout << "ham sau khi sap xep la: ";
			output(b, soluong);
			cout << "Phep gan: " << gan << endl;
			cout << "Phep so sanh: " << ss << endl;
			cout << "Phep hoan vi: " << hv << endl;
			break;
		}
		system("pause");
	} while (choose != 0);
}
int main()
{	
	app();
	system("pause");
	return 0;
}