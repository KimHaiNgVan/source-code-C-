#include<iostream>
using namespace std;
struct node {
	int info;
	node *link;
};
node *first;
void init() {
	first = NULL;
}
node *creatNode(int x) {
	node *p = new node;
	p->info = x;
	p->link = NULL;
	return p;
}
void insertFirst(int x) {
	node *p = new node;
	p->info = x;
	p->link = first;
	first = p;
}
void creatList(int n) {
	int a[100];
	for (int i = 0; i < n; i++) {
		cin >>a[i];
		insertFirst(a[i]);
	}
}
void Output() {
	node *p = first;
	while (p != NULL) {
		cout << p->info<<"\t";
		p = p->link;
	}
}
node *find(int x) {
	if (first != NULL) {
		node *p = first;
		while (p != NULL) {
			if (p->info == x)
				return p;
			p = p->link;
		}
	}
	return NULL;
}
int removeFirst() {
	if (first == NULL)
		return 0;
	else {
		node *p = first;
		first = first->link;
		delete p;
		return 1;
	}
}
int insertLast(int x) {
	node *p = creatNode(x);
	if (first == NULL) {
		first = p;
		return 1;
	}
	else {
		node *q = first;
		while (q->link != NULL)
			q = q->link;
		q->link = p;
		return 1;
	}
	return 0;
}
int removeLast() {
	if (first != NULL) {
		node *p = first, *q = NULL;
		if (p != NULL) {
			while (p->link != NULL) {
				q = p;
				p = p->link;
			}
		}
		
		if (p != first)
			q->link = NULL;
		else first = NULL;
		delete p;
		return 1;
	}
	return 0;
}
int findAndRemove(int x)  {
	int i = 0;
	if (first != NULL) {
		int vitri = 0;
		for (node *p = first, *q = NULL; p != NULL;) {
			// 2 cai if nay phai dat dung thu tu, neu khong se khong chay.
			  if (p->info == x && q == NULL) {
				 i++;
				/* node *z = p;
				 p = p->link;
				 first = p;
				 delete z;*/
				 removeFirst();
				 p = first;
				//cả 2 cách đêu dc
			 }
			 else if (p->info == x) {
				 i++;
				 node *k = p;
				 p = p->link;
				 q->link = p;
				 delete k;
			
			 }
			 else {
				  q = p;
				  p = p->link;
			  }
		}
	}
	return i;
}
bool findMax(int &max){
	if (first != NULL) {
		node *p = first;
		max = p->info;
		while (p != NULL) {
			if (p->info > max) {
				max = p->info;
			}
			p = p->link;
		}
		return true;
	}
	return false ;
}
void add_q_after_p(int giatritim, int giatrithem) {
	if(first !=NULL){
		
		node *p = first;
		int dem = 0;
		while (p != NULL) {
			if (p->info == giatritim) {
				node *q = creatNode(giatrithem);
				node *k = p->link;
				q->link = k;
				p->link = q;
				dem++;
			}
			p = p->link;
		}
		if (dem != 0) cout << "Them thanh cong.\n";
		else cout << "Khong them duoc.\n";
	}
	else cout << "Khong tim duoc phan tu can tim.\n";
}// tao nhieu phan tu Q bang cach dat ham Create trong if
void add_q_before_p(int giatritim, int giatrithem) {
	if (first != NULL) {
		node *k = NULL, *p = first;
		int dem = 0;
		while (p != NULL) {
			if (p==first && p->info==giatritim) {
				insertFirst(giatrithem);
				dem++;
			}
			else if (p->info == giatritim) {
				node* q = creatNode(giatrithem);
				k->link = q;
				q->link = p;
				
				dem++;
			}
			k = p;
			p = p->link;
		}
		if (dem != 0) cout << "Them thanh cong.\n";
		else cout << "Khong them duoc.\n";
	}
	else cout << "Khong tim duoc phan tu can tim.\n";
}//có 2TH: Them Q ở vi tri ĐẦU TIÊN va Q ở các chỗ CÒN LẠI
void add_q_any(int giatrithem, int vitri)
{
	int soluongNode = 0;
	for (node *k = first; k != NULL; k = k->link)
	{
		soluongNode++;
	}
	node *p = first;
	node *q = creatNode(giatrithem);
	if (p == NULL || vitri == 0) {
		insertFirst(giatrithem);
	}
	else if (vitri == soluongNode)
	{
		insertLast(giatrithem);
	}
	else if (vitri > soluongNode || vitri < 0) {
		cout << "Vi tri can them khong hop le.\n";
	}
	else {
		int vitrihientai = 0;// cho con tro P chay den truoc vi tri roi them node Q sau node P.
		while (vitrihientai < vitri-1)
		{
			p = p->link;
			vitrihientai++;
		}
		node *h = p->link;
		q->link = h;
		p->link = q;
	}
}
void remove_q_after_p(int tim) {
	if (first != NULL) {
		int dem = 0;
		node *p = first;
		while (p != NULL) {
			if (p->info == tim && p->link == NULL) {
				cout << "Khong con phan tu phia sau.\n";
				return;
			}
			if (p->info == tim) {
				node *q = p->link;
				node *k = q->link;
				p->link = k;
				dem++;
				delete q;
			}
			
			p = p->link;
		}
		if (dem == 0)cout << "Khong xoa duoc phan tu Q nao.\n";
		else cout << "Xoa duoc " << dem << " phan tu.\n";
	}
	else cout << "Khong co phan tu nao de xoa.\n";
}
void remove_any(int vitrixoa) {
	if (first != NULL) {
		int soluongNode = 0;
		for (node *k = first; k != NULL; k = k->link) {
			soluongNode++;
		}
		if (vitrixoa>=1 && vitrixoa <= soluongNode)
		{
			if (vitrixoa == 1) {
				removeFirst();
				cout << "Xoa thanh cong.\n";
			}
			else
			{
				node *p = first;
				node *q = NULL;
				for (int vitri = 1; vitri < vitrixoa; vitri++)
				{
					q = p;
					p = p->link;
				}
				node *z = p;
				p = p->link;
				q->link = p;
				delete z;
			}
		}
	}
}
void giaiphong_bonho() {
	while (first != NULL) {
		node *p = first;
		first = first->link;
		delete p;
	}
}
void swap(int &a, int &b) {
	int tam = a;
	a = b;
	b = tam;
}
void  doi_2node(int &x, int &y) {
	if (first != NULL)
	{
		int i= 0;
		for (node *p = first; p->link != NULL; p = p->link) {
			for (node *q = p->link; q != NULL; q = q->link) {
				if ((p->info == x && q->info == y)|| (p->info == y && q->info == x)) {
					swap(p->info, q->info);
					i++;
				}
			}
		}
		if (i != 0) cout << "Doi cho thanh cong.\n";
		else cout << "Khong doi cho thanh cong.\n";
	}
	else cout << "Doi cho khong thanh cong.\n";
}

