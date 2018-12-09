#include<iostream>
using namespace std;
struct node {
	int info;
	node * link;
};
node *front, *rear;
void init() {
	front = rear = NULL;
}
node * createNode(int x) {
	node* p=new node;
	p->info = x;
	p->link = NULL;
	return p;
}
void push(int x) {
	node *p = createNode(x);
	if (rear != NULL)
		rear->link = p;
	else front = p;
	rear = p;
}
int pop(int &x) {
	if (front != NULL)
	{
		node*p = front;
		x = p->info;
		front = front->link;
		if (front == NULL)
			rear = NULL;
		delete p;
		return 1;
	}
	return 0;
}
int isEmpty() {
	if (front == NULL)
		return 1;
	return 0;
}
int menuQueue() {
	int choose;
	cout << "===============BAT DAU===============\n"
		<< "1.Khoi tao.\n"
		<< "2. isEmpty.\n"
		<< "3. Push.\n"
		<< "4.Pop.\n"
		<< "===============KET THUC===============\n"
		<< "Chon [1-4]: ";
	cin >> choose;
	return choose;
}
void app() {
	int choose;
	do {
		system("cls");
		choose=menuQueue();
		
		switch (choose)
		{
		case 0: cout << "Thoat thanh cong.\n";
			break;
		case 1:
			init();
			cout << "Khoi tao thanh cong.\n";
			break;
		case 2:
			if (isEmpty() == 1)
				cout << "Queue rong.\n";
			else cout << "Queue khong rong.\n";
			break;
		case 3:
			int x;
			cout << "Nhap vao gia tri can them: "; cin >> x;
			push(x);
			cout << "Push thanh cong.\n";
			break;
		case 4: 
			int popValue;
			if (pop(popValue) == 1)
				cout << "Gia tri sau khi Pop la: " << popValue<<endl;
			else cout << "Pop khong thanh cong hoac QUEUE rong, khong co gia tri de pop.\n";
			break;
		default:cout<< "Lua chon khong hop le.\n"; break;
			return;
		};
		system("pause");
	} while (choose != 0);
}
int main() {
	app();

	return 0;
}