#include <stdio.h>
#include <stdlib.h>
struct n{
 int data;
 struct n * next;
};

typedef struct n node;

void readNode(node *r){
    if(r == NULL){
        printf("The list is empty \n");
    }else{
        while(r!=NULL){
            printf(" %d",r->data);
            r = r->next;

        }
    }
}

node *addFrontNode(node *r, int key){
    node *temp;
    temp = malloc(sizeof(node)); //to create any new pointer
    temp -> data = key; //and its data is key
    temp -> next = r; //it is very essential, its next bounded head of linked.
    r = temp; //now, temp already has head.
    return r;
}


node *addLastNode(node *r, int key){
    while(r->next !=NULL){
        r = r->next;
    }
    r->next = (node*) malloc(sizeof(node));
    r->next->data = key;
    r->next->next = NULL; 
}


node * deleteNode(node * r, int data){
    node * temp;
    node * iter = r;
 
        if(r->data == data){//if we called head data.
            temp = r;
            r = r->next;
            free(temp);
            return r;

        }else{
            while(iter->next != NULL && iter -> next -> data != data){//while it is inside linkedlist and continue til iter->next->data = data
            iter = iter -> next;
            }
            if(iter -> next == NULL){
                printf("invalid number for delete. \n");
                return r;
            }
            temp = iter -> next;
            iter -> next = temp -> next;
            free(temp);
            return r;
        }
}  

int main(){
    node * root;
    root = NULL;
    int deleted;
    int k;
    int a;
    int d;
    int i;
    int r;
    scanf("%d",&k);
    scanf("%d",&a);
    scanf("%d",&d);
    scanf("%d",&i);
    scanf("%d",&r);
    
    root = addFrontNode(root,k);
    root = addFrontNode(root,a);
    root = addFrontNode(root,d);
    root = addFrontNode(root,i);
    root = addLastNode(root,r);

    readNode(root);
    printf("please enter valid number : ");
    scanf("%d",&deleted);
    root = deleteNode(root,deleted);
    readNode(root);
}
