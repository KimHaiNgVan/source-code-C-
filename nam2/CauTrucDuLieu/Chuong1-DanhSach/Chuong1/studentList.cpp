#include<iostream>
#include <stdio.h>
using namespace std;
#define max 100
struct sinhvien
{
	char id[11];
	char hoten[41];
	double dtb;
};
struct node {
	sinhvien info;
	node *link;
};

void init_DSSinhVien_DSLKD(node *first) {
	first = NULL;
}
node *createNode_DSSinhVien_DSLKD(node *first, sinhvien stu) {
	node *sv = new node;
	sv->info = stu;
	sv->link = NULL;
	return sv;
}
void insertFirst_DSSinhVien_DSLKD(node *& first, sinhvien stu) {
	node *p = createNode_DSSinhVien_DSLKD(first,stu);
	p->link = first;
	first = p;
}
sinhvien nhap_1sv_DSSinhVien_DSLKD(){
	sinhvien sv;
	cin.ignore();
	cout << "\t\tMa Id: "; gets_s(sv.id);
	cout << "\t\tHo va Ten: ";gets_s(sv.hoten);
	cout << "\t\tDiem: "; cin >> sv.dtb;
	return sv;
}
void createList_DSSinhVien_DSLKD(node *& first) {
	sinhvien sv[max];
	int soluong_sv;
	do {
		cout << "Nhap vao so luong sinh vien: "; 
		cin >> soluong_sv;
		if (soluong_sv<0 || soluong_sv>max)
			cout << "So luong sinh vien khong hop le.\n";
	} while (soluong_sv<0 || soluong_sv>max);
	for (int i = 0; i < soluong_sv; i++) {
		cout << "Thong tin sinh vien thu " << i + 1 << " : \n";
		sv[i] = nhap_1sv_DSSinhVien_DSLKD();
		insertFirst_DSSinhVien_DSLKD(first,sv[i]);
	}
}
void xuat_1sv_DSSinhVien_DSLKD(node *& sv) {
	cout << "\t\tMa Id: " << sv->info.id <<endl;
	cout << "\t\tTen: " << sv->info.hoten<<endl;
	cout << "\t\tDiem: " << sv->info.dtb << endl;
}
int xuat_danhsach_DSSinhVien_DSLKD(node *first) {
	if (first != NULL) {
		node *p = first;
		int i=0;
		while (p != NULL) {
			cout << "\tThong tin sinh vien thu " << i + 1 << " : " << endl;
			xuat_1sv_DSSinhVien_DSLKD(p);
			p = p->link;
			i++;
		}
		return 1;
	}
	else {
		cout << "Khong co sinh vien de hien thi.\n";
		return 0;
	}
}
int removeFirst_DSSinhVien_DSLKD(node *& first) {
	if(first !=NULL)
	{ 
		node *p = first;
		first = first->link;
		delete p;
		return 1;
	}
	return 0;
}
int removeLast_DSSinhVien_DSLKD(node *first) {
	if (first != NULL) {
		node *p = first, *q = NULL;
		while (p->link != NULL) {
			q = p;
			p = p->link;
		}
		if (p != first)
			q->link = NULL;
		else first = NULL;
		delete p;
		return 1;
	}
	return 0;
}
int xoa_sv_idX_DSSinhVien_DSLKD(node *& first,char x[]) {
	if(first !=NULL){
		node *p = first,*q=NULL;
		int dem = 0;
		while (p != NULL) {
			if (strcmp(p->info.id, x) == 0 && q == NULL) {
				removeFirst_DSSinhVien_DSLKD(first);
				p = first;
				dem++;
			}
			else if (strcmp(p->info.id, x) == 0) {
				node *z = p;
				q->link = p->link;
				p = p->link;
				delete z;
				dem++;
			}
			else {
				q = p;
				p = p->link;
			}
		}
		return dem;
	}
	return 0;
}// chú ý khi Q ==NULL && P nằm ở node ĐẦU TIÊN
int xuat_dtb_lonhon5_DSSinhVien_DSLKD(node *first) {
	int dem = 0;
	for (node *p = first; p != NULL; p = p->link) {
		if (p->info.dtb > 5.0)
		{
			dem++;
			cout << "Thong tin sinh vien thu " << dem << endl;
			xuat_1sv_DSSinhVien_DSLKD(p);
		}
	}
	return dem;
}
int them_svQ_sau_svP_DSSinhVien_DSLKD(node *first,char x[]) {
	if(first != NULL){
		int dem = 0;
		sinhvien stu = nhap_1sv_DSSinhVien_DSLKD();
		for (node *p = first; p != NULL; p = p->link) {
			if (strcmp(p->info.id, x) == 0) {

				node *q = createNode_DSSinhVien_DSLKD(first,stu);
				q->link = p->link;
				p->link = q;
				dem++;
			}
		}
		
		return dem;
	}
	return 0;
}
void tim_sv_x_DSSinhVien_DSLKD(node *first,char x[]) {
	int dem = 0;
	for (node *p = first; p != NULL; p = p->link) {
		if (strcmp(p->info.id, x) == 0) {
			cout << "Thong tin co ma id la " << x << ": \n";
			xuat_1sv_DSSinhVien_DSLKD(p);
			dem++;
		}
	}
	if (dem == 0) {
		cout << "Khong co phan tu can tim. \n";
	}
}
void swap_DSSinhVien_DSLKD(sinhvien &a, sinhvien &b) {
	sinhvien tam = a;
	a = b;
	b = tam;
}
void sapxep_tangdan_DSSinhVien_DSLKD(node *first) {
	for (node *p = first; p->link != NULL; p = p->link) {
		for (node *q = p->link; q != NULL; q = q->link) {
			if (p->info.dtb > q->info.dtb)
				swap_DSSinhVien_DSLKD(p->info, q->info);
		}
	}
}
void xoa_danhsach_DSSinhVien_DSLKD(node *& first) {
	if (first != NULL) {
		node *p = first;
		while (p != NULL) {
			first = first->link;
			delete p;
			p = first;
			
		}
	}
}
int menu__DSSinhVien_DSLKD() {
	int choose;
	cout << "==================BAT DAU===================\n"
		<< "1. Nhap danh sach sinh vien..\n"
		<<"2. Xuat danh sach sinh vien..\n"
		<<"3. Xoa Sinh vien DAU danh sach..\n"
		<< "4. Xoa Sinh vien CUOI danh sach..\n"
		<<"5. Xoa Sinh vien co id la X..\n"
		<<"6. Xuat thong tin cac Sinh vien co DTB > 5..\n"
		<<"7. Tim Sinh vien co ma la X..\n"
		<<"8. Them mot sinh vien sau mot sinh vien co ma la X..\n"
		<<"9. Sap xep danh sach tang theo diem trung binh ..\n"
		<<"10. Xoa toan bo danh sach ..\n"
		<< "==================KET THUC==================\n"
		<< "Chon[1-9]: "; cin >> choose;
	return choose;
}
void app_DSSinhVien_DSLKD() {
	node *first=NULL;
	int choose;
	do {
		system("cls");	
		choose = menu__DSSinhVien_DSLKD();
		switch (choose) {
		case 0: cout << "Thoat thanh cong.\n"; break;
		case 1:
			createList_DSSinhVien_DSLKD(first);
			break;
		case 2:
			if (xuat_danhsach_DSSinhVien_DSLKD(first) == 1)
				cout << "Xuat thanh cong!\n";
			else cout << "Xuat khong thanh cong\n";
			break;
		case 3:
			if (removeFirst_DSSinhVien_DSLKD(first) == 1)
				cout << "Xoa sinh vien dau tien thanh cong.\n";
			else cout << "Xoa sinh vien dau tien khong thanh cong.\n";
			break;
		case 4: 
			if (removeLast_DSSinhVien_DSLKD(first) == 1)
				cout << "Xoa sinh vien cuoi cung thanh cong.\n";
			else cout << "Xoa sinh vien cuoi cung khong thanh cong.\n";
			break;
		case 5:
			char x[10];
			cout << "Nhap vao ma sinh vien can xoa: ";
			cin.ignore();
			gets_s(x);
			if (xoa_sv_idX_DSSinhVien_DSLKD(first,x) != 0)
				cout << "Xoa thanh cong.\n";
			else cout << "Khong co thong tin sinh vien can xoa.\n";
			break;
		case 6: 
			cout << "Thong tin cac ban co diem trung binh lon hon 5.0: \n";
			int dem;
			dem = xuat_dtb_lonhon5_DSSinhVien_DSLKD(first);
			if (dem !=0) {
				cout << "Vay so hoc sinh co dtb lon hon 5 la: " << dem << endl;
			}
			else cout << "Khong co ban nao co diem trung binh lon hon 5.0.\n";
			break;
		case 7:
			char masv[10];
			cout << "Nhap vao ma sinh vien: ";
			cin.ignore();
			gets_s(masv);
			tim_sv_x_DSSinhVien_DSLKD(first,masv);
			break;
		case 8:
			char x8[10];
			cin.ignore();
			cout << "Ma ID can tim la: "; gets_s(x8);
			
			if (them_svQ_sau_svP_DSSinhVien_DSLKD(first,x8) == 1) {
				cout << "Them vao danh sach thanh cong.\n";
				
			}
				
			else cout<<"Khong them vao duoc danh sach.\n";
			break;
		case 9:
			sapxep_tangdan_DSSinhVien_DSLKD(first);
			cout << "Sap xep thanh cong.\n";
			break;
		case 10: 
			xoa_danhsach_DSSinhVien_DSLKD(first);
			cout << "Xoa thanh cong\n";
			break;
		default: cout << "Lua chon khong hop le. Chon lai!!!\n"; break;
		};
		system("pause");
	} while (choose != 0);
}
int main() {
	app_DSSinhVien_DSLKD();
	
	system("pause");
	return 0;
}