#include<iostream>
#include<string>
using namespace std;

int main()
{
	string n;
	int chieudai,i=0;
	cout <<"Nhap vao chuoi ky tu ";
	getline(cin,n);

	chieudai=n.length();
	for(int a=0;a<chieudai;a++)
	{
	if(isupper(n.at(a)))
		n.at(a)=tolower(n.at(a));

	}

	cout <<"Chuoi ky tu sau khi bien doi la "<< n<<endl;
	return 0;
}