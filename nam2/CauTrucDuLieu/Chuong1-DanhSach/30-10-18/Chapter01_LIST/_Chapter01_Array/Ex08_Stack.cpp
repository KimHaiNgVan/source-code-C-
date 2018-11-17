#include <iostream>
using namespace std;

//Khai báo cấu trúc danh sách liên kết đơn
struct node 
{
	int info;
	node *link;
};

//Khởi tạo danh sách rỗng
node *first;

void init ()
{
	first = NULL;
}

//Xuất các phần tử trong danh sách
void printList ()
{
	node *p = first;
	while (p != NULL)
	{
		cout << p->info << "\t";
		p = p->link;
	}
}


//Tìm một phần tử trong danh sách
node *Find (int x)
{
	node *p = first;
	while (p != NULL && p->info != x)
		p = p->link;
	return p;
}

//Thêm phần tử vào đầu danh sách
void insertFirst (int x)
{
	node *p = new node;

	p->info = x;
	p->link = first;
	first = p;
}

//Xóa phần tử đầu danh sách
int deleteFirst ()
{
	if (first != NULL)
	{
		node *p = first; // tạo một node mới lưu trữ node đầu tiên
		first = first ->link; // chuyển first về node thứ 2
		delete p; //Giải phóng vùng nhớ tại p
		return 1;
	}
	return 0;
}

//Thêm một phần tử vào cuối danh sách
void insertLast(int x)
{
	node *p = new node;

	p->info = x;
	p->link = NULL;
	
	if (first == NULL)
		first = p;
	else
	{
		node *q = first;
		while (q->link != NULL)
			q = q->link;
		q->link = p;
	}
}

//Xóa phần tử cuối danh sách
int deleleLast ()
{
	if (first == NULL)
		return 0;
	else
	{
		node *p = first, *q = new node;
		while (p->info->link != NULL)
			p = p->link;

		q->info = p->link;
		q->link = NULL;
		
		p->link = NULL;
		delete q;
		return 1;
	}
}

int main()
{
	init();
	insertFirst(3);
	insertFirst(2);
	insertFirst(1);
	insertLast(4);
	deleteFirst();

	printList();

	cout << endl;

	system("pause");
	return 0;
}