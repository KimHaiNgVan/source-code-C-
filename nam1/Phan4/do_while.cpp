#include <iostream>
using namespace std;
int main()
{
	int i, n, sum = 0;
	cout << "Nhap vao n : ";
	cin >> n;
	i = 1;
	do 
	{
		sum += i;
		i++;
	} 
	while (i <= n);

	cout << "Tong: "<< sum ;
	return 0;
}