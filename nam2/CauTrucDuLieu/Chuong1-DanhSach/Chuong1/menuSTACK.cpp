#include <iostream>
using namespace std;

struct node {
	int info;
	node *link;
};
node *sp;
void init() {
	sp = NULL;
}
int isEmpty() {
	if (sp == NULL) {
		return 1;
	}
	return 0;
}
node* creatNode(int x) {
	node *p = new node;
	p->info = x;
	p->link = NULL;
	return p;
}
void push(int x) {
	node *p = creatNode(x);
	p->link = sp;
	sp = p;
}
int pop(int &x) {
	if (sp != NULL) {
		x = sp->info;
		node *p;
		p = sp;
		sp = sp->link;
		delete p;
		return 1;
	}
	return 0;
}
int top() {
	return sp->info;
}
int menu() {
	int choose;
	cout << "====================Bat dau====================\n"
		<< "1. Khoi tao.\n"
		<< "2. isEmpty.\n"
		<< "3. Push.\n"
		<< "4. Pop.\n"
		<< "5. Top.\n"
		<< "====================Ket thuc====================\n"
		<< "Chon [1-5]: ";
	cin >> choose;
	return choose;
}
void app() {
	int choose;
	do {
		system("cls");
		choose=menu();
		switch (choose) {
		case 1:
			init();
			cout << "Khoi tao thanh cong.\n";
			break;
		case 2:
			if (isEmpty() == 1)
				cout << "Stack trong.\n";
			else cout << "Stack khong trong.\n";
			break;
		case 3:
			int push_value;
			cout << "Nhap vao gia tri: "; cin >> push_value;
			push(push_value);
			cout << "Push thanh cong.\n";
			break;
		case 4:
			int pop_value;
			if (pop(pop_value) == 1)
				cout << pop_value << "\t";
			else cout << "Pop khong thanh cong.\n";
			break;
		case 5:
			if (sp != NULL)
			{
				cout << "Top la: " << top()<<endl;
			}
			else cout << "STACK rong.\n";
			break;
		default: cout << "Lua chon khong hop le.\n";
			return;
		};
		system("pause");
	} while (choose !=0);
}
int main() {
	app();
	system("pause");
	return 0;
}