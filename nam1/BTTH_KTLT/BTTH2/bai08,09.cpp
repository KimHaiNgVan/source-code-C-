#include<iostream>
using namespace std;
int chuyen10sang2(int n)
{
	if (n == 0)
		return 0;
	else return chuyen10sang2(n / 2) * 10 + n % 2;
}
int chuyen2sang10(int n, int bac)
{
	if (n < 10)
		return n*pow(2.0, bac);
	else return chuyen2sang10(n / 10, bac + 1) + (n % 10)*pow(2 * 1.0,bac);
}
int main()
{
	int a, b,bac=0;
	cout << "So thap phan la: "; cin >> a;
	cout << "So nhi phan la: "; cin >> b;
	cout<<"He so nhi phan cua a la: "<<chuyen10sang2(a)<<endl;
	cout << "He so thap phan cua b la: " << chuyen2sang10(b, bac)<<endl;
	return 0;
}