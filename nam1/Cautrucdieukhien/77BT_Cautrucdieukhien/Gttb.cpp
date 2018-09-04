//Viết chương trình tính và in ra trung bình cộng của một dãy số được nhập vào từ bàn phím(không hạn chế số lượng số nhập vào).Qui ước số nhập có giá trị là 9999 là “số cầm canh”(nghĩa là nhập đến khi nhập số 9999 thì dừng việc nhập).
//Ví dụ : nhập  10  8  11  10  7  9999 ⇒ 9.2 5
/*
CÁCH 1
#include <iostream>
using namespace std;
int main()
{
	int  n=0, i = 0;
	int dem = 0;
	int tong = 0;
	
	//dieu kien 
	cout << "Nhap vao so luong chu so: ";
	cin >> n;
	cout << "Xin hay nhap vao mot day so: ";
	for (i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a > 9999)
		{
			cout << "Khong thoa dieu kien nhap: ";
			return 1;
		}
		tong += a;
		dem++;
	}
	double gttb = tong / dem;
	cout << "Gia tri trung binh cua day so la: "<<gttb<<endl;
	return 0;
}*/
//CACH 2 
#include <iostream>
using namespace std;
int main()
{
		int n = 0,tong=0;
		double gttb = 0.0;
		int dem=0;
		

		do
			{
			cout << "Nhap vao day do ";
			cin >> n;
			tong += n;
			dem++;
		} while (n !=9999);
		gttb = (tong-9999) / (dem-1);
			cout << "Diem trung binh la: " << gttb;
	return 0;
}