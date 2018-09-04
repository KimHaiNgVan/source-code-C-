#include<iostream>
using namespace std;

int main()
{
	 double pi=1.0;
	int n=1;


	for(int i=1;n<=1000;n++)
	{
		pi=-i/(2*n+1);
		i=-i;
	
	}

	cout <<"Gia tri xap xi cua Pi la "<<pi*4<<endl;



	return 0;
}