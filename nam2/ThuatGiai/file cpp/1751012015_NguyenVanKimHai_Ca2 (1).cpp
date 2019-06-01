#include<iostream>
#define MAX 100
using namespace std;

void nhap(int a[],int n)
{
	
	if(n>MAX)
		n=MAX;
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}
void output(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(i%10==0 && i>0)
			cout<<endl;
		cout<<a[i]<<"\t";
	}
	cout <<endl;
}

void InterhangeSort(int &sosanh,int &hoanvi,int &gan,int n,int a[])
{
	int i,j;
	for(gan++,i= 0; sosanh++, i< n-1; gan++ ,i++)
	{
		for(gan++ ,  j=i+1 ;sosanh++,  j<n  ; gan++ ,j++)
			if(sosanh ++,a[i]>a[j])
			{
				hoanvi++;
				gan=gan+3;
				int temp = a[i];
				a[i] = a[j];
				a[j] =temp;
			}
	}
			
}
int main()
{
	int a[100];
	int n;
	cout<<" Nhap so luong phan tu: ";
	cin>>n;
	int sosanh=0,hoanvi=0,gan=0;
	nhap(a,n);
	InterhangeSort(sosanh,hoanvi,gan,n,a);
	cout<<"Mang sau khi sap xep: ";
	output(a,n);
	cout<<" so phep so sanh la"<<sosanh<<endl;
	cout<<"so phep hoan vi la "<<hoanvi<<endl;
	cout<<"so phep gan la "<<gan<<endl;
	system("pause");
}

