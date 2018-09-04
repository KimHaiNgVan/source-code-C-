#include<iostream>
using namespace std;
class PTBacNhat
{
private:
	int a, b;
public:
	int geta();
	int getb();
	void setavab(int &x, int &y);
	void timnghiem(PTBacNhat ptbn);
};
int PTBacNhat::geta()
{
	return a;
}
int PTBacNhat::getb()
{
	return b;
}
void PTBacNhat::setavab(int &x, int &y)
{
	a = x;
	b = y;
}
void PTBacNhat::timnghiem(PTBacNhat ptbn)
{
	if (ptbn.a == 0)
	{
		if (ptbn.b == 0)
			cout << "Phuong trinh vo so nghiem\n";
		else cout << "Phuong trinh vo nghiem\n";
	}
	else
	{
		cout << "Nghiem cua phuong trinh la: " << -(ptbn.b)/(ptbn.a) << endl;
	}
}
int main()
{
	PTBacNhat ptbn;
	int a, b;
	cout << "Nhap vao he so a va b: ";
	cin >> a >> b;
	ptbn.setavab(a,b);
	ptbn.timnghiem(ptbn);
	return 0;
}