int menu_chuongI_DSLKD(){
	int choose;
		cout<<"============START============\n"
			<<"1. Khoi tao.\n"
			<<"2. Them dau.\n"
			<<"3.Tao danh sach co N phan tu.\n"
			<<"4. Xuat.\n"
			<<"5. Tim Kiem.\n"
			<<"6. Xoa Dau.\n"
			<<"7. Them Cuoi.\n"
			<<"8. Xoa Cuoi.\n"			
			<<"9. Tim kiem va Xoa.(Con khuyet diem, Xoa cuoi)\n"
			<<"10. Tim Lon nhat.\n"
			<<"11. Them Q sau P.\n"
			<<"12. Them Q truoc P.\n"
			<<"13.Them Q tai bat ky.\n"
			<<"14. Xoa Q sau P.\n"
			<<"15. Xoa vi tri bat ky.\n"
			<< "16. Giai phong bo nho. \n"
			<<"17. Doi cho 2 node bat ki.\n"
			<<"0. Quit.\n"
			<<"============END============\n";
	cout<<"Chon [0-8]: ";
	cin>>choose;
	return choose;
}
void app_chuongI_DSLKD(){
	int choose,x,timkiem, themcuoi, giatrithem,giatritim;
	bool kq10;
	do{
		system("cls");
		choose= menu_chuongI_DSLKD();
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
				if(findAndRemove(timxoa)!=0)
				{
					cout<<"Find and Remove successfully.\n";
				}
				else cout<<"Fail to find and remove.\n";
				break;
			case 10:
				int max;
				kq10 = findMax(max);
				if (kq10 == true)
					cout << "Max la: " << max << endl;
				else cout << "Fail to find the MAX element.\n";
				break; 
			case 11:
				cout << "Nhap vao gia tri can them: "; cin >> giatrithem;
				cout << "Them gia tri tren dang sau phan tu: "; cin >> giatritim;
				add_q_after_p(giatritim, giatrithem);
				break;
			case 12:
				int giatrithem, giatritim;
				cout << "Enter the Added Element: "; cin >> giatrithem;
				cout << "Enter the Found Element: "; cin >> giatritim;
				add_q_before_p(giatritim, giatrithem);
				break;
			case 13:
				int vitri, them;
				cout << "Nhap vao gia tri node them: "; cin >> them;
				cout << "Nhap vao vi tri can them: "; cin >> vitri;
				add_q_any(them, vitri);
				break;
			case 14:
				int tim;
				cout << "Gia tri node xoa: "; cin >> tim;
				remove_q_after_p(tim);
				break;
			case 15:
				int vitrixoa;
				cout << "Vi tri muon xoa: "; cin >> vitrixoa;
				remove_any(vitrixoa);
				break;
			case 16:
				giaiphong_bonho();
				break;
			case 17: 
				int x17, y17;
				cout << "Nhap vao gia tri 2 node: "; cin >> x17 >> y17;
				doi_2node(x17, y17);
		};
		system("pause");
	}while(choose != 0);
}
int main(){
	app_chuongI_DSLKD();
	return 0;
}
/*Lưu ý :
*Hàm add_q_before_p(), findAndRemove() : 
		_ có 2TH : 
				 + Q ở vi tri NULL
				 + Q ở các chỗ CÒN LẠI
*Hàm add_q_any() : 
		_ tính sluong Node, 3TH : 
				+ thêm ĐẦU(insertFirst), 
				+ thêm CUỐI(insertLast), 
				+ thêm GIỮA.thêm GIỮA : cho con trỏ P chạy đến while (vt < vitrithem - 1) rồi thêm vào.
*Hàm remove_q_after_p() : 
        _có 2TH : 
				+ node P nằm ở CUỐI,  
				+ node P nằm ở các vi tri khác.
*Hàm remove_any() : 
		_tính sluong Node, 
		_3TH : 
				+xóa ĐẦU(removeFirst), 
				+xóa Cuối(removeLast), 
				+xóa GIỮA(cho con trỏ chạy đến(vitrixoa - 1) rồi xóa như bth)
*Hàm đổi 2node : 
		_if ((p->info == x && q->info == y) || (p->info == y && q->info == x)) 
		thì đổi như hàm SWAP bình thường.
*/