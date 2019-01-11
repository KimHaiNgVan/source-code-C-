#include<iostream>
using namespace std;
#define MAX 100
void input(int a[MAX], int n) {
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: "; cin >> a[i];
	}
}
void output(int a[MAX], int n) {
	for (int i = 0; i < n; i++) {
		cout<<"a["<<i<<"]: "<<a[i]<<endl;
	}
}
void swap(int &a, int &b) {
	int tam = a;
	a = b;
	b = tam;
}
void Selection_Sort(int a[MAX], int n) {
	int i, j, vt;
	for (i = 0; i < n-1; i++) {
		vt = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[vt])
				vt = j;
		}
		if (vt != i)
			swap(a[vt], a[i]);
	}
}
void Interchange_Sort(int a[MAX], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i])
				swap(a[j], a[i]);
		}
	}
}
void Insertion_Sort(int a[MAX], int n) {
	int j, tam;
	for (int i = 1; i < n; i++) {
		tam = a[i];
		j = i - 1;
		while (a[j] > tam && j >= 0) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = tam;
	}
}
void Bubble_Sort(int a[MAX], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}
int timkiem_tuantu(int a[], int n, int x) {
	int i = 0;
	while (i < n && a[i] != x) {
		i++;
	}
	if (i < n)
		return i;
	return -1;
}
int timkiem_nhiphan(int a[], int n, int x) {
	int mid, left, right;
	left = 0, right = n - 1;
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == x) return mid; 
		if (x < a[mid]) right = mid - 1;
		else left = mid + 1;
	}
	return -1;
}
int menu_sapxep_timkiem() {
	cout << "============BAT DAU============\n"
		<< "0. Thoat\n"
		<< "1. Nhap mang.\n"
		<< "2. Xuat mang.\n"
		<< "3. Sap xep: Selection Sort\n"
		<< "4. Sap xep: Interchange Sort\n"
		<< "5. Sap xep: Insertion Sort\n"
		<< "6. Sap xep: Bubble Sort\n"
		<< "7. Tim kiem: Tuan tu\n"
		<< "8. Tim kiem: Nhi phan\n"
		<< "============KET THUC============\n";
	int choose;
	cout << "Chon [0-8]: "; cin >> choose;
	return choose;
}
void app_sapxep_timkiem() {
	int choose,a[MAX],soluong_phantu;
	do {
		system("cls");
		choose = menu_sapxep_timkiem();
		
		switch (choose)
		{
			case 0: cout << "Thoat thanh cong.\n"; break;
			case 1: 
				do {
					cout << "Nhap vao so luong phan tu: ";
					cin >> soluong_phantu;
					if (soluong_phantu<0 || soluong_phantu>MAX) {
						cout << "Sai roi. Nhap lai.\n";
					}
				} while (soluong_phantu<0 || soluong_phantu>MAX);
				input(a, soluong_phantu);
				break;
			case 2: 
				output(a, soluong_phantu);
				break;
			case 3: 
				Selection_Sort(a,soluong_phantu);
					break;
			case 4:
				Interchange_Sort(a, soluong_phantu);
				break;
			case 5:
				Insertion_Sort(a, soluong_phantu);
				break;
			case 6:
				Bubble_Sort(a, soluong_phantu);
				break;
			case 7: 
				int timkiem7;
				cout << "Gia tri phan tu can tim la: "; cin >> timkiem7;
				if (timkiem_tuantu(a, soluong_phantu, timkiem7) != -1)
					cout << "Tim thay phan tu o vi tri thu " << timkiem_tuantu(a, soluong_phantu, timkiem7) << " trong mang.\n";
				else cout << "Khong tim thay phan tu " << timkiem7 << " trong mang.\n";
				break;
			case 8:
				int timkiem8;
				cout << "Gia tri phan tu can tim la: "; cin >> timkiem8;
				if (timkiem_nhiphan(a, soluong_phantu, timkiem8) != -1)
					cout << "Tim thay phan tu o vi tri thu " << timkiem_nhiphan(a, soluong_phantu, timkiem8) << " trong mang.\n";
				else cout << "Khong tim thay phan tu " << timkiem7 << " trong mang.\n";
				break;
		default:cout << "Lua chon khong hop le.\n";
			break;
			
		}
		system("pause");
	} while (choose != 0);
}
int main() {
	app_sapxep_timkiem();
	return 0;
}