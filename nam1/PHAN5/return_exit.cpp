#include <iostream>
#include<string>
using namespace std;
int max(int x, int y);
int  main()
{
	int a, b, Max;
	cout << "Nhap vao x va y : \n";
	cin >> a;	
	cin >> b;

	Max = max(a, b);
	cout << "So lon nhat la: "<< Max<<endl;
	
	return 0;
}
int max(int x, int y)
{
	string cau = "2 so bang nhau ";
	if (x > y)
		return x;
	else if (x < y)
		return y;

}


