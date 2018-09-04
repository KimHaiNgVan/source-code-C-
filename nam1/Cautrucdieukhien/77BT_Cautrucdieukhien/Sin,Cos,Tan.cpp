//Viết chương trình in ra bảng lượng giác sin, cos, tan của các góc từ 0..180 dãn cách 5 độ. Sử dụng hàm sin, cos, tan trong cmath. 

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	cout << "Goc cos la: " << endl;
	for (int i=0; i <= 180; i += 5)
	{
		cos(i);
		cout <<cos(i)<< endl;
	}

	cout << "Goc sin la: " << endl;
	for (int i=0; i <= 180; i += 5)
	{
		sin(i);
		cout <<sin(i)<< endl;
	}

	cout << "Goc Tan la: " << endl;
	for (int i=0; i <= 180; i += 5)
	{
		tan(i);
		cout <<tan(i)<< endl;

	}

	return 0;
}