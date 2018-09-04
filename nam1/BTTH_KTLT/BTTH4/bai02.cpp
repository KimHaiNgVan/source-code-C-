#include<iostream>
using namespace std;
int main()
{
	char ten[20], ho[20];
	cout << "Nhap ten, ho:  ";
	cin.getline(ten, 20, ',');
	cin.getline(ho, 20);
	cout << ten << " " << ho << endl;
	return 0;
}