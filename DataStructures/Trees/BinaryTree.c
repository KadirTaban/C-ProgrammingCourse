#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct *node left;
    struct *node right;
}BTREE;


BTREE *newNode(int data){
    BTREE *p;
    p = (BTREE*)malloc(sizeof(struct node));
    p->data = data;
    p->left = p->right = NULL;
    return p;
}
BTREE *insert(BTREE *root, int x){
    if(root == NULL){
        root = newNode(x);
    }else{
        if(x<root->data)
            root->left = insert(root->left, x);

        else
            root->right = insert(root->right, x);
    }
    return root;
}

int sumLeaves(BTREE *root){
    if(root == NULL){
        return 0;
    }if(root->left = NULL && root->right = NULL)
        return root->data;

    return sumLeaves(struct node root->left) + sumLeaves(struct node root->right);
}

int main(){
    BTREE *root = NULL;

    root = insert(root,1);
    root = insert(root,2);
    root = insert(root,3);
    printf("%d",sumLeaves(root));

}