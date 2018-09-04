#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap vao 2 so a va b: ";
	cin >> a >> b;
	ofstream outfile;
	outfile.open("BaiThi.txt", ios::out);
	if (outfile.is_open())
	{
		outfile << a << "#" << b;
		cout << "Ghi file thanh cong\n";
		outfile.close();
	}
	else {
		cout << "Ghi file ko thanh cong\n";
	}
	int x, y;
	ifstream infile;
	infile.open("BaiThi.txt", ios::in);
	if (infile.is_open())
	{
		infile >> x;
		infile.ignore(1);
		infile >> y;
		int tong = x + y;
		cout << "Tong cua a va b: " << tong << endl;
		cout << "Doc file thanh cong\n";
		infile.close();
	}
	else {
		cout << "Doc file ko thanh cong \n";
	}

	return 0;
}