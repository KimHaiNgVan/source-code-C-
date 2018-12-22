#include<iostream>
#include<fstream>
#define MAX 100
using namespace std;
struct node {
	int info;
	node *left;
	node *right;
};
void init(node *&root) {
	root = NULL;
}
bool them_mot(node *&root, int x) {
	if (root == NULL) {
		node *p = new node;
		p->info = x;
		p->left = p->right = NULL;
		root = p;
	}
	else {
		if (x == root->info)
			return false;
		else {
			if (x < root->info)
				return them_mot(root->left, x);
			else return them_mot(root->right, x);
		}
	}
	return true;
}
void them_danhsach(node *&root, int n) {
	int a[MAX];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		them_mot(root, a[i]);
	}
}
void duyetLNR(node *root) {
	if (root != NULL) {
		duyetLNR(root->left);
		cout << root->info << "\t";
		duyetLNR(root->right);
	}
}
void duyetLRN(node *root) {
	if (root != NULL) {
		duyetLRN(root->left);
		duyetLRN(root->right);
		cout << root->info << "\t";
		
	}
}
void duyetNLR(node *root) {
	if (root != NULL) {
		cout << root->info << "\t";
		duyetNLR(root->left);
		duyetNLR(root->right);
	}
}
bool tim_Min(node *root,int &min) {
	if (root != NULL) {
		if (root->left != NULL)
			tim_Min(root->left,min);
		min = root->info;
		return true;
	}
	return false;
}
bool tim_Max(node *root, int &max) {
	if (root != NULL) {
		if (root->right != NULL)
			tim_Max(root->right, max);
		max = root->info;
		return true;
	}
	return false;
}
node *search_dequy(node *root, int x) {
	if (root != NULL) {
		if (root->info == x)
			return root;
		else if (x < root->info)
			return search_dequy(root->left, x);
		else return search_dequy(root->right, x);
	}
	return NULL;
}
node *search(node *root, int x) {
	node *p = root;
	while (p != NULL) {
		
			if (p->info == x)
				return p;
			else if (x < p->info)
				p = p->left;
			else p = p->right;

	}
	return NULL;
}
void searchStandfor(node *p, node *q) {
	if (q->left == NULL) {
		p->info = q->info;
		p = q;
		q = q->right;
	}
	else searchStandfor(p, q->left);
}
int xoaBatky(node* root, int x) {
	if (root == NULL) return 0;
	if (root->info == x) {
		node *p = root;
		if (root->left == NULL)
			root = root->right;
		else if (root->right == NULL)
			root = root->left;
		else searchStandfor(root, p->right);
		delete p;
		return 1;
	}
	if (x < root->info) xoaBatky(root->left, x);
	if (x > root->info) xoaBatky(root->right, x);
}
void doc_File(char *fileName, node *&root) {
	fstream infile;
	infile.open(fileName, ios::in);
	int x, n, i = 0;
	if (infile.is_open()) {
		infile >> n;
		while (!infile.eof()) {
			infile >> x;
			them_mot(root, x);
			i++;
		}
		infile.close();
		if(i!=n)

			cout << "warning: so luong phan tu that su khac n\n";
	}
	else cout << "Mo file ko thanh cong.\n";
}
int menu() {
	int choose;
	cout << "============BAT DAU=============="
		<< "\n1. Khoi tao."
		<< "\n2. Them 1 node "
		<< "\n3. Them 1 danh sach "
		<< "\n4. Duyet LNR. "
		<< "\n5. Duyet LRN. "
		<< "\n6. Duyet NLR. "
		<< "\n7. Tim Min. "
		<< "\n8. Tim Max. "
		<< "\n9. Tim kiem NODE bat ky."
		<< "\n10. Tim kiem NODE bat ky.(De quy)"
		<< "\n11. Xoa X bat ky  "
		<< "\n12. Doc File  "
		<<"\n0. Ketthuc."
		<< "\n============KET THUC==============";
	cout << "\nLua Chon [0-11]: "; cin >> choose;
	return choose;
}
void app() {
	node *root;
	init(root);
	int choose;
	do{
		system("cls");
		choose = menu();
		switch (choose) {
		case 0: 
			cout << "Thoat thanh cong.\n";
			break;
		case 1:
			init(root);
			cout << "Khoi tao thanh cong.\n";
			break;
		case 2:
			int phantuthem;
			cout << "Nhap vao phan tu can them: "; cin >> phantuthem;
			if (them_mot(root, phantuthem))
				cout << "Them thanh cong\n";
			else cout << "Them that bai.\n";
			break;
		case 3:
			int phantu_ds;
			cout << "So luong phan tu danh sach la: "; cin >> phantu_ds;
			them_danhsach(root, phantu_ds);
			break;
		case 4:
			duyetLNR(root);
			break;
		case 5:
			duyetLRN(root);
			break;
		case 6:
			duyetNLR(root);
			break;
		case 7:
			int min;
			if (tim_Min(root, min))
				cout << "Gia tri min cua cay la: " << min << endl;
			else cout << "Khong tim duoc gia tri nho nhat.\n";
			break;
		case 8:
			int max;
			if (tim_Max(root, max))
				cout << "Gia tri max cua cay la: " << max << endl;
			else cout << "Khong tim duoc gia tri lon nhat.\n";
			break;
		case 9:
			int phantu_timkiem;
			cout << "Nhap vao phan tu can tim kiem: "; cin >> phantu_timkiem;
			if (search(root, phantu_timkiem) != NULL) {
				cout << "Tim kiem thanh cong.\n";
			}
			else cout << "Tim kiem that bai.\n";
			break;
		case 10:
			int phantu_timkiem2;
			cout << "Nhap vao phan tu can tim kiem: "; cin >> phantu_timkiem2;
			if (search_dequy(root, phantu_timkiem2) != NULL) {
				cout << "Tim kiem thanh cong.\n";
			}
			else cout << "Tim kiem that bai.\n";
			break;
		case 11:
			int phantuxoa;
			cout << "Nhap vao gia tri can XOA: "; cin >> phantuxoa;
			if (xoaBatky(root, phantuxoa) == 1)
				cout << "Xoa thanh cong.\n";
			else cout << "Xoa that bai.\n";
			break;
		case 12:
			/*doc_File(data.txt, root);*/
			cout << "Doc file thanh cong";
			break;
		default: cout << "Nhap khong hop le.\n"; break;
		}
		system("pause");
	} while (choose != 0);
}
int main() {
	app();
	return 0;
}