//Tinh dien tich hinh vuong
#include <iostream>
using namespace std;
int main()
{
	int canh,dientich;

	cout << "Canh cua hinh vuong la:";
	cin >> canh;
	
	if (canh <= 0)
		cout << "Khong thoa dieu kien ";
	return 1;
	dientich = canh*canh;

	cout << "Dien tich cua hinh vuong la: "<<dientich<<endl ;

	return 0;
}