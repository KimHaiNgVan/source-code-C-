#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;
int main()
{
	char giatri[30];
	int dem = 0;
	ifstream inBT5;
	inBT5.open("BT4.txt", ios::in);
	if (inBT5.is_open())
	{
		while (!inBT5.eof())
		{
			getline(inBT5, giatri);
			inBT5.ignore();
		}
		cout << "So luong ky tu la: " <<strlen(giatri)<<endl;
		cout << "Doc file thanh cong.\n";
		inBT5.close();
	}
	else {
		cout << "Doc file that bai.";
	}
	return 0;
}