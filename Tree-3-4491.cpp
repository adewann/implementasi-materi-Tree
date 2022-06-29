#include<stdio.h>


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

//fungsi yang digunakan untuk mencetak tree secara inOrder
void InOrder(node *root)
{
      if(root != NULL){
            InOrder(root->left);
            printf("%c ", root->data);
            InOrder(root->right);
      }
}

//fungsi yang digunakan untuk mencetak tree secara postOrder
void PostOrder(node *root)
{
      if(root != NULL){
            PostOrder(root->left);
            PostOrder(root->right);
            printf("%c ", root->data);
      }
}

main(){
char isinya;
printf("\n\n\tPosisi Awal Tree:\n\n");
printf("\t       A\n\t      / \\\n\t     M   I\n\t    /   / \\\n\t   K   J   Z\n\t  / \\\n\t O   M\n \t/ \\\n       Y   K\n\n");

addNode(&root, isinya='A');
	
addNode(&root->left ,isinya='M');
addNode(&root->right ,isinya='I');
	
addNode(&root->left->left ,isinya='K');
addNode(&root->right->right ,isinya='Z');
addNode(&root->right->right->left  ,isinya='J');

addNode(&root->left->left->left  ,isinya='O');
addNode(&root->left->left->right  ,isinya='M');	

addNode(&root->left->left->left->left ,isinya='Y');
addNode(&root->left->left->left->right ,isinya='K');

 printf("Tampilan PreOrder  : ");
 PreOrder(root);
 printf("\nTampilan InOrder   : ");
 InOrder(root);
 printf("\nTampilan PostOrder : ");
 PostOrder(root);
}

















