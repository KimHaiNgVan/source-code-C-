#include <iostream>
using namespace std;
struct node_nhiphan {
	int info;
	node_nhiphan * left, *right;
};
void khoitao_NhiPhan(node_nhiphan * root) {
	root = NULL;
}
void insert_NhiPhan(node_nhiphan *& root, int x) {
	if (root != NULL) {
		if (root->info == x)
			return;
		else if (root->info > x)
			return insert_NhiPhan(root->left, x);
		else 
			return insert_NhiPhan(root->right, x);
	}
	else {
		root = new node_nhiphan;
		root->info = x;
		root->left = root->right = NULL;
	}
}
void duyet_LNR(node_nhiphan *root) {
	if (root != NULL) {
		duyet_LNR(root->left);
		cout << root->info << "\t";
		duyet_LNR(root->right);
	}
}
void duyet_NLR(node_nhiphan *root) {
	if (root != NULL) {
		cout << root->info << "\t";
		duyet_LNR(root->left);
		duyet_LNR(root->right);
	}
}
void duyet_LRN(node_nhiphan *root) {
	if (root != NULL) {
		duyet_LNR(root->left);
		duyet_LNR(root->right);
		cout << root->info << "\t";
	}
}
node_nhiphan *search_NhiPhan(node_nhiphan *root, int x) {
	node_nhiphan *p = root;
	if (p != NULL) {
		if (p->info < x)
			return search_NhiPhan(p->right, x);
		if (p->info > x)
			return search_NhiPhan(p->left, x);
		else
			return p;
	}
	return NULL;
}
void searchStandFor(node_nhiphan *& p, node_nhiphan *& q) {
	if (q->left == NULL) {
		p->info = q->info;
		p = q;
		q = q->right;
	}
	else
		searchStandFor(p, q->left);
}
int delete_NhiPhan(node_nhiphan *& root, int x) {
	if (root == NULL) return 0;
	if (root->info == x) {
		node_nhiphan *p = root;
		if (root->left == NULL)
			root = root->right;
		else if (root->right == NULL)
			root = root->left;
		else
			searchStandFor(p, root->right);
		delete p;
		return 1;
	}
	if (root->info < x) return delete_NhiPhan(root->right, x);
	if (root->info > x) return delete_NhiPhan(root->left, x);
}
int tongSoNode_NhiPhan(node_nhiphan * root) {
	if (root == NULL)
		return 0;
	else return 1 + tongSoNode_NhiPhan(root->left) + tongSoNode_NhiPhan(root->right);
}
int timMin_NhiPhan(node_nhiphan * root) {
	if (root->left == NULL)
		return root->info;
	return  timMin_NhiPhan(root->left);
}
int timMax_NhiPhan(node_nhiphan * root) {
	if (root->right == NULL)
		return root->info;
	return  timMax_NhiPhan(root->right);
}
int tongGiaTri_NhiPhan(node_nhiphan * root) {
	int tong = 0;
	if (root == NULL)
		return 0;
	else return tongGiaTri_NhiPhan(root->left) + tongGiaTri_NhiPhan(root->right)+root->info;
}
void xuat_node2con_NhiPhan(node_nhiphan * root) {	
	if (root != NULL) {
		if (root->left != NULL && root->right != NULL)
			cout << root->info << "\t";

	}
	xuat_node2con_NhiPhan(root->left);
	xuat_node2con_NhiPhan(root->right);
}
int  dem_nodeLa_NhiPhan(node_nhiphan * root) {
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	else 
		return dem_nodeLa_NhiPhan(root->left) + dem_nodeLa_NhiPhan(root->right);
}
int chieucao_NhiPhan(node_nhiphan * root) {
	if (root == NULL) return -1;
	else {
		int l = chieucao_NhiPhan(root->left);
		int r = chieucao_NhiPhan(root->right);
		if (l > r) return l + 1;
		else return r + 1;
	}
}
int menu_CayNhiPhan() {
	int choose;
	cout << "===============BAT DAU============="
		<< "\n0.Thoat"
		<< "\n1. Khoi tao."
		<< "\n2.Them 1 phan tu."
		<< "\n3.Duyet LNR"
		<< "\n4.Duyet NLR"
		<< "\n5.Duyet LRN"
		<< "\n6.Tim kiem"
		<< "\n7.Xoa 1 Node"
		<< "\n8.Tong so luong Node"
		<< "\n9.Tim Min"
		<< "\n10.Tim Max"
		<< "\n11.Tong gia tri cua Cay"
		<< "\n12.So luong Node co 2 con"
		<< "\n13.So luong Node la"
		<< "\n14.Chieu cao cua cay"
		<< "\n===============KET THUC===============";
	cout << "\nchon [0-14]: "; cin >> choose;
	return choose;
}

void app_cayNhiPhan() {
	int menu_cayNhiPhan;
	node_nhiphan *root=NULL;
	do {
		system("cls");
	 menu_cayNhiPhan = menu_CayNhiPhan();
	
	 switch (menu_cayNhiPhan)
	 {
	 case 0:
		 cout << "Thoat thanh cong.\n";
		 break;
	 case 1:
		 khoitao_NhiPhan(root);
		 cout << "Khoi tao thanh phan \n";
		 break;
	 case 2:
		 int chen_NhiPhan_2;
		 cout << "Nhap gia tri can them vao cay: ";
		 cin >> chen_NhiPhan_2;
		 insert_NhiPhan(root, chen_NhiPhan_2);
		 cout << "Chen phan tu thanh cong.\n";
		 break;
	 case 3:
		 duyet_LNR(root);
		 break;
	 case 4:
		 duyet_NLR(root);
		 break;
	 case 5:
		 duyet_LRN(root);
		 break;
	 case 6:
		 int tim_NhiPhan_6;
		 cout << "Nhap gia tri Node can TIM: "; cin>> tim_NhiPhan_6;
		 if (search_NhiPhan(root, tim_NhiPhan_6) != NULL)
			 cout << "Tim thanh cong.\n";
		 else cout << "Khong co phan tu trong cay.\n";
		 break;
	 case 7:
		 int xoa_NhiPhan_7;
		 cout << "Nhap gia tri Node can XOA: "; cin >> xoa_NhiPhan_7;
		 if (delete_NhiPhan(root, xoa_NhiPhan_7) == 1)
			 cout << "Xoa thanh cong.\n";
		 else cout << "Xoa khong thanh cong.\n";
		 break;
	 case 8:
		 cout << "Tong so luong node trong cay la: " << tongSoNode_NhiPhan(root) << endl;
		 break;
	 case 9:
		 cout << "Gia tri MIN trong cay la: " << timMin_NhiPhan(root)<<endl;
		 break;
	 case 10:
		 cout << "Gia tri MAX trong cay la: " << timMax_NhiPhan(root) << endl;
		 break;
	 case 11:
		 cout << "Tong gia tri cac NODE cua cay la: " << tongGiaTri_NhiPhan(root) << endl;
		 break;
	 case 12:
		 xuat_node2con_NhiPhan(root);
		 break;
	 case 13:
		 cout << "So luong NODE LA trong cay la: " << dem_nodeLa_NhiPhan(root) << endl;
		 break;
	 case 14:
		 cout << "Chieu cao cua CAY NHI PHAN la: " << chieucao_NhiPhan(root) << endl;
		 break;
	 default:cout << "Khong hop le.\n";
		 break;
	 }
	 system("pause");
	} while (menu_cayNhiPhan != 0);
}
int main() {
	app_cayNhiPhan();
	return 0;
}