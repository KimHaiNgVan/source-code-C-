#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Nhap 3 so a, b, c:";
	cin >> a >> b >> c;
	ofstream outfile;
	outfile.open("BaiTap.txt", ios::out);
	if (outfile.is_open())
		{
		outfile << a << endl << b << endl << c << endl;
		cout <<" Ghi file thanh cong\n";
		outfile.close();
		}
	else
	{
			cout << "Ghi file ko thanh cong\n";
		}

	ifstream infile;
	int x, y, z;
	infile.open("BaiTap.txt", ios::in);
	if (infile.is_open())
		{
		infile >> x;
		infile.ignore();
		infile >> y;
		infile.ignore();
		infile >> z;
		infile.ignore();
		int am = 0, duong = 0, bthuong = 0;
		if (x < 0)
			am++;
		else if (x > 0)
			duong++;
		else bthuong++;

		if (y < 0)
			am++;
		else if (y > 0)
			duong++;
		else bthuong++;

		if (z < 0)
			am++;
		else if (z > 0)
			duong++;
		else bthuong++;
		cout << "So duong: " << duong<<endl;
		cout << "So am: " << am << endl;
		cout << "So khong duong khong am : " << bthuong << endl;
		cout << "Doc file thanh cong\n";
		infile.close();
		}
}