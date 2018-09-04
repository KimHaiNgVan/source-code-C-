#include<iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point() { x = y = 0; };
	~Point() {};
	int getx();
	int gety();
	void setx(int a);
	void sety(int a);
	double khoangcach(Point diem1, Point diem2);
};
int Point::getx() {
	return x;
}
int Point::gety() {
	return y;
}
void Point::setx(int a) {
	x = a;
}
void Point::sety(int a) {
	y = a;
}
double Point::khoangcach(Point a, Point b)
{
	double kc;
	kc = sqrt(1.0*(a.x - b.x)*(a.x - b.x) + 1.0*(a.y - b.y)*(a.y - b.y));
	return kc;
}
void nhap(Point &a)
{
	int x, y;
	cin >> x >> y;
	a.setx(x);
	a.sety(y);
}
int main()
{

	Point a, b,kc;
	cout << "Toa do diem a: ";
	nhap(a);
	cout << "Toa do diem b: ";
	nhap(b);
	cout << "Khoang cach hai diem la: " << kc.khoangcach(a, b) << endl;
	return 0;
}