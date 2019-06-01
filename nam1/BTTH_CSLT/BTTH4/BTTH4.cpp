#include<iostream>
#include<cmath>
#include<string>
#include <iomanip>
using namespace std;
double tinhKhoangCachHT_CSLT(int a, int b, int c, int d);
double tinhBanKinhHT_CSLT(int a, int b, int c, int d);
double tinhChuViHT_CSLT(int a);
double tinhDienTichHT_CSLT(int a);
int tinhLuythua_CSLT(int a, int b);
int tinhTong_CSLT(int a);
int tinhGiaithua_CSLT(int a);
int timSodaonguoc_CSLT(int a);
int tinhFibonacci_CSLT(int a);
int tinhTrungbinh_CSLT(int a, int b, int c);
int timMin_CSLT(int a, int b, int c);
int uscln_CSLT(int a, int b);
int bscnn_CSLT(int a, int b);
int tinhChuViHCN_CSLT(int a, int b);
int tinhDienTichHCN_CSLT(int a, int b);
int tinhToHop_CSLT(int a);
double tinhToHopNChapK_CSLT(int n, int k);
void inHCN_CSLT(int a, int b);
double tinhCanhhuyen_CSLT(int a, int b);
bool laCanhhuyen_CSLT(int a, int b);
bool laFibonacci_CSLT(int a);
bool laBoiso_CSLT(int a, int b);
bool laSNT_CSLT(int a);
bool laSHT_CSLT(int a);
void inKhung_CSLT(char c, string a,string b);
void inThang_CSLT(int a);
void inHinhVuong_CSLT(char c,int a);
void inPhepToan_CSLT();
double tinhNhietDoC_CSLT(double a);
double tinhNhietDoF_CSLT(double a);
void inBangNhietDof_CSLT(int a,int b);
void inBangNhietDoC_CSLT(int  a, int b);
void HoanDoi_CSLT(int &a, int &b);
void SapXep2_CSLT(int &a, int &b);
void SapXep3_CSLT(int &a, int &b,int &c);
bool laNamNhuan_CSLT(int a);
//void tinhTienLuong_CSLT();
//void tinhBK_CV_Hinhtron_CSLT();
//void tinhDT_TamGiac_CSLT();
//void tinhKC_2diem_CSLT();
//void tinh_Chieudai_String_CSLT();
//void nhiphan_thapphan_CSLT(); void bang_Cuuchuong_CSLT();
//void doanSo_tuonglai_CSLT();
void app_CSLT()
{
	int cau;
	string ten = " ";
	string mssv = " ";
	cout << "  Ho & Ten cua ban la:  ";
	getline(cin, ten);
	cout << "  MSSV cua ban la: ";
	cin >> mssv;
	while (69)
	{
		system("cls");
	
		inKhung_CSLT('*', ten,mssv);
		cout <<"########################### MUC LUC ##############################" << endl;
		cout << "## Nhan 0:Thoat.                                                ##" << endl;
		cout << "## Nhan 1:Cau 1:Tim so Trung Binh va so Nho Nhat                ##" << endl;
		cout << "## Nhan 2:Cau 2:Tinh Canh Huyen cua Tam Giac.                   ##" << endl;
		cout << "## Nhan 3:Cau 3:Tinh Luy Thua cua x^y.                          ##" << endl;
		cout << "## Nhan 4:Cau 4:Tinh Tong tu 1 ==> n.                           ##" << endl;
		cout << "## Nhan 5:Cau 5:Tinh giai thua cua n.                           ##" << endl;
		cout << "## Nhan 6:Cau 6:Tinh so Dao Nguoc cua n.                        ##" << endl;
		cout << "## Nhan 7:Cau 7:In chuoi so Fibonacci.                          ##" << endl;
		cout << "## Nhan 8:Cau 8:Xac dinh Boi so.                                ##" << endl;
		cout << "## Nhan 9:Cau 9:Xac dinh Ky Tu So va Ky Tu Chu.                 ##" << endl;
		cout << "## Nhan 10:Cau 10:Xac dinh So Nguyen To.                        ##" << endl;
		cout << "## Nhan 11:Cau 11:Xac dinh so Palindrome.                       ##" << endl;
		cout << "## Nhan 12:Cau 12:In So Hoan Thien                              ##" << endl;
		cout << "## Nhan 13:Cau 13:Tim Uoc so chung lon nhat.                    ##" << endl;
		cout << "## Nhan 14:Cau 14:In ten Thang.                                 ##" << endl;
		cout << "## Nhan 15:Cau 15:In Hinh Vuong.                                ##" << endl;
		cout << "## Nhan 16:Cau 16:In Hinh Vuong.                                ##" << endl;
		cout << "## Nhan 17:Cau 17:Tinh cac Phep Toan                            ##" << endl;
		cout << "## Nhan 18:Cau 18:Doi Nhiet Do va in Bang Nhiet o.              ##" << endl;
		cout << "## Nhan 19:Cau 19:Hoan Doi 2 so nguyen.                         ##" << endl;
		cout << "## Nhan 20:Cau 20:Kiem tra Nam Nhuan.                           ##" << endl;
		cout << "## Nhan 21:Cau 21:Kiem tra cach ngay dau tien cua nam           ##" << endl;
		cout << "## Nhan 22:Cau 22:In Hinh Chu Nhat.                             ##" << endl;
		cout << "## Nhan 23:Cau 23:Tinh Khoang cach va Ban Kinh cua Hinh tron.   ##" << endl;
		cout << "## Nhan 24:Cau 24:Tinh Luy Thua n.                              ##" << endl;
		cout << "## Nhan 25:Cau 25:Tinh Tien luong.                              ##" << endl;
		cout << "## Nhan 26:Cau 26:Tinh Ban Kinh, Chu vi Hinh tron.              ##" << endl;
		cout << "## Nhan 27:Cau 27:Tinh Dien tich tam giac bat ky.               ##" << endl;
		cout << "## Nhan 28:Cau 28:Tinh khoang cach 2 diem.                      ##" << endl;
		cout << "## Nhan 29:Cau 29:Tinh Chieu dai chuoi.                         ##" << endl;
		cout << "## Nhan 30:Cau 30:Tinh Nhi phan sang Thap Phan.                 ##" << endl;
		cout << "## Nhan 31:Cau 31:Tinh Bang Cuu Chuong AxB.                     ##" << endl;
		cout << "## Nhan 32:Cau 32:Tro choi DOAN so Tuong lai.                   ##" << endl;
		cout << "########################### MUC LUC ##############################" << endl<<endl<<endl;

		cout << "Nhap vao CAU ban muon lam: ";
		cin >> cau;
		/*switch (cau) {
		case 25:
				tinhTienLuong_CSLT();
				break;
			
			case 26:
				tinhBK_CV_Hinhtron_CSLT();
				break;
			case  27: 
				tinhDT_TamGiac_CSLT();
				break;
			case  28:
				tinhKC_2diem_CSLT();
				break;
			case  29:
				tinh_Chieudai_String_CSLT();
				break;
			case  30:
				nhiphan_thapphan_CSLT();
				break;
			case  31:
				bang_Cuuchuong_CSLT();
				break;
			case  32:
				doanSo_tuonglai_CSLT();
				break;
		}
		*/
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
			cout << "Trung binh 3 so la " << tinhTrungbinh_CSLT(a, b, c) << endl;
			cout << "So nho nhat trong 3 so la: " << timMin_CSLT(a, b, c) << endl ;
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
			if (laCanhhuyen_CSLT(a2, b2) == true)
				cout << "Do dai cua canh huyen la: " << tinhCanhhuyen_CSLT(a2, b2) << endl;
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
			cout << "Luy thua la: " << tinhLuythua_CSLT(x, y) << endl << endl << endl << endl;
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
			cout << "Tong tu 1 den " << n << " la: " << tinhTong_CSLT(n) << endl << endl;
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
			cout << "Giai thua cua " << n << " la: " << tinhGiaithua_CSLT(n) << endl << endl;
			system("pause");
		}

		else if (cau == 6)
		{
			cout << "Cau 6" << endl;
			int sodaonguoc = 0;
			cout << "Nhap vao so dao nguoc ";
			cin >> sodaonguoc;
			cout << "So dao nguoc cua " << sodaonguoc << " la " << timSodaonguoc_CSLT(sodaonguoc) << endl << endl << endl;
			system("pause");
		}

		else if (cau == 7)
		{
			cout << "Cau 7" << endl;
			int n7;
			do {
				cout << "Nhap vao so n la "; cin >> n7;
				if (n7 < 0) cout << "Sai roi ";
			} while (n7 < 0);
			cout << "So Fibonacci thu " << n7 << " la " << tinhFibonacci_CSLT(n7) << endl;
			cout << "Chuoi " << n7 << " so Fibonacci la: " << endl;
			for (int i = 1; i <= n7; i++)
			{
				cout << laFibonacci_CSLT(n7) << " ";
			}
			system("pause");
		}


		else if (cau == 8)
		{
			cout << "Cau 8" << endl;
			int x8, y8;
			do
			{
				cout << "Nhap vao so thu nhat va so thu 2: ";
					cin >> x8 >> y8;
					if (x8 < 0 || y8 < 0)cout << "Sai roi";
			} while (x8 < 0 || y8 < 0);
		
				cout << boolalpha<< (laBoiso_CSLT(x8, y8))<<endl;
			system("pause");
		}
		else if (cau == 10)
		{
			cout << "Cau 10" << endl;
			int x9;
			do
			{
				cout << "Nhap vao so nguyen n: "; cin >> x9;
				if (x9 < 0)
					cout << "Sai roi.";
			} while (x9 < 0);
			for (int i = 1; i <= x9; i++)
			{
				if (laSNT_CSLT(i) == true)
					cout << i << " ";
			}

			system("pause");
		}

		else if (cau == 12)
		{
			cout << "Cau 12" << endl;
			int x12;
			do
			{
				cout << "Nhap vao so nguyen n: "; cin >> x12;
				if (x12 < 0)
					cout << "Sai roi.";
			} while (x12 < 0);
			for (int i = 1; i <= x12; i++)
			{
				if (laSHT_CSLT(i)==true)
					cout << i << " ";
			}
			system("pause");
		}


		else if (cau == 13)
		{
			int x13, y13;
			do {
				cout << "Nhap vao 2 so x va y: "; cin >> x13 >> y13;
				if (x13 < 0 || y13 < 0)
					cout << "Sai roi!";
			} while (x13 < 0 || y13 < 0);

			cout << "Uoc so chung lon nhat cua " << x13 << " va " << y13 << " la: " <<uscln_CSLT(x13, y13) << endl;
			cout << "Boi so chung nho nhat cua " << x13 << " va " << y13 << " la: " <<bscnn_CSLT(x13, y13) << endl;
			system("pause");
		}


		else if (cau == 14)
		{
			int n14;
			cout << "Nhap vao so nguyen n: "; cin >> n14;
			inThang_CSLT(n14);
			cout << "\n";
			system("pause");
		}

		else if (cau == 15)
		{
			char c ;
			int x15;
			do {
				cout << "Nhap vao vien hinh vuong: "<< endl;
				cin >> c;
				cout << "Nhap vao chieu dai hinh vuong: "<<endl; cin >> x15;
				if (x15 <= 0) 
					cout << "Khong hop le"<<endl;
			} while (x15 <= 0);
			inHinhVuong_CSLT(c,x15);
			cout << "\n";
			system("pause");
		}


		else if (cau == 17)
		{
			inPhepToan_CSLT();
			system("pause");
		}
		else if (cau == 18)
		{
			int    doc1, dof1, doc2, dof2, doc; double dof;
			cout << "Nhap vao do C: ";
			cin >> doc;
			cout << "Do F la: " << tinhNhietDoF_CSLT(doc) << endl;
			cout << "Nhap vao do F: "; 
			cin >> dof;
			cout << "Do C la: " << tinhNhietDoC_CSLT(dof) << endl;
			cout << "Nhap vao 2 so dau va so cuoi cua do C: "; 
			cin >> doc1 >> doc2;
		 inBangNhietDof_CSLT(doc1 , doc2);
		 cout << "\n";
		 cout << "Nhap vao 2 so dau va so cuoi cua do F: ";
		 cin >> dof1 >> dof2;
		 inBangNhietDoC_CSLT(dof1, dof2);
			system("pause");
		}
		else if (cau == 19)
		{
			int a, b, c;
			cout << "Hoan doi 2 so nguyen a va b ";
			cin >> a >> b;
			HoanDoi_CSLT(a, b);
			cout << "\nSap xep 2 so nguyen a va b theo thu tu tang dan: ";
			cin >> a >> b;
			SapXep2_CSLT(a, b);
			cout << "\nSap xep 3 so nguyen a, b va c theo thu tu tang dan: ";
			cin >> a >> b >> c;
			SapXep3_CSLT(a, b, c);
			system("pause");
		}
		

	else if (cau == 20)
	{
		int nam;
		cout << "Nhap vao so nam: ";
		cin >> nam;
		cout << boolalpha << laNamNhuan_CSLT(nam)<<endl;
		if (laNamNhuan_CSLT(nam)) cout << "Dung roi.Day la nam nhuan."<<endl;
		else cout << "Sai roi. Day khong phai la nam nhuan." << endl;
		system("pause");
	}

	else if (cau == 22)
	{
		int a, b;
		do
		{
			cout << "Nhap vao chieu rong va chieu dai cua HCN: "; cin >> a >> b;
			if (a < 0 || b < 0) cout << "Khong hop le"<<endl;
		} while (a < 0 || b < 0);
			cout << "Chu vi cua hinh chu nhat la: " << tinhChuViHCN_CSLT(a, b) << endl;
			cout << "Dien tich cua hinh chu nhat la: " << tinhDienTichHCN_CSLT(a, b) << endl;
			inHCN_CSLT(a, b);
			system("pause");
	}
	else if (cau == 23)
	{
		int a, b, c, d;
		do
		{
			cout << "Nhap vao toa do x va y cua tam duong tron: "; cin >> a >> b;
			cout << "\nNhap vao toa do x va y cua 1 diem tren duong tron "; cin >> c >> d;
			if (a < 0 || b < 0 || c < 0 || d < 0)
			{
				cout << "Khong hop le\n";
			}
		} while (a < 0 || b < 0 || c < 0 || d < 0);
		cout << "CAUA:"
			<<"\nKhoang cach cua 2 diem la "<<tinhKhoangCachHT_CSLT(a,b,c,d)<<endl;
		cout << "CAUB:\nBan kinh cua Hinh tron la " << tinhBanKinhHT_CSLT(a, b, c, d) << endl;
		
		int x;
		cout << "Nhap vao Ban kinh Hinh tron: "; cin >> x;
		cout << "Ban Kinh cua hinh tron la: " << tinhChuViHT_CSLT(x) << endl;
		cout << "Dien tich cua hinh tron la: " << tinhDienTichHT_CSLT(x)<<endl;
		system("pause");
	}
	else if (cau == 24)
	{
		int n, k;
		cout << "CAU A:\nNhap vao so nguyen n: "; cin >> n;
		cout << "To hop "<<n<<"! la: "<<tinhToHop_CSLT(n)<<endl;
		cout << "CAU B:\nNhap vao so nguyen n va k: "; cin >> n >> k;
		cout << "To hop " << n << " chap " << k << " la: " << tinhToHopNChapK_CSLT(n, k) << endl;
		system("pause");
	}
	else if (cau == 0) break;
	else
	{
		cout << "Sai roi. Nhap lai." << endl;
		system("pause");
	}
		
	}
	
}
int main_CSLT() {
	app_CSLT();
	return 0;
}
int tinhLuythua_CSLT(int a, int b)
{
	int luythua = 1;
	for (int i = 1; i <= b; i++)
	{
		luythua *= a;
	}
	return luythua;
}
int tinhTong_CSLT(int a)
{
	int tong = 0;
	for (int i = 1; i <= a; i++)
		tong += i;
	return tong;
}
int tinhGiaithua_CSLT(int a)
{
	int giaithua = 1;
	for (int i = 1; i <= a; i++)
	{
		giaithua *= i;
	}
	return giaithua;
}
int timSodaonguoc_CSLT(int a)
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
int tinhFibonacci_CSLT(int a)
{
	int kq = 0;
	if (a == 1)
		kq = 0;
	else if (a == 2)
		kq = 1;
	else //n >= 3
	{
		int x = 0, y = 1;
		for (int i = 1; i < a; i++)
		{
			kq = x + y;
			x = y;
			y = kq;
		}
	}

	return kq;
}
int tinhTrungbinh_CSLT(int a, int  b, int  c)
{
	int trungbinh = 0;
	trungbinh = (a + b + c) / 3;
	return trungbinh;
}
int timMin_CSLT(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	else if (c < min) min = c;
	return min;
}
double tinhCanhhuyen_CSLT(int a, int b)
{
	double canhhuyen = sqrt(a*a + b*b);
	return canhhuyen;
}
bool laCanhhuyen_CSLT(int a, int b)
{
	bool kq = true;
	double canhhuyen = sqrt(a*a + b*b);
	if (canhhuyen*canhhuyen != a*a + b*b) kq = false;
	return kq;
}
bool  laFibonacci_CSLT(int a)
{
	int kq;
	bool Fi = false; 
	int x = 0; 
	int y = 1;
	for (int i = 1; i <= a; i++)
	{
		kq = x + y;
		x = y;
		y = kq;
		Fi = true;
		
	}
	if (Fi = true)
		return Fi;
}
bool laBoiso_CSLT(int a, int b)
{
	bool laBoiso = false;
	if (b%a == 0)
		laBoiso = true;

	return laBoiso;
}
bool laSNT_CSLT(int a)
{
	bool SNT = true;
	for (int i = 2; i <= sqrt(1.0*a); i++)
	{
		if (a%i == 0)
			return  false;
		
	}

	return true;
}
bool laSHT_CSLT(int a)
{
	bool SHT = false;
	int tong = 0;
	for (int i = 1; i <= a; i++)
	{
		if (a%i == 0)
			tong += i;
	}
	if (tong == a) 
		SHT = true;
	return SHT;
}
void inKhung_CSLT(char c, string a,string b)
{
	int n = a.length();
	int m = b.length();
	if (n == 0||m==0)
		return;
	
	else if (n < m)
	{
		int tam;
		tam = n;
		n=m;

		cout << "                                  ";
		for (int i = 1; i <= n + 2; i++)
			cout << c;
		cout << endl;

		cout << "                                  ";
		cout << c << a;
		for (int i = 1; i <= n - tam; i++)
		{
			cout << " ";
		}
		cout << c << endl;
		cout << "                                  "; cout << c << b;
		for (int i = 1; i <= n - m - 1 ; i++)
		{
			cout << " ";
		}cout << c;
		cout << "\n";
		cout << "                                  ";
		for (int i = 1; i <= n + 2; i++)
			cout << c;

		cout << endl;
	}
	else 
	{
		cout << "                                  ";
		for (int i = 1; i <= n + 2; i++)
			cout << c;
		cout << endl;

		cout << "                                  ";
		cout << c << a << c << endl;

		cout << "                                  "; cout << c << b;
		for (int i = 1; i <= n - m - 0; i++)
		{
			cout << " ";
		}cout << c;
		cout << "\n";
		cout << "                                  ";
		for (int i = 1; i <= n + 2; i++)
			cout << c;

		cout << endl;
	}
	return;
}
void inThang_CSLT(int a)
{
	switch (a)
	{
	case 1:cout << "Thang Gieng "; break;
	case 2:cout << "Thang Hai "; break;
	case 3:cout << "Thang Ba "; break;
	case 4:cout << "Thang Tu "; break;
	case 5:cout << "Thang Nam  "; break;
	case 6:cout << "Thang Sau "; break;
	case 7:cout << "Thang Bay "; break;
	case 8:cout << "Thang Tam "; break;
	case 9:cout << "Thang Chin"; break;
	case 10:cout << "Thang Muoi "; break;
	case 11:cout << "Thang Muoi Mot  "; break;
	case 12:cout << "Thang Muoi Hai "; break;
	default: cout << "Khong hop le."; break;
	}
	return;
}
int uscln_CSLT(int a, int b)
{
	int uscln = 0;
	while (a != 0 && b != 0)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	if (a == 0) uscln = b;
	else uscln = a;
	return uscln;
}
int bscnn_CSLT(int a, int b)
{
	int tich = a*b;
	int uscln = 0, bscnn = 0;
	while (a != 0 && b != 0)
	{
		if (a > b) a -= b;
		else b -= a;
	}
	if (a == 0) uscln = b;
	else uscln = a;
	bscnn = tich / uscln;
	return bscnn;
}
void inHinhVuong_CSLT(char c,int a)
{
	for (int i = 1; i <= a; i++)
	{

		for (int i = 1; i <= a; i++)
		{
			cout << c;
		}
		cout << endl;
	}return;
}
void  inPhepToan_CSLT()
{
	while (78)
	{
		int a, b, c;
		char d;
		cout << "Nhap vao 2 so nguyen: " << endl; cin >> a >> b;
		cout << "Chon phep toan (1-4) " << endl; cin >> c;
		if (c == 1) cout << a << " + " << b << " = " << a + b << endl;
		else if (c == 2) cout << a << " - " << b << " = " << a - b << endl;
		else if (c == 3) cout << a << " * " << b << " = " << a * b << endl;
		else if (c == 4) cout << a << " / " << b << " = " << a / b << endl;
		else cout << "Khong hop le" << endl;
		cout << "Tiep tuc (C/K)? "; cin >> d;
		if (d != 'c') break;
	}
	return;
}
double tinhNhietDoC_CSLT(double a)
{
	double doc;
	doc = ((a - 32) / 1.8);
	return doc;
}
double tinhNhietDoF_CSLT(double a)
{
	double dof;
	dof = (a *1.8) + 32;
	return dof;
}
void inBangNhietDof_CSLT(int a, int b)
{
	double dof;
	cout << "Do C   Do F" << endl;
	for (int i = a; i <= b; i++)
	{
		cout << i <<"  ";
		for (int j=i; j <= i; j++)
		{
			dof = (j*1.8) + 32;
			cout << dof;
		}
		cout << "\n";
	}
	return ;
}
void inBangNhietDoC_CSLT(int  a, int b)
{
	double doc;
	cout << "Do F   Do C."<<endl;
	for (int i = a; i <= b; i++)
	{
		cout << i << "  ";
		for (int j = i; j <= i; j++)
		{
			doc = (j - 32) / 1.8;
			cout << doc;
		}
		cout << "\n";
	}
	return;
}
void HoanDoi_CSLT(int &a, int &b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
	cout << a << " " << b;
	return;
}
void SapXep2_CSLT(int &a, int &b)
{
	cout << "Theo thu tu tang dan la: ";

	if (b > a) HoanDoi_CSLT(a, b);
	cout << a << " " << b;
}
void SapXep3_CSLT(int &a, int&b, int&c)
{
	if (a > b) HoanDoi_CSLT(a, b);
	if (a > c) HoanDoi_CSLT(a, c);
	if (b > c) HoanDoi_CSLT(b, c);
	cout << a << " " << b << " " << c;
}
bool laNamNhuan_CSLT(int a)
{
	bool laNamNhuan = false;
	if ((a % 4 == 0 && a & 100 != 0) || (a % 400 == 0))
	{
		laNamNhuan = true;
		return laNamNhuan;
	}
	else 
	{
		laNamNhuan = false;
		return laNamNhuan;
	}

}
int tinhChuViHCN_CSLT(int a, int b)
{
	int chuvi = (a+b)*2;
	return chuvi;
}
int tinhDienTichHCN_CSLT(int a, int b)
{
	int dientich = a*b;
	return dientich;
}
void inHCN_CSLT(int a,int b)
{
	for (int i = 1; i <= a; i++)
	{
		if (i == 1 || i == a)
		{
			for (int j = 1; j <= b; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		else
		{
			cout << "*";
			for (int k = 1; k <= b - 2; k++)
				cout << " ";
			cout << "*" << endl;
		}
	}
}
double tinhKhoangCachHT_CSLT(int a, int b, int c, int d)
{
	double khoangcach = sqrt(pow(b - a, 2) + pow(d - c, 2));
	return khoangcach;
}
double tinhBanKinhHT_CSLT(int a, int b, int c, int d)
{
	double bankinh = (tinhKhoangCachHT_CSLT(a, b, c, d) / 2);
	return bankinh;
}
double tinhChuViHT_CSLT(int a)
{
	const double pi= 3.14;
	double chuvi = pi*a;
		return chuvi;
}
double tinhDienTichHT_CSLT(int a)
{
	const double pi = 3.14;
	double dientich = a*a*pi;
	return dientich;
}
int tinhToHop_CSLT(int a)
{
	int tohop=1;
	for (int i = 1; i <= a; i++)
	{
		tohop *= i;
	}
	return tohop;
}
double tinhToHopNChapK_CSLT(int a, int b)
{
	double tohopN=1.0,tohopK=1.0,tohopNchapK=1.0,tohopNK=1.0;
	for (int i = 1; i <= a; i++)
	{
		tohopN *= i;
	}
	for (int j = 1; j <= b; j++)
	{
		tohopK *= j;
	}
	
	if (a <b)
	{
		for (int i = 1; i <= b - a; i++)
		{
			tohopNK *= i;
		}
		tohopNK *= -1;
	}
	else 
	{
		for (int i = 1; i <= b - a; i++)
		{
			tohopNK *= (b - a);
		}
	}
	tohopNchapK = (tohopN) / (tohopK*tohopNK);
	return tohopNchapK;
}
//void tinhTienLuong_CSLT() {
//	int ngay, cong, luong;
//	cout << "Tien cong la: \n";
//	cin >> cong;
//	cout << "Ngay lam viec la: \n";
//	cin >> ngay;
//	luong = cong * ngay;
//	cout << "Luong la: " << luong << endl;
//}
//void tinhBK_CV_Hinhtron_CSLT() {
//	int bk;
//	double cv, dt;
//	const double pi = 3.14;
//
//	cout << "Ban kinh hinh tron la: ";
//	cin >> bk;
//
//	cv = 2 * pi*bk;
//	dt = bk * bk*pi;
//
//	cout << "Chu vi hinh tron: " << cv << endl;
//	cout << "Dien tich hinh tron: " << dt << endl;
//}
//void tinhDT_TamGiac_CSLT() {
//	double a, s, b, c, p;
//
//	cout << "Ba canh cua tam giac la: ";
//	cin >> a >> b >> c;
//
//	p = (a + b + c) / 2;
//	s = sqrt(p*(p - a)*(p - b)*(p - c));
//
//	cout << "Dien tich cua tam giac la: " << s << endl;
//}
//void tinhKC_2diem_CSLT() {
//	double x1, x2, y1, y2, d;
//
//	cout << "Nhap vao toa do diem A: ";
//	cin >> x1 >> y1;
//	cout << "Nhap vao toa do diem B: ";
//	cin >> x2 >> y2;
//
//	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//
//	cout << fixed << setprecision(2) << "Khoang  cach giua 2 diem A va B la: " << d << endl;
//}
//void tinh_Chieudai_String_CSLT() {
//	string s, dai;
//
//	cout << "Nhap vao chuoi ky tu: ";
//	getline(cin, s);
//
//
//
//	cout << "Chieu dai cua chuoi la: " << s.length();
//
//}
//void nhiphan_thapphan_CSLT() {
//	int n, tong = 0, chuso, i = 0, dem = 1, bien;
//
//	cout << "Nhap vao so nhi phan: ";
//	cin >> n;
//
//	bien = n;
//	while (bien > 0)
//	{
//		bien = bien / 10;
//		dem++;
//	}
//	while (i <= (dem - 1))
//	{
//		int chuso = 0;
//		chuso = n % 10;
//		tong += (chuso * pow(2, i));
//		n /= 10;
//		i++;
//	}
//	cout << "Tong so thap phan la: " << tong << endl;
//}
//void bang_Cuuchuong()_CSLT {
//	int x, y;
//	cout << "x: "; cin >> x;
//	cout << "y: "; cin >> y;
//	for (int i = 1; i <= x; i++)
//	{
//		for (int j = 1; j <= y; j++)
//		{
//			cout << i * j << "\t";
//		}
//		cout << endl;
//	}
//}
//void doanSo_tuonglai_CSLT() {
//	srand(time(0));
//	int doan, n, dapan, traloi;
//	dapan = ((1 + rand()) % 10);
//	cout << "Cau tra loi la: "; cin >> traloi;
//	if (traloi == dapan)
//	{
//		cout << "Tra loi dung roi.Dap an la: " << dapan << endl;
//	}
//	else {
//		cout << "Ban da doan sai.Hay thu lai ! Dap an la: " << dapan << endl;
//	}
//}