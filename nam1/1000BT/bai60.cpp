#include<iostream>
using namespace std;
int main()
{
	int chutrai=0, chuphai=0, n;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;//1234

	chuphai = n % 10;//4
	chutrai = n / 10;//123
	
	
	while(n>0)
	{
		chutrai = n % 10;
		if (chutrai > chuphai)
		{
			cout << "So nguyen nay khong tang dan tu trai sang phai "<<endl;
			return 0;
		}	
		chuphai = chutrai;
		n /= 10;
	}

	cout << "So nguyen nay tang dan tu trai sang phai "<<endl;
	return 0;
}