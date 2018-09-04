#include<iostream>
using namespace std;
int timmax(int n, int max)
{
	if (n == 0)
		return max;
	else return timmax(n / 10, (n % 10) > max ? (n % 10) : max);
}
int main()
{
	int n,max=0;
	cout << "N: ", cin >> n;
	cout << "Max trong N: " << timmax(n, max);
	return 0;
}