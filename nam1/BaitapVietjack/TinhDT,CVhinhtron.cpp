#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double bk=0.0,bk2;
	double S=0, P=0,S2=0.0;
	const double  Pi = 3.14;


	cout << "Nhap vao ban kinh hinh tron: \n";
	cin >> bk ;


	S = bk * bk * Pi;
	P = 2 * bk * Pi;
	bk2 = sqrt(S2 / Pi);

	if (bk <= 0)
	{
		cout << "Khong thoa dieu kien !\n";
		return 1;
	}

	cout << "Dien tich hinh tron la: "<< S <<endl ;
	cout << "Chu vi hinh tron la: "<< P << endl ;

	cout << "Nhap vao dien tich hinh tron: \n";
	cin >> S2;
	cout << "Ban kinh hinh tron la: " << bk;

	return 0;
}