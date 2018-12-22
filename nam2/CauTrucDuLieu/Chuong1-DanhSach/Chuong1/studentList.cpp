#include<iostream>
#include <stdio.h>
using namespace std;
#define max 100
struct student {
	char id[10];
	char name[40];
	float mark;
};
struct node{
	student info;
	node *link;
};
node *first;
void init (){
	first = NULL;
}
node * createNode(student p) {
	node *stu=new node;
	stu->info = p;
	stu->link = NULL;
	return stu;
}
void insertFirst(student stu) {
		node *p = new node;
		p->info = stu;
		p->link = first;
		first = p;
}
student inputStudent() {
	student stu;
	cin.ignore();
	cout << "\tMa sinh vien: "; gets_s(stu.id);
	cout << "\tTen sinh vien: "; gets_s(stu.name);
	cout << "\tDiem trung binh: "; cin >> stu.mark;
	return stu;
}
void createList() {
	student stu[max];
	int  x; 
	cout << "Nhap vao so phan tu: "; cin >> x;
	for (int i = 0; i < x; i++)
	{
		cout << "Sinh vien thu " << i + 1<<endl;
		stu[i] = inputStudent();
		insertFirst(stu[i]);
	}
}
void printAStu(node* p) {
	cout << "\tTen: " << p->info.name << "\t\t" << "Ma sinh vien: " << p->info.id << "\t\t" << "Diem trung binh: " << p->info.mark << endl;
}
int printList() {
	if (first != NULL) {
		node *p = first;
		while (p != NULL)
		{
			printAStu(p);
			/*cout << p->info.id << "\t" << p->info.name <<"\t"<<p->info.mark<<endl;*/
			p = p->link;
		}
		return 1;
	}
	return 0;
}
int removeFirst() {
	if (first != NULL) {
		node *p = new node;
		p = first;
		first = first->link;
		delete p;
		return 1;
	}
	return 0;
}
int removeLast() {
	if (first != 0)
	{
		node *p, *q;
		p = first; q = NULL;
		while (p->link != NULL) {
			q = p; p = p->link;
		}
		if (p == first)
			first = NULL;
		else q->link = NULL;
		delete p;
		return 1;
	}
	return 0;
}
int xoa_sv_idX(char x[10]) {
	if (first != NULL){
		node *p, *q, *k;
		q = NULL, p = first;
		while (p != NULL) {
			if (p->info.id == x) {
				k = p->link;
				node *z = new node;
				z = p;
				q->link = k;
				delete z;
			}
			q = p;
			p = p->link;
		}
		return 1;
	}
	return 0;
}
int xuat_dtb_lonhon5() {
	if (first != NULL) {
		node *p = first;
		int i = 0;
		while (p != NULL) {
			if(p->info.mark>5.0){
				i++;
				cout << "\tTen: " << p->info.name << "\t\t" << "Ma sinh vien: " << p->info.id << "\t\t" << "Diem trung binh: " << p->info.mark << endl;
			}
			p = p->link;
		}
		return i;
	}
	return 0;
}
void tim_sv_x(char x[10]) {
	if (first != NULL) {
		node *p = first;
		while (p != NULL) {
			if (strcmp(x,p->info.id)==0) {
				printAStu(p);
			}
			p = p->link;
		}
	}
	else {
		cout << "Tim ko thanh cong.\n";
	}
}
int them_sv_sau_x(student &stu,char x[10]) {
	if (first != NULL) {
		node *st = createNode(stu);
		node *p = first;
		while (p != NULL) {
			if (p->info.id == x) {
				node *h = p->link;
				st->link = h;
				p->link = st;
			}
			p = p->link;
		}
		return 1;
	}
	return 0;
}
void swap(student &a, student &b) {
	student temp = a;
	a = b;
	b = temp;
}
void sapxep_tangdan() {
	for (node *p = first; p->link != NULL; p = p->link) {
		for (node *q = p->link; q != NULL; q = q->link) {
			if (p->info.mark > q->info.mark)
				swap(p->info, q->info);
		}
	}
}

int menu() {
	int choose;
	cout << "==================BAT DAU===================\n"
		<< "1. Nhap danh sach sinh vien.\n"
		<<"2. Xuat danh sach sinh vien.\n"
		<<"3. Xoa Sinh vien DAU danh sach.\n"
		<< "4. Xoa Sinh vien CUOI danh sach.\n"
		<<"5. Xoa Sinh vien co id la X.\n"
		<<"6. Xuat thong tin cac Sinh vien co DTB > 5.\n"
		<<"7. Tim Sinh vien co ma la X.\n"
		<<"8. Them mot sinh vien sau mot sinh vien co ma la X.\n"
		<<"9. Sap xep danh sach tang theo diem trung binh .\n"
		<< "==================KET THUC==================\n"
		<< "Chon[1-9]: "; cin >> choose;
	return choose;
}
void app() {
	
	int choose;
	do {
		system("cls");	
		choose = menu();
		switch (choose) {
		case 0: cout << "Thoat thanh cong.\n"; break;
		case 1:
			createList();
			break;
		case 2:
			if (printList() == 1)
				cout << "Xuat thanh cong!\n";
			else cout << "Xuat khong thanh cong\n";
			break;
		case 3:
			if (removeFirst() == 1)
				cout << "Xoa sinh vien dau tien thanh cong.\n";
			else cout << "Xoa sinh vien dau tien khong thanh cong.\n";
			break;
		case 4: 
			if (removeLast() == 1)
				cout << "Xoa sinh vien cuoi cung thanh cong.\n";
			else cout << "Xoa sinh vien cuoi cung khong thanh cong.\n";
			break;
		case 5:
			char x[10];
			cout << "Nhap vao ma sinh vien can xoa: ";
			cin.ignore();
			gets_s(x);
			if (xoa_sv_idX(x) == 1)
				cout << "Xoa thanh cong.\n";
			else cout << "Khong co thong tin sinh vien can xoa.\n";
			break;
		case 6: 
			cout << "Thong tin cac ban co diem trung binh lon hon 5.0: \n";
			int dem;
			dem = xuat_dtb_lonhon5();
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
			tim_sv_x(masv);
			break;
		case 8:
			char masv8[10];
			cout << "Ma sinh vien can tim: "; gets_s(masv8);
			student stu =inputStudent();
			cin.ignore();
			if (them_sv_sau_x(stu, masv8) == 1) {
				them_sv_sau_x(stu, masv8);
				cout << "Them thanh cong.\n";
			}
			else cout << "Them that bai.\n";
		case 9:
			sapxep_tangdan();
			cout << "Sap xep thanh cong.\n";
			break;
		default: cout << "Lua chon khong hop le. Chon lai!!!\n"; break;
		};
		system("pause");
	} while (choose != 0);
}
int main() {
	app();
	
	system("pause");
	return 0;
}