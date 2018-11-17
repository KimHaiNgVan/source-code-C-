#include<iostream>
using namespace std;
struct  node{
	int info ;
	node *link;
};
node *first;
void init(){
	first=NULL;
}
node *creatNode(int x){
	node *p=new node;
	p->info=x;
	p->link=NULL;
	return p;
}
int insertFirst(int x){
	node *p=creatNode(x);
	p->link=first;
	first=p;
}
void Output(){
	node *p=first;
	while(p!=NULL){
		cout<<p->info<<"\t";
		p=p->link;
	}
}
void add_q_after_p(int p,int q){
	for(node * k=first;k!=NULL;k=k->link){
		if(k->info==p)
		{
			node *h=creatNode(q);
			node *g=k->link;
			h->link=g;
			k->link=h;
		}
	}
}
int removeFirst(){
	node * p;
	p=first;
	if(p!=NULL){
		first=first->link;
		delete p;
		return 1;
	}
	return 0;
}
node* find(int x){
	node *p;
	p=first;
	while(p!=NULL)
	{
		if(p->info==x)
		return p;
		p=p->link;
	}
	return p;
}
int insertLast(int x){
	node *p=creatNode(x);
	if(first==NULL)
		{
			first=p;
			return 1;
		}
	else{
		node *q=first;
		while(q->link!=NULL)
			q=q->link;
			q->link=p;
			return 1;
	}
	return 0;
}
int removeLast(){
	if(first!=NULL){	
	node *p,*q;
	p=first,q=NULL;
	if(p->link!=NULL)
		{
			while(p->link!=NULL)
			{
				q=p;
				p=p->link;
			}
			q->link=NULL;
		}
	else 
		first=NULL;
		delete p;
		return 1;
	}
	return 0;
}
int findAndRemove(int x){
	node *p=first,*q=NULL,*k;
	while(p!=NULL)
	{
		if(p->info==x)
		{
			k=p->link;
			node *z=new node;
			z=p;
			q->link=k;
		}
		q=p;
		p=p->link;
	}
    
    return 1;
}
bool findMax(int& max){
	if(first==NULL)
	{
		return false;
	}
	else{
		max=first->info;
		for(node *k=first->link;k!=NULL;k=k->link)
		{
			if(max<k->info)
			max=k->info;
		}
		return true;
	}
	
	
}

void creatList(int n){
	cout<<"Nhap gia tri cac phan tu Node: "<<endl;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		creatNode(x);
		insertFirst(x);
	}
}

int menu(){
	int choose;
		cout<<"============START============\n"
			<<"1. Init.\n"
			<<"2. Insert First.\n"
			<<"3. Creat a List with N elements.\n"
			<<"4. Output.\n"
			<<"5. Find.\n"
			<<"6. Remove First.\n"
			<<"7. Insert Last.\n"
			<<"8. Remove Last.\n"
			<<"9. Find and Remove.\n"
			<<"10. Find the Max Element.\n"
			<<"11. Add Q node after P node.\n"
			<<"0. Quit.\n"
			<<"============END============\n";
	cout<<"Chon [0-8]: ";
	cin>>choose;
	return choose;
}
void app(){
	int choose,x,timkiem, themcuoi, giatrithem,giatritim;
	do{
		system("cls");
		choose=menu();
		switch(choose){
			case 0:cout<<"Quit successfully.\n";break;
			case 1:init();
				cout<<"Khoi tao thanh cong!\n";
				break;
			case 2:
				cout<<"So can chen la: ";
				cin>>x;
				insertFirst(x);
				cout<<"Insert First Successfully.\n";
				break; 
			case 3:
				int n;
				cout<<"Nhap vao so node: ";cin>>n;
				creatList(n);
				break;
			case 4:
				Output();
				cout<<endl;
				break;
			case 5:
				cout<<"So can tim kiem la: ";cin>>timkiem;
				if(find(timkiem)!=NULL)
					cout<<"Find successfully.\n";
				else cout<<"Fail to Find\n";
				break;
			case 6:
				if(removeFirst()==1)
					cout<<"Remove first Element successfully.\n";
				else
				cout<<"Fail to remove first Element.\n";
				break;
			case 7:
				
				cout<<"Nhap vao gia tri muon them cuoi: ";cin>>themcuoi;
				if(insertLast(themcuoi)==1)
					cout<<"Insert Last successfully.\n";
				else cout<<"Fail to insert Last.\n";
				break;
			case 8: 
				if(removeLast()==1)
				cout<<"Remove Last Element successfully.\n";
				else 
					cout<<"Fail to remove last element.\n";
					break;
			case 9:
				int timxoa;
				cout<<"Enter the Element: ";cin>>timxoa;
				if(findAndRemove(timxoa)==1)
				{
					cout<<"Find and Remove successfully.\n";
				}
				else cout<<"Fail to find and remove.\n";
				break;
			case 11:
				cout<<"Nhap vao gia tri can them: ";cin>>giatrithem;
				cout<<"Them gia tri tren dang sau phan tu: ";cin>>giatritim;
				add_q_after_p(giatritim,giatrithem);
				break;
			case 10:
				int max;
				bool kq=findMax(max);
				if(kq==true)
				cout<<"Max la: "<<max<<endl;
				else cout<<"Fail to find the MAX element.\n";
				break;
			
		};
		system("pause");
	}while(choose != 0);
}
int main(){
	app();
	return 0;
}
