
#include <iostream>
using namespace std;
int main()
{
	int n;
	double tb1, tb2, tb3, tb4,tongdiem=0.0;

	cout << "Nhap vao so luong sinh vien: ";
	cin >> n;
	
	for (int i= 0; i < n; i++)
	{
		double a=0;
		cout << "Nhap vao diem cua sinh vien: \n";
		cin >> a;
		tongdiem += a;
	}
	double tb = tongdiem / n;
	cout << "Diem trung binh cua tat ca sinh vien la: " << tb<<endl;
	return 0;
}
