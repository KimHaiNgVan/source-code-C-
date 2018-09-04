#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	srand(time(0));
	int doan,n,dapan,traloi;
	dapan = ((1 + rand()) % 10);
	cout << "Cau la loi la: "; cin >> traloi;
	if (traloi == dapan)
	{
		cout << "Tra loi dung roi.Dap an la: "<<dapan<<endl;
	}
	else {
		cout << "Ban da doan sai.Hay thu lai ! Dap an la: " << dapan << endl;
	}
	
	return 0;
}