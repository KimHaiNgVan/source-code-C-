//#include<iostream>
//#include<string>
//using namespace std;
//struct NTN {
//	int ngay, thang, nam;
//};
//struct Sach {
//	char tensach[21];
//	char tentg[21];
//	NTN namxuatban;
//};
//void nhap1sach(Sach &s)
//{
//	cin.ignore();
//	cout << "Ten sach: "; cin.getline(s.tensach, 21);
//	cout << "Ten tac gia: "; cin.getline(s.tentg, 21);
//	cout << "Nam xuat ban: "; cin >> s.namxuatban.ngay >> s.namxuatban.thang >> s.namxuatban.nam;
//}
//void nhapds(Sach ds[], int n)
//{
//	for (int i = 0; i<n; i++)
//	{
//		cout << "Nhap vao thong tin sach thu " << i + 1 << " : \n";
//		nhap1sach(ds[i]);
//	}
//}
//void xuat1sach(Sach s)
//{
//	cout << "Ten sach la: " << s.tensach << endl;
//	cout << "Ten tac gia la: " << s.tentg << endl;
//	cout << "Nam xuat ban la: " << s.namxuatban.ngay << "/" << s.namxuatban.thang << "/" << s.namxuatban.nam << endl;
//}
//void xuatds(Sach ds[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		xuat1sach(ds[i]);
//	}
//}
//int main()
//{
//	int n;
//	Sach ds[50];
//	do {
//		cout << "Nhap vao so luong sach: "; cin >> n;
//		if (n<0 || n>50)
//			cout << "Sai roi nhap lai" << endl;
//	} while (n<0 || n>50);
//	nhapds(ds, n);
//	cout << "Xuat danh sach: " << endl;
//	xuatds(ds, n);
//	int dem = 0;
//	for (int i = 0; i<n; i++)
//	{
//		if ((strcmp(ds[i].tentg, "Tran Dung")) == 0)
//		{
//			dem++;
//			if (dem == 1)
//			{
//				cout << "Co sach cua tac gia Tran Dung.\n";
//				cout << "Thong tin quyen sach cua tac gia Tran Dung thu " << i + 1 << " la: "<<endl;
//				xuat1sach(ds[i]);
//			}
//			else
//			{
//				cout << "Thong tin quyen sach cua tac gia Tran Dung thu " << i + 1 << " la: " << endl;
//				xuat1sach(ds[i]);
//			}
//		}
//		
//	}
//	if (dem == 0)
//		cout << "Ko co sach cua tac gia Tran Dung\n";
//	return 0;
//}


//#include <string>
//#include<iostream>
//using namespace std;
//struct NTN {
//	int ngay, thang, nam;
//};
//struct Sach {
//	char tensach[21];
//	char tentg[21];
//	NTN ngayxb;
//};
//void xuat1sach(Sach ds)
//{
//	cout << "Ten sach: " << ds.tensach << endl;
//	cout << "Ten tac gia: " <<ds.tentg << endl;
//	cout << "Ngay xuat ban: " << ds.ngayxb.ngay << "/" << ds.ngayxb.thang << "/" << ds.ngayxb.nam << endl;
//}
//void nhap1sach(Sach &ds)
//{
//	cin.ignore();
//	cout << "Ten sach: "; cin.getline(ds.tensach, 21);
//	cout << "Ten tac gia: "; cin.getline(ds.tentg, 21);
//	cout << "Ngay xuat ban: "; cin >> ds.ngayxb.ngay >> ds.ngayxb.thang >> ds.ngayxb.nam;
//}
//void nhapds(Sach ds[], int n)
//{
//	for (int i = 0; i<n; i++)
//	{
//		cout << "THONG TIN SACH THU " << i + 1 << " LA: " << endl;
//		nhap1sach(ds[i]);
//	}
//}
//void xuatsach(Sach ds[], int n)
//{
//	int dem = 0;
//	for (int i = 0; i<n; i++)
//	{
//		if (strcmp((ds + i)->tentg, "Tran Dung") == 0)
//		{
//			dem++;
//			if (dem == 1)
//			{
//				cout << "Co sach cua tac gia Tran Dung" << endl;
//				xuat1sach(ds[i]);
//			}
//			else {
//				xuat1sach(ds[i]);
//			}
//		}
//	}
//	if (dem == 0) cout << "Ko ton tai sach cua tac gia tran dung \n";
//}
//
//int main()
//{
//	int n;
//	Sach ds[50];
//	do {
//		cout << "Nhap vao so luong sach: "; cin >> n;
//		if (n<0 || n>50)
//			cout << "Sai roi. Nhap lai." << endl;
//	} while (n<0 || n>50);
//	nhapds(ds, n);
//	xuatsach(ds, n);
//	return 0;
//}


#include <iostream>
#include <string>
using namespace std;
const int maxsize = 50;
struct NTN {
	int ngay, thang, nam;
};
struct Sach {
	char tensach[21];
	char tentg[21];
	NTN ngayxb;
};
void nhap1sach(Sach &pds)
{
	cin.ignore();
	cout << "Ten sach: "; cin.getline(pds.tensach, 21);
	cout << "Ten tac gia: "; cin.getline(pds.tentg, 21);
	cout << "Ngay xuat ban: "; cin >> pds.ngayxb.ngay >> pds.ngayxb.thang >> pds.ngayxb.nam;
}
void nhapdssach(Sach *pds, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "--THONG TIN SACH THU " << i + 1 << " --\n";
		nhap1sach(pds[i]);
	}
}
void xuat1sach(Sach &pds)
{
	cout << "Ten sach: " << pds.tensach << endl;
	cout << "Ten tac gia: " << pds.tentg << endl;
	cout << "Ngay xuat ban: " << pds.ngayxb.ngay << "/" << pds.ngayxb.thang << "/" << pds.ngayxb.nam << endl;
}
void xuatdssach(Sach *pds, int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "--THONG TIN QUYEN THU " << i + 1 << "--\n";
		xuat1sach(*(pds + i));
	}
}
void xuatkimdung(Sach *pds, int n)
{
	int dem = 0;
	for (int i = 0; i<n; i++)
	{
		if (strcmp((*(pds + i)).tentg, "Tran Dung") )
		{
			dem++;
			if (dem == 1)
			{
				cout << "Danh sach cac quyen cua tac gia Tran Dung la: \n";
				cout << "--THONG TIN QUYEN SACH THU " << i + 1 << " CUA TRAN DUNG LA: \n";
				xuat1sach(*(pds + i));
			}
			else
			{
				cout << "--THONG TIN QUYEN SACH THU " << i + 1 << " CUA TRAN DUNG LA: \n";
				xuat1sach(*(pds + i));
			}
		}

	}
	if (dem == 0) cout << "Ko co sach cua tac gia Tran Dung\n";
}
int main()
{
	int n;
	Sach *pds;
	do {
		cout << "Nhap vao so luong: "; cin >> n;
		if (n>maxsize || n<0)
			cout << "Sai roi. Nhap lai";
	} while (n>maxsize || n<0);
	pds = new Sach[n];
	nhapdssach(pds, n);
	xuatdssach(pds, n);
	xuatkimdung(pds, n);
	delete[] pds;
	pds = nullptr;
	return 0;
}
