#include <iostream>
using namespace std;
int gan, ss, hv = 0;
void nhapmang(int a[], int &n)
{
	do {
		cout << "so phan tu trong mang:";
		cin >> n;
	} while (n <= 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void Input(int a[], int &n, int &k)
{

	do {
		cout << "so phan tu trong mang:";
		cin >> n;
	} while (n <= 0 || n > 100);
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (k < a[i])
			k = a[i];
	}

}
void hoanvi(int &x, int &y)
{
	int tam = x;
	x = y;
	y = tam;

}
void shift(int a[], int l, int r, int &gan, int &ss, int &hv)
{
	int x, i, j;
	i = l;
	j = 2 * i;
	x = a[i];
	gan += 3;
	while (ss++,j <= r)
	{
		if (ss++,j < r)
			if (ss++,a[j] < a[j + 1])
				j++; gan++;
		if (ss++,a[j] <= x)
			return;
		else
		{
			a[i] = a[j];
			a[j] = x;
			i = j;
			j = 2 * i;
			x = a[j];
			gan += 5;

		}
	}
}
void heapsort(int a[], int n,int& gan, int &ss, int &hv)
{
	int q = n / 2; gan++;
	while (ss++,q >= 0)
	{
		shift(a, q, n - 1,gan,ss,hv);
		q--; gan++;
	}
	int r = n - 1; gan++;
	while (ss++,r > 0)
	{
		hoanvi(a[0], a[r]);
		hv++;
		r--; gan++;
		gan += 3;
		if (ss++,r > 0)
			shift(a, 0, r, gan, ss, hv);
	}

}
void quicksort(int a[], int l, int r, int &gan, int &ss, int &hv)
{
	int x, i, j;
	x = a[(l + r) / 2];
	i = l;
	j = r;
	gan += 3;
	while (ss ++, i < j)
	{
		while (ss++,a[i] < x)
		{
			i++;
		}
		while (ss++,a[j] > x)
		{
			j--; gan++;
		}
		if (ss++,i <= j)
		{
			hoanvi(a[i], a[j]);
			hv++;
			i++; j--; gan += 5;
		}
	}
	if (ss++,l < j)
		quicksort(a, l, j, gan, ss, hv);
	if (i < r)
		quicksort(a, i, r, gan, ss, hv);
}
void coutingsort(int a[], int b[], int n, int k, int &kt, int &gan, int &ss, int &hv)
{
	int i, j;
	int c[100];
	for (gan++, i = 0; ss++, i <= k; gan++, i++)
	{
		c[i] = 0; gan++;
	}
	for (gan++,j = 0;ss++, j < n;gan++,j++)
	{
		c[a[j]]++; gan++;
	}
	kt = 0;
	for (gan++, j = 0; ss++, j <= k; gan++, j++)
	{
		while (ss++, c[j] > 0)
		{
			b[kt++] = j; gan++;
			c[j]--; gan++;
			gan++;
		}
	}
}
void xuatmang(int a[], int n)
{
	cout << "mang sau khi sap xep la:";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
		
	}
}
void output(int b[], int kt)
{

	cout << "mang sau khi sap xep la:\n";
	for (int i = 0; i < kt; i++)
	{
		cout << b[i] << " ";
	}
}
int main()
{
	int a[100];
	int b[100];
	int n, l, r;
	int k = 0, kt,chon;
	
	while (true)
	{
		int gan, ss, hv;
		cout << "\nnhap chon:\n"
			<< "0.thoat\n"
			<< "1.heapsort\n"
			<< "2.quicksort\n"
			<< "3.coutingsort\n"
			<< "chon:";
		cin >> chon;
		switch (chon)
		{
			case 0:
				return 1;
				break;
			case 1:
				gan = ss = hv = 0;
				nhapmang(a, n);
				heapsort(a, n, gan, ss, hv);
				xuatmang(a, n);
					cout << "so lan gan:" << gan << endl;
					cout << "so lan so sanh :" << ss << endl;
					cout << "so lan hoan vi:" << hv << endl;
					
				system("pause");
				break;
			case 2:
				gan = ss = hv = 0;
				nhapmang(a, n);
				l = 0;
				r = n - 1;
				quicksort(a,l,r,gan,ss,hv);
				xuatmang(a, n);
				cout << "so lan gan" << gan << endl;
				cout << "so lan so sanh " << ss << endl;
				cout << "so lan hoan vi" << hv << endl;
				system("pause");
				break;
			case 3:
				gan = ss = hv = 0;
				Input(a, n, k);
				coutingsort(a, b, n, k, kt, gan, ss, hv);
				output(b, n);
				cout << "so lan gan:" << gan << endl;
				cout << "so lan so sanh:" << ss << endl;
				system("pause");
				break;
		default:
			cout << "gia tri chon khong hop le\n";
			break;
		}
	}
}