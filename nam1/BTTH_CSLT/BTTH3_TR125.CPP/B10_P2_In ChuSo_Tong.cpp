#include<iostream>
using namespace std;
int main()
{
	int n = 0, i = 0, tong = 0,chuso=0,sdn=0,sole,cs;

	cout << "Nhap vao so nguyen la: ";
	cin >> n;

	while (n > 0)//IN RA SO DAO NGUOC CUA 1 SO
	{
		sole = n % 10;
		sdn = sdn * 10 + sole;
		n /= 10;
	}
	while (sdn > 0)
	{
		cs = sdn % 10;
		cout <<cs<< " ";
		
		sdn /= 10;
		tong += cs;
	}
	cout << "\n Tong cua chu so la "<<tong;
	return 0;
}