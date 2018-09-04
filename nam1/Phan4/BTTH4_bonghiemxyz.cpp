#include <iostream>
using namespace std;
int main()
{
	int x, y, z, dem;
	dem = 0;
	for (x = 1; x <= 135; x++)
		for (y = 1; y <= 135; y++)
			for (z = 1; z <= 135; z++)
				if (3 * x + 5 * y + 7 * z == 100)
				{
					cout << "cac cap nghiem cua x,y,z=(" << x << "," << y << "," << z << ")" << endl;
					dem++;
				}
	cout << "Tong cong cac phep tinh la: " << dem;
	return 0;
}