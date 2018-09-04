#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;

	//Ghi file
	ofstream outBT3;
	outBT3.open("BT3.txt", ios::out);
	if (outBT3.is_open())
	{
		outBT3 << a <<"#"<< b<<"#" << c<<endl;
		cout << "Ghi file thanh cong.";
		outBT3.close();
	}
	else {
		cout << "Mo file that bai.";
	}

	//Doc file
	ifstream inBT3;
	inBT3.open("BT3.txt", ios::in);
	if (inBT3.is_open())
	{
		inBT3 >> a>>b>>c;
		inBT3.ignore(1);
		int tich = a*b*c;
		double tbc =( a + b + c)/3;
		cout << "Tich cua 3 so la: " << tich << endl;
		cout << "tbc cua 3 so la: " << tbc << endl;
		cout << "Doc file thanh cong." << endl;
		inBT3.close();
	}
	else {
		cout << "Doc file that bai.\n";
	}
	return 0;
}