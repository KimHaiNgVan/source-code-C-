//#include<iostream>
//using namespace std;
//void nhapmang(int a[, int & n])
//{
//	do
//	{
//		cout << "nhap so phan tu cua mang: ";
//		cin >> n;
//	} while (n <= 0 || n > 100);
//}
//void hoanvi(int &x, int &y)
//{
//	int tam = x;
//	x = y;
//	y = tam;
//}
//void shist(a[], int t, int right)
//{
//	int x, i, j;
//	i = l;
//	j = 2 * i;
//	x = a[i];
//	while (j <= right)
//	{
//		if (j < right)
//			if (a[j] < a[j + 1])
//				j++;
//		if (x >= a[j])
//			return;
//		else
//		{
//			a[i] = a[j];
//			a[j] = x;
//			i = j;
//			j = 2 * i;
//			x = a[i];
//		}
//	}
//}
//void heapsort(int a[], int n)
//{
//	q = n / 2;
//	while (q >= 0)
//	{
//		shift(a, q, n - 1);
//		q--
//	}
//	int right = n - 1;
//	while (right >= 0)
//	{
//		hoanvi(a[0], a[right]);
//		right--;
//		if (right > 0)
//			shift(a, 0, right);
//	}
//}
//
//void xuatmang(int a[], n)
//{
//	cout << "mang sau khi sap xep la:"; \n
//		for (int i = 0; i < n, i++)
//			cout << a[i] << "  ";
//}
//int main()
//{
//	int a[100],n;
//	nhapmang(a,n);
//	heapsort(a,n);
//	xuatmang(a,n);
//	system("pause");
//	return 0;
//
//}