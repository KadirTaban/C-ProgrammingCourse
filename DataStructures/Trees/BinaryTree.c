#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node *BinaryTree;

BinaryTree new_node(int data){
    BinaryTree p;
    p = (BinaryTree)malloc(sizeof(struct node));
    p->data = data;
    p->left=NULL;
    p->right=NULL;

    return p;
}

BinaryTree insert(BinaryTree root, int data){

    if(root!=NULL){
        if(data<root->data){
            root->left = insert(root->left,data);
        
        }else{
            root->right = insert(root->right,data);
        }
    }else{
        root=new_node(data);
    }
    return root;
}


void inorder(BinaryTree root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(BinaryTree root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void preorder(BinaryTree root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    BinaryTree myroot = NULL;
    int i = 0;
    scanf("%d",&i);
    while (i!=-1)
    {
        myroot = insert(myroot,i);
        scanf("%d",&i);
    }
    inorder(myroot);
    printf("\n ** %s ","PREORDER!! **\n");
    preorder(myroot);
    printf("\n ** %s ","POSTORDER!! **\n");
    postorder(myroot);
    
}