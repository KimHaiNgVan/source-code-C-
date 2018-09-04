#include <iostream>
using namespace std;
int main()
{
	int i, j;
	i = 0;
	
	while (i <= 3)
	{
		j = 0;
		while (j <= 3)
		{
			cout << "Hai dep trai qua ! "<<endl;
			j++;
		}
		cout << "Hai cuc ki dep trai luon"<<endl;
		i++;
	}
	return 0;
}