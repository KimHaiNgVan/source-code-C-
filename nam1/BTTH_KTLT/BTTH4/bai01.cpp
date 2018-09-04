#include<cctype>
#include <iostream>
using namespace std;
void noichuoi(char *a, char *b)
{
	strcat(a, b);
}
void sosanh(char *a, char *b)
{
	if (strlen((a)) == strlen(b))
		cout << "Chieu dai 2 chuoi bang nhau\n";
	else if (strlen(a)>strlen(b))
		cout << "Chieu dai chuoi thu nhat dai hon chuoi thu hai\n";
	else if (strlen(a)<strlen(b))
		cout << "Chieu dai chuoi thu hai dai hon chuoi thu nhat\n";
}
void inhoa(char *p)
{
	while (*p)
	{
		if (isspace(*(p)))
		{
			p++;
		}
		else break;
	}
	*p = toupper(*p);
	p++;
	while (*p)
	{
		if (isspace(*(p - 1)) && isalpha(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
}
int main()
{
	char a[20], b[20];
	cout << "Chuoi thu nhat: ";
	cin.getline(a, 20);
	cout << "Chuoi thu hai: ";
	cin.getline(b, 20);
	char *p, *q;
	p = a, q = b;

	//cau a
	sosanh(p, q);
	cout << "Chuoi thu nhat sau khi in hoa chu cai dau tien: "; inhoa(p); cout << p << endl;
	cout << "Chuoi thu hai sau khi in hoa chu cai dau tien: "; inhoa(q); cout << q << endl;
	cout << "Chuoi ghep cua 2 chuoi la: "; noichuoi(p, q); cout << p<<endl;
	return 0;
}
