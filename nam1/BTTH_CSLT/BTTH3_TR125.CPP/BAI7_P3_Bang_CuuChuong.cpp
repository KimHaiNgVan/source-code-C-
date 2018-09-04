#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	int i, j;

	for(int i=1;i<=12;i++)
	{
		for (int j = 1; j <= 12; j++)
		{
			cout << i*j << "\t";
		}
		cout << endl;
	}
			
	return 0;
}