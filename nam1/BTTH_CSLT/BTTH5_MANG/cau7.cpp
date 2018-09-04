#include <iostream>
using namespace std;
void nhap(int a[],int &n)
{
	cout <<"Kich thuoc mang la: ";
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cout <<"a["<<i<<"]=";
		cin >>a[i];
	}
}
void xuat(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout <<a[i];
	}
}
int traMin(int a[],int &n)
{
	int min=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<a[min])
		{
			min =i;
		}
	}
	return min;
}

int main()
{

	int a[50],n=0;
	nhap(a,n);
	xuat(a,n);
	
	cout <<"Vi tri cua cua so nho nhat trong mang la: "<<traMin(a,n)<<endl;
	return 0;
}