#include <iostream>
using namespace std;
int main()
{
	const int M = 10;
	int a[M];
	for (int i = 0; i < M; i++);
	{
		cin >> a[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> a[i];
	}
	for (int j = 0; j < M; j++);
	{
		cout << a[j] << "\t";
	}
	return 0;
}