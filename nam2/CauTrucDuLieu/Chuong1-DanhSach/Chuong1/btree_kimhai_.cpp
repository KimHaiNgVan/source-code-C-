#include <iostream>
#include <fstream>

using namespace std;


struct node
{
	int info;
	node *left;
	node *right;
};

void emptyTree(node *&root)
{
	root = NULL;
}
bool insert(node *&root, int x)
{
	if( root == NULL )
	{
		node * p = new node;
		p->info = x;
		p->left=p->right=NULL;
		root = p;
	}
	else
	{
		if(root -> info == x)
			return false;
		else
			if(x < root->info)
				insert(root->left, x);
			else
			    insert(root->right, x);
	}
	return true;
}
void readfile(char *filename, node *& root)
{
	fstream f;
	f.open(filename, ios::in);
	int n, x, i =0;
	if(f.is_open())
	{
		f >> n;
		while (!f.eof())
		{
			f >> x;
			insert(root , x);
			i++;
		}
		f.close();
		if(i != n)
			cout <<"warning: so luong phan tu that su khac n\n";
	}
}
void LNR(node *root)
{
	if( root != NULL)
	{
		LNR(root->left);
		cout <<root->info <<"\t";
		LNR(root->right);
	}
}
void LRN(node * root)
{
	if( root != NULL)
	{
		LRN(root->left);
		LRN(root->right);
		cout << root->info <<"\t";
	}
}
void NLR( node * root)
{
	if( root != NULL)
	{
		cout << root->info <<"\t";
		LRN(root->left);
		LRN(root->right);
	}
}
int menu()
{
	cout<<" =====================================\n";
	cout<<" ================MENU=================\n"
		<<"\t1.khoi tao gia tri rong\n"
		<<"\t2.them mot phan tu vao cay nhi phan\n"
		<<"\t3.Readfile\n"
		<<"\t4.LNR\n"
		<<"\t5.LRN\n"
		<<"\t6.NLR\n"
		<<"\t7.\n"
		<<"\t0.thoat\n";
	cout<<" ====================================\n";
	int choose;
	cout<<"[chon 0-7]";
	cin >> choose;
	return choose;

}
void app()
{
	int choose;
	node * root;
	emptyTree(root);
	node * p;
	int x;
	do
	{
		choose= menu();
		switch(choose)
		{
		case 1://khoi tao cay rong
			emptyTree(root);
			cout<<" khoi tao gia tri rong thanh cong\n";
			break;
		case 2://insert
			cout<<"nhap x: ";
			cin >>x;
			if(insert(root,x))
				cout<<" chen thanh cong\n";
			else
				cout <<" chen khong thanh cong\n";
			break;
		case 3:
			readfile("data.txt", root);
			cout <<" da doc file thanh cong\n";
			break;
		case 4://Lnr
			LNR(root);
			cout <<endl;
			break;
		case 5:
			LRN(root);
			cout <<endl;
			break;
		case 6:
			NLR(root);
			cout <<endl;
			break;
		}
	}while(true);
}
int main()
{
	app();
	return 0;
}