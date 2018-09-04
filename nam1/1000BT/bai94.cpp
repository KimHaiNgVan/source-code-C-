#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 100; i++)
	{
		switch (i) {
		case 93: 
		case 5:
		case 7: 
			continue;
		}
		cout << i << " ";
	}
	return 0;
}