#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Nhap vao 3 so nguyen: ";
	cin >> a >> b >> c;
	ofstream outdata;
	outdata.open("BT2.txt");
	if (outdata.is_open())
	{
		outdata << a << endl;
		outdata << b << endl;
		outdata << c << endl;
		cout << "ghi file thanh cong";

	}
	else cout << "Mo file k thanh cong";
	int x, y, z;
	int demd, dema, dem0;
	ifstream indata;
	indata.open("BT2.txt");
	if (indata.is_open())
	{
		indata >> x;
		indata.ignore();
		indata >> y;
		indata.ignore();
		indata >> z;
		indata.ignore();
		cout << x << "  " << y << " " << z << endl;
	}
	else cout << "Mo file k thanh cong";
}