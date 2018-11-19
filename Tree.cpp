#include<stdio.h>
#include<stdlib.h>

struct mahasiswa
{
	float ipk;
	struct mahasiswa *left,*right;
};

struct mahasiswa* initMhs(float ipk)
{
	struct mahasiswa *curr = (mahasiswa*)malloc(sizeof(struct mahasiswa));
	curr->ipk = ipk;
	curr->left = NULL;
	curr->right = NULL;
	return curr;
}
struct mahasiswa* insert(struct mahasiswa* mahasiswa, float ipk)
{
	if(mahasiswa==NULL)
		return initMhs(ipk);
	if(ipk >= mahasiswa->ipk)
		mahasiswa->right = insert(mahasiswa->right,ipk);
	else if(ipk<mahasiswa->ipk)
		mahasiswa->left = insert(mahasiswa->left,ipk);
	return mahasiswa;
}
void inorder(struct mahasiswa *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%.2f \n", root->ipk);
		inorder(root->right);
	}
}
void postorder(struct mahasiswa *root)
{
	if(root!=NULL)
	{
		printf("%.2f \n",root->ipk);
		postorder(root->left);
		postorder(root->right);
	}
}
void preorder(struct mahasiswa *root)
{
	if(root!=NULL)
	{
		preorder(root->left);
		preorder(root->right);
		printf("%.2f \n",root->ipk);
	}
}
// C function to search a given key in a given BST
struct mahasiswa* search(struct mahasiswa* root, float key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->ipk == key)
       return root;
    
    // Key is greater than root's key
    if (root->ipk < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}
int main()
{
	struct mahasiswa *root = NULL;
	root = insert(root,50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
	inorder(root);
	getchar();
	puts("");
	preorder(root);
	getchar();
	puts("");
	postorder(root);
	getchar();
	return 0;
}