#include<iostream>
#include<fstream>
const int max = 20;
using namespace std;
int main()
{
	char nguyenam[max];
	//doc file
	ifstream inBT6;
	inBT6.open("BT4.txt", ios::in);
	if (inBT6.is_open())
	{
		int i = 0;
			while (i < max)
			{
				inBT6 >> nguyenam[i];
				inBT6.ignore(1);
				i++;
			}
		cout << "Doc file thanh cong." << endl;
		inBT6.close();
	}
	else {
		cout << "Doc file that bai.";
	}
	//ghi file
	ofstream outBT6;
	outBT6.open("BT4.txt", ios::out);
	if (outBT6.is_open())
	{
		int i = 0;
			while (i < max)
			{
				if (nguyenam[i] == 'o' || nguyenam[i] == 'i' || nguyenam[i] == 'a' || nguyenam[i] == 'u' || nguyenam[i] == 'e')
					cout << nguyenam[i]<<endl;
				i++;
			}
		cout << "Ghi file thanh cong." << endl;
		outBT6.close();
	}
	else
	{
		cout << "Ghi file that bai.";
	}
	
	return 0;
}