#include<iostream>
using namespace std;
const int max = 30;
void fibonacci(int n,int* p)
{
	p[0] = 0;
	p[1] = 1;
	cout << "Day fibonacci la: "<<p[0]<<"\t"<<p[1]<<"\t";
	for (int i = 2; i < n; i++)
	{
		p[i] = p[i - 1] + p[i - 2];
		cout << p[i] << "\t";
	}
}
int main()
{
	int *p,n;
	cout << "n: "; cin >> n;
	p = new int[n];
	fibonacci(n,p);
	delete[] p;
	p = NULL;
	return 0;
}