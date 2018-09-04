#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i, n, s1=0, s2=0, s3=0, s,q1,q2,q3;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	q1 = (n*(n + 1)) / 2;
	q2 = (n*(n + 1)*(2 * n + 1)) / 6;
	q3 = (n*n*(n + 1)*(n + 1)) / 4;


	for (i = 1; i <= n; i++)
	{
		s1 += i;
	}
	cout << "s1 = " << s1<<endl;
	cout << "q1 = " << q1 << endl;
	string sosanh = (s1 > q1 ? "s1 lon hon q1" : "s1 nho hon q1");
	cout << sosanh<<endl<<endl;

	for (i = 1; i <= n; i++)
	{	
		s2 += pow(i, 2);
	}
	cout << "s2 = "<< s2 <<endl;
	cout << "q2 = " << q2 << endl;
	string sosanh2=(s2 > q2 ? "s2 lon hon q1" : "s2 nho hon q1");
	cout << sosanh2 << endl<<endl;


	for (i = 1; i <= n; i++)
	{
		s3 += pow(i, 3);
	}
	cout << "s3 = " << s3 << endl;
	cout << "q3 = " << q3 << endl;
	string sosanh3 = (s3 > q3 ? "s3 lon hon q1" : "s3 nho hon q1");
	cout << sosanh3 << endl<<endl;
	return 0;
}