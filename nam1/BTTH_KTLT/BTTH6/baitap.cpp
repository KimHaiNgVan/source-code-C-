#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int x, y;
	cout << "Nhap x va y: ";
	cin >> x >> y;
	ofstream outdata;
	outdata.open("BT.txt");
	if (outdata.is_open())
	{
		outdata << x << '#' << y << endl;
		cout << "Ghi file thanh cong";
	}

	else cout << "Mo file k thanh cong";

	int k, m;
	ifstream indata;
	indata.open("BT.txt");
	if (indata.is_open())
	{
		indata >> k;
		indata.ignore();
		indata >> m;
		cout << k+m;
	}
	else cout << "mo file k thanh cong";
}
