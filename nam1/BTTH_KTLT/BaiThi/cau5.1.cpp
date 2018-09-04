#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int x, y;
	cout << "Nhap vao 2 so nguyen x va y: "; cin >> x >> y;
	ofstream outfile;
	outfile.open("Baithi1.txt");
	if (outfile.is_open())
	{
		outfile << x << '#' << y;
		cout << "Ghi file thanh cong\n";
		outfile.close();
	}
	else {
		cout << "Ghi file ko thanh cong.\n";
	}
	ifstream infile;
	int a, b;
	infile.open("Baithi1.txt");
		if (infile.is_open())
		{
			infile >> a;
			infile.ignore();
			infile >> b;
			cout << "Tong cua 2 so tren la: " << a + b << endl;
			cout << "Doc du lieu thanh cong\n";
			infile.close();
		}
		else {
			cout << "Doc du lieu ko thanh cong\n";
		}
		return 0;
}