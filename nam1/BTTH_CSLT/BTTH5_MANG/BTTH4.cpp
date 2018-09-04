#include<iostream>
using namespace std;
int tinhLuythua(int a, int b);
int tinhTong(int a);
int tinhGiaithua(int a);
int timSodaonguoc(int a);
int tinhFibonacci(int a);
int tinhTrungbinh(int a, int b, int c);
int timMin(int a, int b, int c);
double tinhCanhhuyen(int a, int b);
bool laCanhhuyen(int a, int b);
int main()
{
	int cau;

	while (69)
	{	
		system("cls"); 
		cout << "Nhap vao CAU ban muon lam: ";
		cin >> cau;
		if (cau == 1)
		{
			int a = 0, b = 0, c = 0;
			do
			{
				cout << "Cau 1: " << endl;
				cout << "Nhap vao ba so a, b, c: ";
				cin >> a >> b >> c;
				if (a < 0 || b < 0 || c < 0) cout << "Sai roi.";
			} while (a < 0 || b < 0 || c < 0);
			cout << "Trung binh 3 so la " << tinhTrungbinh(a, b, c) << endl;
			cout << "So nho nhat trong 3 so la: " << timMin(a, b, c) << endl << endl << endl << endl;
			system("pause");
		}

		else if (cau == 2)
		{
			int a2 = 0, b2 = 0;
			do
			{
				cout << "Cau 2: " << endl;
				cout << "Nhap vao canh a:  "; cin >> a2;
				cout << "Nhap vao canh b:  "; cin >> b2;
				if (a2 <= 0 || b2 <= 0)
				{
					cout << "Do dai cac canh khong hop le.Vui long nhap lai: ";
				}
			} while (a2 <= 0 || b2 <= 0);
			if (laCanhhuyen(a2, b2) == true)
				cout << "Do dai cua canh huyen la: " << tinhCanhhuyen(a2, b2) << endl;
			else
				cout << "Khong phai la 1 tam giac vuong " << endl << endl << endl << endl;
			system("pause");
		}

		else if (cau == 3)
		{
			int x = 0, y = 0;
			do
			{
				cout << "Cau 3: " << endl;
				cout << "Nhap vao so nguyen x va y: ";
				cin >> x >> y;
				if (x < 0 || y < 0)
				{
					cout << "So khong hop le. ";
				}
			} while (x < 0 || y < 0);
			cout << "Luy thua la: " << tinhLuythua(x, y) << endl << endl << endl << endl;
			system("pause");
		}


		else if (cau == 4)
		{
			int n = 0;
			do
			{
				cout << "Cau 4: " << endl;
				cout << "Nhap vao so nguyen n: ";
				cin >> n;
				if (n < 0)
				{
					cout << "So khong hop le. ";
				}
			} while (n < 0);
			cout << "Tong tu 1 den " << n << " la: " << tinhTong(n) << endl << endl;
			system("pause");
		}

		else if (cau == 5)
		{
			int n = 0;
			do
			{
				cout << "Cau 5: " << endl;
				cout << "Nhap vao so nguyen n: ";
				cin >> n;
				if (n < 0)
				{
					cout << "So khong hop le. ";
				}
			} while (n < 0);
			cout << "Cau 5:" << endl;;
			cout << "Giai thua cua " << n << " la: " << tinhGiaithua(n) << endl << endl;
			system("pause");
		}

		else if (cau == 6)
		{
			cout << "Cau 6" << endl;
			int sodaonguoc = 0;
			cout << "Nhap vao so dao nguoc ";
			cin >> sodaonguoc;
			cout << "So dao nguoc cua " << sodaonguoc << " la " << timSodaonguoc(sodaonguoc) << endl << endl << endl;
		}

		else if (cau == 7)
		{
			cout << "Cau 7" << endl;
			int n7;
			do {
				cout << "Nhap vao so n la "; cin >> n7;
				if (n7 < 0) cout << "Sai roi ";
			} while (n7 < 0);
			cout << "So Fibonacci thu " << n7 << " la " << tinhFibonacci(n7) << endl;
			system("pause");
		}


		else if (cau == 0) break;
		else
		{
			cout << "Sai roi. Nhap lai." << endl;
			system("pause");
		}

	}
	return 0;
}
int tinhLuythua(int a, int b)
{
	int luythua = 1;
	for (int i = 1; i <= b; i++)
	{
		luythua *= a;
	}
	return luythua;
}
int tinhTong(int a)
{
	int tong = 0;
	for (int i = 1; i <= a; i++)
		tong += i;
	return tong;
}
int tinhGiaithua(int a)
{
	int giaithua = 1;
	for (int i = 1; i <= a; i++)
	{
		giaithua *= i;
	}
	return giaithua;
}
int timSodaonguoc(int a)
{
	int daonguoc = 0; int b;
	bool soam = false;
	if (a < 0)
	{
		soam = true;
		a = -a;
	}
	while (a>0)
	{
		b = a % 10;
		daonguoc = (daonguoc * 10) + b;
		a /= 10;
	}

	if (soam)
		daonguoc = -daonguoc;

	return daonguoc;
}
int tinhFibonacci(int a)
{
	int kq = 0;
	if (a == 1)
		kq = 0;
	else if (a == 2)
		kq = 1;
	else //n >= 3
	{
		int x = 0, y = 1;
		for (int i = 3; i <= a; i++)
		{
			kq = x + y;
			y = x;
			x = kq;

		}
	}

	return kq;
}
int tinhTrungbinh(int a, int  b, int  c)
{
	int trungbinh = 0;
	trungbinh = (a + b + c) / 3;
	return trungbinh;
}
int timMin(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	else if (c < min) min = c;
	return min;
}
double tinhCanhhuyen(int a, int b)
{
	double canhhuyen = sqrt(a*a + b*b);
	return canhhuyen;
}
bool laCanhhuyen(int a, int b)
{
	bool kq = true;
	double canhhuyen = sqrt(a*a + b*b);
	if (canhhuyen*canhhuyen != a*a + b*b) kq = false;
	return kq;
}
