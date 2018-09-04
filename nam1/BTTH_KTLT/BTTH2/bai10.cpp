#include<iostream>
using namespace std;
int ucln(int a, int b)
{
	if (b == 0) return a;
	else return (b, a%b);
}
int main()
{
	int a, b;
	cout << "A va B la: "; cin >> a >> b;
	cout << "USCLN cua A va B la: " << ucln(a, b) << endl;
	return 0;
}