#include<iostream>
#include<cmath>
using namespace std;
const int maxr = 15, maxc = 15;
void nhapMang(int a[maxr][maxc], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatMang(int a[maxr][maxc], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int timMAX(int a[maxr][maxc], int r, int c)
{
	int max = a[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j]>max)
			max = a[i][j];
		}
	}
	return max;
}
bool XacdinhsoChannhohonN(int a[maxr][maxc], int r, int c, int n)
{
	bool sochanbehonn = false;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] < n && a[i][j] % 2 == 0)
				return true;
		}
	}
}
bool laSNT(int n)
{
	bool laSNT = true;
	for (int i = 2; i<double(sqrt(n)); i++)
		if (n%i == 0)
			laSNT = false;
	return laSNT;
}
int demSNT(int a[maxr][maxc], int r, int c)
{
	int dem = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (laSNT(a[i][j]) == true)
				dem++;
		}
	}
	return dem;
}
int tinhTONGAM(int a[maxr][maxc], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] < 0)
				tong += a[i][j];
		}
	}
	return tong;
}
void sapxeptrenxuongtraiqua(int a[maxr][maxc], int r, int c)
{
	/*int value = 1;
	for (int j = 0; j < c; j++)
	{
		if(j%2==0)
		{
			for (int i = 0; i < r; i++)
				{
					a[i][j]=value++;
				}
		}
		else
		{
			for (int i = r - 1; r >= 0; i--)
			{
				a[i][j] = value++;
			}
		}
		
	}*/
}
int main()
{
	
	int a[maxr][maxc], r, c,n;//Khai báo
	
	do {
		cout << "Nhap vao so DONG: "; cin >> r;
		cout << "Nhap vao so Cot: "; cin >> c;
		if (r < 0 || c < 0 || r>15 || c>15)
			cout << "Sai roi. Nhap lai." << endl;
	} while (r < 0 || c < 0 || r>15 || c>15);

	nhapMang(a, r, c); //Nhap mang
	xuatMang(a, r, c); //Xuat mang

	/*int value = 1;
	
	for (int j = 0; j < c; j++)
	{
		if (j % 2 == 0)
		{
			for (int i = 0; i < r; i++)
			{
				a[i][j] = value++;
			}
		}
		else 
		{
			for (int i = r - 1; r > 0; i--)
			{
				a[i][j] = value++;
			}
		}
	}*/
	/*xuatMang(a, r, c);*/

	//cout<<"MAX cua ma tran tren la: "<<timMAX(a,r,c)<<endl; //Câu 315 tim MAX.

	//cout << "Nhap vao N: "; cin >> n;//Câu 316 Xác định tồn tại giá trị CHẴN bé hơn N.
	//if (XacdinhsoChannhohonN(a, r, c, n))
	//	cout << "Ma tran co chua so chan va nho hon " << n << endl;
	//else cout << "Ma tran khong co chua so chan va nho hon " << n << endl;

	//cout << "SNT co trong ma tran la: " << demSNT(a, r, c)<<endl;//Câu 317 Đếm SỐ NGUYÊN TỐ trong ma trận.

	cout << "Tong cac so am trong ma tran la: " << tinhTONGAM(a, r, c) << endl;//Câu 318 Tổng các Số Am6


	return 0;
}