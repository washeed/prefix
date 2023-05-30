//Tree traversal in C
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct node {
    char data;
    struct node *left;
    struct node *right;
}NODE;

NODE *newNode(char x){//function to create a new node
NODE *n;
n = (NODE*) malloc(sizeof(NODE));
n->data = x;
n->left = NULL;
n->right = NULL;
}
void infix(NODE* n){//L->N->R
if(n==NULL)
    return;
infix(n->left);//traverse the left child in inorder recursively
printf("%c ", n->data);getch();//visit the root
infix(n->right);//traverse the right child in inorder recursively
}
void prefix(NODE* n){//N->L->R
if(n==NULL)
    return;

printf("%c ", n->data);getch();//visit the root
prefix(n->left);//traverse the left child in preorder recursively
prefix(n->right);//traverse the right child in preorder recursively

}
void postfix(NODE* n){//L->R->N
if(n==NULL)
    return;
postfix(n->left);//traverse the left child in postorder recursively
postfix(n->right);//traverse the right child in postorder recursively
printf("%c ", n->data);getch();//visit the root

}
int main(){
NODE *root;
printBinaryTree();
root = newNode('*');
root->left=newNode('-');
root->left->left = newNode('a');
root->left->right = newNode('b');
root->right = newNode('c');
printf("\nPrefix Notation: ");
prefix(root);
printf("\nInfix Notation: ");
infix(root);
printf("\nPostfix Notation: ");
postfix(root);
return 0;
getch();
}

void printBinaryTree(){
printf("     *   \n");
printf("   /   \\ \n");
printf("  -     c \n");
printf(" / \\ \n");
printf("a   b\n");
printf("\nhehe\n");

}
