 //Dem so sanh, gan , hoan vi
#include <iostream>
#define MAX 100

using namespace std;

int arr[MAX];
int n;

//Nhap
void InputArr()
{
	do{
		cout << "Nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0 || n > MAX)
			cout << "Nhap sai! Nhap lai!\n";
	}while (n <= 0 || n > MAX);
	cout << "Nhap " << n << " so nguyen: ";
	for (int  i = 0; i < n; i++)
		cin >> arr[i];
}

//Xuat
void PrintArr()
{
	cout << "Danh sach hien tai:\t";
	for (int i = 0; i < n; i++)
		cout << arr[i] << "\t";
	cout << "\n\n";
}

//Hoan vi
void Swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void shift(int l, int n, int &CountCompare, int &CountSet, int &CountSwap)
 {
	 int x, i, j;
	 i = l;
	 j = 2*i;
	 x = arr[i];
	 CountSet = CountSet + 3;
	 while( CountCompare++, j <= n )
	 {
		 CountCompare++; 
		 if( j < n )
		 {
			CountCompare++;
			if( arr[j] < arr[j+1] ) 
			{
				CountSet++;
				j++;
			}
		 }
		 CountCompare++;
		 if( arr[j] <= x )
			return;
		 else
		 {
			arr[i] = arr[j];
			arr[j] = x;
			i = j;
			j = 2*i;
			x = arr[i];
			CountSet += 5;
		 }
		 
	} 
}

//heap
void HeapSort(int &CountCompare,int &CountSet,int &CountSwap)
{
	CountSet++;
	int i = n / 2;
	while (CountCompare++, i >= 0)
	{
		shift(i, n - 1, CountCompare, CountSet, CountSwap);
		i--;
		CountSet++;
	}
	CountSet++;
	int right = n - 1;
	while (CountCompare++, right > 0)
	{
		Swap(arr[0], arr[right]);
		CountSet = CountSet + 3;
		CountSwap++;
		CountSet++;
		right--;
		CountCompare++;
		if (right > 0)
			shift(0, right, CountCompare, CountSet, CountSwap);
	}
}
int main()
{
	InputArr();
	PrintArr();
	int CountCompare, CountSet, CountSwap;
	CountCompare = CountSet = CountSwap = 0;
	HeapSort(CountCompare, CountSet, CountSwap);
	
	cout << "\n\n===== SAU KHI SAP XEP =====\n";
	
	PrintArr();

	cout << "\n===== DANH GIA GIAI THUAT SAP XEP HEAPSORT =====\n";
	cout << "- So lan so sanh: " << CountCompare << endl;
	cout << "- So lan gan: " << CountSet << endl;
	cout << "- So lan hoan vi: " << CountSwap << endl;
	system("pause");
}