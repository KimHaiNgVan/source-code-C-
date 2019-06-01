#include <iostream>
using namespace std;
const int MAX = 100;
void nhapMang(int a[MAX], int n){
	cout << "Nhap cac phan tu trong mang: ";
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void xuatMang(int a[MAX], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout<<endl;
}
int main() {
	int n,a[MAX];
	cout << "So luong phan tu la: "; cin >> n;
	nhapMang(a, n);
	cout << "Mang chua sap xep: ";
	xuatMang(a, n);
	system("pause");
	return 0;
}