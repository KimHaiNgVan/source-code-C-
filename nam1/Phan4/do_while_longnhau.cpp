#include <iostream>
using namespace std;
int main()
{
	int i, j;
	i = 0;
	do
	{
		j = 0;
		do
		{
			cout << "Hai dep trai "<<endl;
			j++;
		} 
		while (j<3);
		cout << "Hai dep trai cuc ki luon "<<endl;
		i++;
	} 
	while (i <3);
	return 0;
}