#include<cmath>
#include <iostream>
using namespace std;


class Point
{
private:
	double x, y;
public:

	double getx();
	double gety();
	void setx(double m);
	void sety(double n);
	double khoangcach(Point diem1, Point diem2);
	Point() { x = y = 0; };
	~Point() {};

};
double Point::getx()
{
	return x;
}
double Point::gety()
{
	return y;
}
void Point::setx(double m)
{
	x = m;
}
void Point::sety(double n)
{
	y = n;
}

void nhap(Point &diem)
{
	double x1, y1;
	cout << " Nhap toa do cua diem:";
	cin >> x1 >> y1;
	diem.setx(x1);
	diem.sety(y1);
}
double Point::khoangcach(Point diem1, Point diem2)
{
	double kq;
	kq = sqrt(1.0*(diem2.x - diem1.x)*(diem2.x - diem1.x) + 1.0*(diem2.y - diem1.y)*(diem2.y - diem1.y));
	return kq;
}
int main()
{
	double kq;
	Point diem1, diem2,ketqua;
	nhap(diem1);
	nhap(diem2);
	kq = ketqua.khoangcach(diem1, diem2);
	cout << "Khoang cach la: " << kq << endl;
}