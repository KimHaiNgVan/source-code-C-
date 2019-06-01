#include   <iostream>
using namespace std;

int menu_app_sach() {
	cout << "===========CAC DANG BAI TAP============"
		<< "\n0. Thoat."
		<< "\n1.Vong lap FOR, WHILE, DO WHILE."
		<< "\n2. Mang 1 chieu."
		<< "\n3. Mang nhieu chieu."
		<< "\n4. De quy."
		<< "\n5. Con tro."
		<< "\n6. Chuoi."
		<< "\n7. Class."
		<< "\n8. Struct."
		<< "\n9. Danh sach Lien Ket Don."
		<< "\n10. Stack."
		<< "\n11. Quere."
		<< "\n12. Cac dang Sap Xep."
		<< "\n13. Btree."
		<< "\n14. Bai tap Lon: Danh sach Sinh Vien."
		<< "\n===========KET THUC============\n"
		<< "Chon [0-14]: ";
	int  choose;
	cin >> choose;
	return choose;
}
void app_sach() {
	int choose;
	do {
		choose = menu_app_sach();
		switch (choose)
		{
		case 0: cout << "Thoat thanh cong.\n";
			break;
		case 1: 
			break;
		default:
			cout << "Sai roi. Nhap lai.\n";
			break;
		}
	} while (choose != 0);
}
int main() {
	
	app_sach();
	return 0;
}