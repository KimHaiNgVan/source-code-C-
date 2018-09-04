#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	double s=0,n=0,s1=0;

	cout <<"Nhap vao so nguyen duong n: ";
	cin>>n;

	cout <<"	Cau A: "<<endl;
	s1=(n*(n+1))/2;
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	cout <<"S1 la "<<s1<<endl;
	cout <<"S la: "<<s<<endl;
	if(s1==s)
		cout <<"Dung roi. Hai vua dep trai ma con gioi nua chu <3 <3 "<<endl;
	else cout <<"Sai roi.Hai dep trai ma hoc te qua co gang them nhe. "<<endl;


	cout <<"	Cau B: "<<endl;

	 double s3=0;
	long double  s2=(n*(n+1)*(2*n+1))/6;
	for(int  j=1;j<=n;j++)
	{
		s3 += j*j;

	}

	cout <<"S2: "<<s2<<endl;
	cout <<"S3: "<<s3<<endl;
	if(s3==s2)
		cout <<"Dung roi. Hai vua dep trai ma con gioi nua chu <3 <3 "<<endl;
	else cout <<"Sai roi.Hai dep trai ma hoc te qua co gang them nhe. "<<endl;

	cout <<"	Cau C: "<<endl;

	long double s4=(n*n*(n+1)*(n=1))/4;
	long double  s5=0;
	for(int h=1;h<=n;h++)
	{
		s5+= h*h*h;
	}
	cout <<"S4: "<<s4<<endl;
	cout <<"S5: "<<s5<<endl;
	if(s4==s5)
		cout <<"Dung roi. Hai vua dep trai ma con gioi nua chu <3 <3 "<<endl;
	else cout <<"Sai roi.Hai dep trai ma hoc te qua co gang them nhe. "<<endl;
	return 0;
}