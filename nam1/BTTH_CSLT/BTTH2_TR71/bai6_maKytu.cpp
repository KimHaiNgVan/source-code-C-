#include<iostream>
using namespace std;
int main()
{
	char kytu=' ';
	cout << "Ky tu: "; cin >> kytu;
	
	cout << static_cast<int16_t>(kytu) << endl;

	return 0;
}