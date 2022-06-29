#include <iostream>

using namespace std;

struct node{
	char data;
	node *left;
	node *right;
};

node *root=NULL;

void addNode(node **root, char isi){
	if ((*root)==NULL){
		node *baru;
		baru=new node;
		baru->data = isi;
		baru->left = NULL;
		baru->right = NULL;
		(*root)= baru;
	}
}

void PreOrder(node *root)
{
      if(root != NULL){
            printf("%c ", root->data);
            PreOrder(root->left);
            PreOrder(root->right);
      }
}

void InOrder(node *root)
{
      if(root != NULL){
            InOrder(root->left);
            printf("%c ", root->data);
            InOrder(root->right);
      }
}

void PostOrder(node *root)
{
      if(root != NULL){
            PostOrder(root->left);
            PostOrder(root->right);
            printf("%c ", root->data);
      }
}

int main (){
	char isinya ;
	printf("\n\n\n      Posisi Awal Binary tree:       \n\n\n");
	printf("-------------------A M I K Z J-------------------");
	
	addNode(&root, isinya='A');
	
	addNode(&root->left ,isinya='M');
	addNode(&root->right ,isinya='I');
	
	addNode(&root->left->left ,isinya='K');
	addNode(&root->right->right ,isinya='Z');
	addNode(&root->right->right->left  ,isinya='J');
	
	
	printf("\nPreOrder	: ");
	PreOrder(root);
	printf("\nInOrder 	: ");
	InOrder(root);
	printf("\nPostOrder	: ");
	PostOrder(root);
}
