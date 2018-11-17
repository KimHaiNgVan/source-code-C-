#include <iostream>
#include <conio.h>
using namespace std;

struct Student
{
	char id[10];
	char name[40];
	float mark;
};

Student StudentInfo()
{
	Student stu;

	cin.ignore();
	cout << "Nhap Ma SV: ";
	gets_s(stu.id);

	cout << "Nhap Ten SV: ";
	gets_s(stu.name);

	cout << "Nhap Diem cua SV " << stu.name << ": ";
	cin >> stu.mark;

	return stu;
}

struct node
{
	Student info;
	node * link;
};

//Khoi tao danh sach lien ket don
void init (node *& first)
{
	first = NULL;
}

//Chen dau
void addFirst (node *& first, Student stu)
{
	node *p = new node;

	p->info = stu;
	p->link = first;

	first = p;
}

//Xuat danh sach ra man hinh
void printList(node * first)
{
	node *p = first;
	while (p != NULL)
	{
		cout << p->info.id << "\t|\t" << p->info.name << "\t|\t" << p->info.mark << "\n";

		p= p->link;
	}
}

//Xoa sinh vien dau danh sach
int deleteFirst(node *& first)
{
	if (first == NULL)
		return -1;
	
	node *p = new node;

	p->info = first;


	delete p;
	return 1;
}

int Menu ()
{
	int _select;
	cout << "\n---------- MENU ----------\n"
		<< "1. Khoi tao.\n"
		<< "2. Chen dau danh sach.\n"
		<< "3. Xuat danh sach ra man hinh.\n" 
		<< "4. Xoa SV dau danh sach.\n"
		<< "5. Xoa SV cuoi danh sach.\n"
		<< "6. Xoa SV co ID la X.\n"
		<< "7. Xuat thong tin SV co DTB > 5.\n"
		<< "0. Thoat.\n"
		<< "--------------------------\n"
		<< "Ban chon chuc nang so [0 - 7]: ";
	cin >> _select;

	return _select;
}

void MyApp()
{
	node * first;
	do {
		system("cls");
		int _select1 = Menu();

		switch (_select1)
		{
			case 1:
				init(first);
				cout << "KHOI TAO DANH SACH LIEN KET DON THANH CONG!\n";
				break;

			case 2:
				addFirst(first, StudentInfo());
				cout << "THEM MOI MOT PHAN TU DAU DANH SACH THANH CONG!\n";
				break;
		
			case 3:
				cout << "IN DANH SACH RA MAN HINH\n\n"
					<< "ID\t\tNAME\t\tMARK\n";
				printList(first);
				break;

			default:
				cout << "CHUC NANG BAN CHON KHONG CO! VUI LONG CHON LAI!\n";
				break;
			case 0:
				cout << "BAN DA LUA CHON THOAT CHUONG TRINH! NHAN PHIM BAT KI DE THOAT\n";
				_getch();
				return;
		}
		_getch();
	} while (true);
}

int main()
{
	MyApp();
	return 0;
}