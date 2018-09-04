#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap vao hai so a va b : ";
	cin >> a >> b;
	int tong = a + b;
	ofstream outBT1;
	outBT1.open("BT1.txt",ios::out);
	if (outBT1.is_open())
	{

		cout << "File mo thanh cong." << endl;
		outBT1 << a << '#' << b;
		outBT1 << tong << endl;
	}
	else
	{
		cout << "File mo that bai." << endl;
	}

	return 0;
}