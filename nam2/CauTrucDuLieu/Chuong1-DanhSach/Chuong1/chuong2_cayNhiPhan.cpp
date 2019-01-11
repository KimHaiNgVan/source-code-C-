#include <iostream>
#include <fstream>
using namespace std;
struct node
{
	int info;
	node *left;
	node *right;

};
void tree_empty(node*&root)//cay rong
{
	root = NULL;
}
bool insert(node*&root, int x)
{
	if (root == NULL)
	{
		node*p = new node;
		p->info = x;
		p->left = p->right = NULL;
		root = p;
	}
	else
	{
		if (root->info == x)
			return false;
		else
			if (x < root->info)
			{
				insert(root->left, x);
			}
			else
			{
				insert(root->right, x);
			}
	}
}
void readFile(char *fileName, node *& root)
{
	/*fstream f;
	f.open(fileName, ios::in);

	int n, x, i = 0;
	if (f.is_open())
	{
		f >> n;
		while (!f.eof())
		{
			f >> x;
			insert(root, x);
			i++;
		}
		f.close();
		if (i != n)
			cout << " waring:so luong phan tu that su khac n\n";

	}*/
}
void LNR(node *&root)
{
	if (root != NULL)
	{
		LNR(root->left);
		cout << root->info << " ";
		LNR(root->right);
	}
}

void NLR(node *&root)
{
	cout << root->info << " ";
	LNR(root->left);
	LNR(root->right);
}
void LRN(node *&root)
{
	LNR(root->left);
	LNR(root->right);
	cout << root->info << " ";
}
node*seach(node*root, int x)
{
	while (root != NULL)
	{
		if (root->info == x)
			return root;
		else
			if (root->info > x)
			{
				root = root->left;
			}
			else // p-> info <x
				root = root->right;

	}
	return NULL;
}
void searchStandfor(node*&p, node*&q)
{
	if (q->left == NULL)
	{
		p->info = q->info;
		p = q;
		p = q->right;
	}
	else // q->left!=NULL, tim phan tu the mang 
		searchStandfor(p, q->left);
}
bool del(node*&root, int x)
{
	if (root != NULL)
	{
		if (root->info > x)
		{
			return del(root->left, x);
		}
		if (root->info < x)
		{
			return del(root->right, x);
		}
		else
		{
			node*p = root;
			if (root->left == NULL)
				root = root->right;
			if (root->right == NULL)
				root = root->left;
			else
			{
				node*q = root->right;
				searchStandfor(p, q);
			}
			delete p;
			return true;
		}
	}
	return false;

}
int SUM(node*root)
{
	if (root == NULL)
		return 0;
	else // ham chac chan co mot node
		return root->info + SUM(root->left) + SUM(root->right);

}
int count(node*root)
{
	if (root == NULL)
		return 0;
	else
		return 1 + count(root->left) + count(root->right);
}int chieucao(node*root) {
	if (root == NULL) return -1;
	else {
		int l = chieucao(root->left);
		int r = chieucao(root->right);
		if (l > r) return l + 1;
		else return r + 1;
	}
}
int menu()
{
	int chon;
	cout << "======================\n"
		<< "=========menu=========\n"
		<< "0.thoat\n"
		<< "1.khoi tao\n"
		<< "2.them phan tu vao cay nhi phan\n"
		<< "3.doc file\n"
		<< "4.duyet LNR\n"
		<< "5.duyet NLR\n"
		<< "6.duyet LRN\n"
		<< "7.tim kiem\n"
		<< "8.xoa phan tu\n"
		<< "9.tinh tong\n"
		<< "10.dem so phan tu \n"
		<< "11.Chieu cao cua cay. \n"
		<< "==========================\n";

	cout << "chon trong menu[1-6]:";
	cin >> chon;
	return chon;
}
void app()
{

	node*root;
	node*tim;
	tree_empty(root);
	int x;


	do
	{
		system("cls");
		int chon = menu();
		switch (chon)
		{
		case 11:
			cout << "Chieu cao cua cay la: " << chieucao(root) << endl;
			break;
		case 0:
			return;
			break;
		case 1:
			cout << " khoi tao thanh cong:";
			tree_empty(root);
			break;
		case 2:
			cout << " nhap gia tri can them: ";
			cin >> x;
			if (insert(root, x))
				cout << " nhap thanh cong ";
			else
				cout << " nhap that bai ";
			break;
		/*case 3:
			readFile("data.txt", root);
			cout << "da doc file thanh cong \n";
			break;*/
		case 4:
			cout << " duyet LNR: ";
			LNR(root);
			cout << endl;
			break;
		case 5:
			cout << "duyet NLR: ";
			NLR(root);
			cout << endl;
			break;
		case 6:
			cout << " duyet LRN: ";
			LRN(root);
			cout << endl;
			break;
		case 7:
			cout << " nhap gia tri can tim: ";
			cin >> x;
			tim = seach(root, x);
			if (tim != NULL)
				cout << "tim thay:" << tim->info << endl;
			else
				cout << "khong tim thay" << x << endl;
			break;
		case 8:
			cout << "nhap gia tri can xoa :";
			cin >> x;
			if (del(root, x))
				cout << " xoa thanh cong\n";
			else
				cout << "xoa that bai\n";
			break;
		case 9:
			cout << "tong =" << SUM(root) << "\n";
			break;
		case 10:
			cout << " so phan tu =" << count(root) << "\n";
			break;
		}
		system("pause");
	} while (true);
}
int main()
{
	app();
}