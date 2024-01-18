#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree* root=NULL;
struct tree* insert(struct tree *root,int data){
    if (root==NULL)
    {
        root=(struct tree*)malloc(sizeof(struct tree));
        root->data=data;    
        root->left=NULL;  
        root->right=NULL;    
    }
    else if (data<root->data)
    {
        root->left=insert(root->left,data);
    }
    else if (data>root->data)
    {
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(struct tree *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
int main(){
    int n,i,data;
    printf("enter the no. of nodes:");
    scanf("%d",&n);
    for (i = 0; i <n; i++)
    {
        printf("enter the data:");
        scanf("%d",&data);
        root=insert(root,data);
    }
    printf("Inorder:");
    inorder(root);
return 0;
}