#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

void create_tree(struct node *tree)
{
	tree = NULL;
}

struct node *insertElement(struct node *tree, int val)
{
	struct node *ptr, *nodeptr, *parentptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = val;
	ptr->left = NULL;
	ptr->right = NULL;
	if(!tree)
	{
		tree = ptr;
		tree->left = NULL;
		tree->right = NULL;
	}
	else
	{
		parentptr = NULL;
		nodeptr = tree;
		while(nodeptr)
		{
			parentptr = nodeptr;
			if(val<nodeptr->data)
			{
				nodeptr = nodeptr->left;
			}
			else 
			{
				nodeptr = nodeptr->right;
			}
		}
		if(val<parentptr->data)
		{
			parentptr->left = ptr;
		}
		else
		{
			parentptr->right = ptr;
		}
	}
	return tree;
}

int main()
{
	int option, val;
	struct node *ptr;
	//create_tree(tree);
	system("cls");
	do{
		printf("1. Insert Element\n");
		printf("2. Preorder Transversal\n");
		printf("3. Inorder Transversal\n");
		printf("4. Postorder Transversal\n");
		printf("5. Exit\nChoose : ");
		scanf("%d", &option);
		fflush(stdin);
		switch(option)
		{
		case 1:
			printf("\nEnter the value of the new node : ");
			scanf("%d",&val);
			fflush(stdin);
			//tree = insertElement(tree,val);
			break;
		case 2:

			break;
		case 3:
			break;
		case 4:
			break;
		}
	}while(option!=14);
	return 0;
}