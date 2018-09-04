#include<iostream>
using namespace std;
int main()
	{
		int n;
		int sotruoc=0;

		cout <<"Nhap vao chuoi so nguyen ket thuc bang Ctrl+Z: ";
		cin>>n;

		while(cin>>n)
		{
			if(n==sotruoc)
			{
				cout <<"So lap lai la "<<n<<endl;
		
			}
				sotruoc=n;
		} 
		cout <<endl;
		return 0;
	}