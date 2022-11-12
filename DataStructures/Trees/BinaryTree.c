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

int size(BinaryTree root){
    if(root!=NULL){
        return(size(root->left)+ 1 + size(root->right));
    }else{
        return 0;
    }
}

int maxDepth(BinaryTree node){
    int lDepth; int rDepth;
    if(node == NULL){
        return 0;
    }else{
        lDepth = maxDepth(node->left);
        rDepth = maxDepth(node->right);

        if(lDepth > rDepth){
            return(lDepth+1);
        }else{
            return(rDepth+1);
        }
    }
}
BinaryTree delete_node(BinaryTree root, int x){
    BinaryTree p,q;
    if(root == NULL){
        return NULL;
    }
    if(root->data == x){
        if(root->left == root->right){
            free(root);
            return NULL;
        }else{
            if(root->left == NULL){
                p=root->right;
                free(root);
                return p;
            }else if(root->right == NULL){
                p=root->left;
                free(root);
                return p;
            }else{
                p=q=root->right;
                while(p->left!=NULL){
                    p=p->left;
                    p->left=root->left;
                    free(root);
                    return q;
                }
            }
        }
    }
    if(root->data<x){
        root->right=delete_node(root->right,x);
    }else{
        root->left=delete_node(root->left,x);
    }
    return root;
}

BinaryTree search_binary_tree(BinaryTree root, int x){
    if(root == NULL || root->data == x){
        return root;
    }
    if(root->data < x){
        return search_binary_tree(root->right,x);
    }

    return search_binary_tree(root->left,x);
    
       
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
    printf("\n ** %s ","INORDER!! **\n");
    inorder(myroot);
    printf("\n ** %s ","PREORDER!! **\n");
    preorder(myroot);
    printf("\n ** %s ","POSTORDER!! **\n");
    postorder(myroot);
    printf("\n ** %s ","<MAXDEPTH>!! **\n");
    printf("\n %d",maxDepth(myroot));

    int deleteNode;
    printf("\n number for delete: \n ");
    scanf("%d",&deleteNode);
    delete_node(myroot,deleteNode);

    printf("\n ** %s ","INORDER!! **\n");
    inorder(myroot);
    printf("\n ** %s ","PREORDER!! **\n");
    preorder(myroot);
    printf("\n ** %s ","POSTORDER!! **\n");
    postorder(myroot);

    
}