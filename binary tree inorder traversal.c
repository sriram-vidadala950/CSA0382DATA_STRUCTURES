#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};
struct node *create(){
    int x;
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data node ( enter -1 to no node : )");
    scanf("%d",&x);
    if(x == -1){
        return 0;
    }
    new->data = x;
    printf("\nEnter the left node of %d",x);
    new->left = create();
    printf("\nEnter the right node of %d",x);
    new->right = create();
    return new;
}
void inorder(struct node *root){
    if(root==0){
        return;
    }
    printf(" %d ",root->data);
    inorder(root->left);
    inorder(root->right);
}
int main(){
    struct node *root;
    root = create();
    printf("\nInorder of tree is : ");
    inorder(root);
}
