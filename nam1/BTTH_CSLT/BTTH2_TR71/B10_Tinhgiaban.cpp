#include<iostream>
using namespace std;
int main()
{
	double giaban, giamua;
	const double tile = 0.6;

	cout << "Nhap vao gia mua cua mon hang la: ";
	cin >> giamua ;

	giaban = (1 + tile)*giamua;

	cout << "Gia ban cua mon hang la: " << giaban << endl;
	return 0;
}