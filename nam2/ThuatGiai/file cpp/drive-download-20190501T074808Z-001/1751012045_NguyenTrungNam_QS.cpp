#include<iostream>
#define MAX 100
using namespace std;
int gan,sosanh,hv;
void input(int a[] , int &n)
{
	do
	{
		cout<<"nhap so luong phan tu:";
		cin>>n;
		if(n <0 || n>100)
			cout<<"nhap sai nhap lai!!"<<endl;
	}while(n <0 || n>100);
	for(int i = 0 ; i<n ; i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}cout<<endl;
}
void swap(int &a , int &b )
{
	int c = a;
	a = b;
	b = c;
	gan = gan+3;
}
void output(int a[] , int n)
{
	for(int i = 0 ; i<n ; i++)
	{
		cout<<a[i]<<"\t";
	}cout<<endl;
}
void QuisckSort(int a[],int left,int right)
{
	int i , j ,x;
	x = a[(left+right)/2];
	i = left;
	j = right;
	gan=gan+3;
	while(sosanh++,i<j)
	{
		while(sosanh++,a[i]<x) 
		{
			i++;
			gan++;
		}
		while(sosanh++,a[j]>x) 
		{
			j--;
			gan++;
		}
		if(sosanh++,i<=j)
		{
			swap(a[i], a[j]);
			hv++;
			i++; j--;
			gan=gan+2;
		}
	}
	if(sosanh++,left<j)
		QuisckSort(a , left , j);
	if(sosanh++,i<right)
		QuisckSort(a , i , right);
}
int main()
{
	int a[MAX], n, left, right;
	input(a , n);
	left = 0;
	right = n-1;
	QuisckSort(a ,left,right);
	cout<<"mang duoc sap xep la: "<<endl;
	output(a,n);
	cout<<"so phep so sanh: "<<sosanh<<endl;
	cout<<"so phep gan : "<<gan<<endl;
	cout<<"so phep hoan vi: "<<hv<<endl;
	system("pause");
	return 0;
}