#include<iostream>
using namespace std;
#define MAX 100
int a[MAX],sp;

int isFull(){
	if(sp==MAX-1)
	return 1;
	return 0;
}
int isEmpty(){
	if(sp==-1){
		return 1;
	}
	return 0;
}
void init(int a[MAX],int& sp){
	sp=-1;
}
int menu(){
	int choose;
	cout<<"===========BAT DAU==============\n"
		<<"1. Khoi tao.\n"
		<<"2. Push.\n"
		<<"3. Pop\n"
		<<"4. IsFull\n"
		<<"5. IsEmpty\n"
		<<"6. Convert-HEX-to-Bin.\n"
		<<"7. Convert-HEX-to-Any.\n"
		<<"0. Quit.\n"
		<<"===========KET THUC==============\n"
		<<"Chon [0-7]: ";
	cin>>choose;
	return choose;
}
int push(int x){
	while(sp<MAX-1){
		sp++;
		a[sp]=x;
		return 1;
	}
	return 0;
}
int pop(int &x){
	while(sp!=-1)
	{
		x=a[sp];
		sp--;
		return 1;
	}
	return 0;
}
void convert_DEC_to_BIN(int dec){
	int du;
	while(dec!=0)
	{
		du=dec%2;
		push(du);
		dec=dec/2;
	}
}
void convert_DEC_to_ANY(int dec,int any){
	int du;
	while(dec!=0)
	{
		du=dec%any;
		push(du);
		dec=dec/any;
	}
}
void printSTACK(){
	int result,x;
	while(!isEmpty()){
		result=pop(x);
		if(result==1)
		cout<<x;
	}
}
void app(){
	int choose,phantuthem,phantura,thapphan,any;
	do{
	
		choose=menu();
		
		switch(choose){
			case 0:cout<<"Thoat thanh cong!\n";break;
			case 1:init(a,sp);
				cout<<"Khoi tao STACK thanh cong.\n\n";
				system("pause");
				break;
			case 2:
				cout<<"Nhap vao phan tu muon them vao STACK: ";cin>>phantuthem;
				if(push(phantuthem)==1)
					cout<<"Them phan tu THANH CONG.\n";
				else 
					cout<<"Them phan tu THAT BAI.\n";
					system("pause");
				break;
			case 3:
				if(pop(phantura)==1)
					cout<<"Phan tu o dinh STACK la: "<<phantura<<"\n";
				else cout<<"Lay ra THAT BAI.\n";
				system("pause");
				break;
			case 4:
				if(isFull()==1)
				cout<<"STACK da day.\n";
				else cout<<"STACK chua day.\n";
				system("pause");
				break;
			case 5:
				if(isEmpty()==1)
				cout<<"STACK con trong";
				else cout<<"STACK khong con trong.\n";
				system("pause");
				break;
			case 6:
				cout<<"Nhap vao so THAP PHAN: ";
				cin>>thapphan;
				convert_DEC_to_BIN(thapphan);
				cout<<"Dap an la: ";
				printSTACK();
				cout<<endl;
				system("pause");
				break;
			case 7:
				cout<<"Nhap vao so THAP PHAN: ";
				cin>>thapphan;
				cout<<"He muon doi la: ";
				cin>>any;
				convert_DEC_to_ANY(thapphan,any);
				cout<<"Dap an la: ";
				printSTACK();
				cout<<endl;
				system("pause");
				break;
			
			default: cout<<"Lua chon khong hop le.\n";
			return;
			system("pause");
		};
	}while(choose!=0);
}
int main(){
	app();
	return 0;
}

