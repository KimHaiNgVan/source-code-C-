#include<iostream>
#define MAX 100
using namespace std;
int gan,sosanh,hv;
void input(int a[], int &n, int &k)
{
	do{
		cout<<"So luong phan tu mang:"<<endl;
		cin>>n;
	 }while(n <=0 || n > 100);
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(k < a[i])
		k = a[i];
	}
}
void countingsort(int a[], int b[], int k, int n, int & kt)
{
	int i, j;
	int c[100];
	for(gan++,i = 0;sosanh++, i <= k;gan++, i++)
	{
		gan++;
		c[i] = 0;
	}
	for(gan++,j = 0;sosanh++, j < n;gan++, j++)
	{
		gan++;
		c[a[j]]++;
	}
	gan++;
	kt = 0;
	for(gan++,j = 0;sosanh++, j<=k;gan++, j++)
	{
		while(sosanh++,c[j]>0)
		{
			gan=gan+3;
			b[kt++] = j;
			c[j]--;
		}
	}
}
void output(int b[], int kt)
{
	
	for(int i = 0; i <kt; i ++)
		cout<<b[i]<<" ";
}
int main()
{
	int n, k=0,kt;
	int a[100];
	int b[100];
	input(a,n,k);
	countingsort(a ,b ,k,n,kt);
	cout<<"mang duoc sap xep la: ";
	output(b,kt);
	cout<<endl;
	cout<<"so phep so sanh "<<sosanh<<endl;
	cout<<"so phep gan "<<gan<<endl;
	system("pause");
	return 0;

}


