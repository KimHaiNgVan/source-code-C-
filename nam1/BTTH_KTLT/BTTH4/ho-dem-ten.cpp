#include <iostream>
using namespace std;
const int maxsize = 50;
void tach(char *p);
int main()
{
	char a[maxsize];
	cout <<"Nhap ho ten: ";
	cin.getline(a,maxsize);
	tach(a);
}

void tach(char *p)
{
	char *q = p;
	q =q+ strlen(p) -1;

	while( *p)			//B1:xoa khoang cach ban dau.
		if( isspace(*p)) p++;
		else break;
//ho
	*p = toupper(*p); //B2: in HOA chu cai ban dau cua HO.
	while(*p) //b3: in THUONG cac chu con lai cua HO.
		if( isalpha(*p))
		{
			cout << *p;
			p++;
			*p = tolower(*p);
		}
		else break;

	while( *p) //B4: xoa khoang cach HO vs TEN LOT.
		if( isspace(*p)) p++;
		else break;
	
		while (*q) //B5: in HOA chu cai dau cua TEN.
		{
			if (isspace(*q) && isalpha(*q - 1))
				*q = '\0';

			if (isspace(*(q - 1)) && isalpha(*q))

			{
				*q = toupper(*q);
				break;
			}
			else q--;
		}
//ten lot	
	while( p < q)
	{
		if( isspace(*p)) p++;//B6:  xoa KHOANG TRANG ten LOT.
		else
		{
			if( isspace(*(p-1)) && isalpha(*p)) //B7: in HOA chu cai dau ten LOT, in THUONG cac chu con lai.
			{ 
				*p = toupper(*p);
				cout <<" " << *p;
			}
			else { 
				*p = tolower(*p);
				cout << *p; 
			}
		p++; 
		}
	}
	cout <<" ";
//ten
	while( *q) //B8: in THUONG cac chu con lai cua TEN.
	{
		cout << *q;
		q++;
		*q = tolower(*q);
	}
	
}
 