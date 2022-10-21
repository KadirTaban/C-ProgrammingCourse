#include <stdio.h>
#include <stdlib.h>
struct n{
 int data;
 struct n * next;
};
typedef struct n node;

void readNode(node *r){
    while(r!=NULL){
        printf("%d ",r->data);
        r=r->next;
 }
    printf(" \n");
}
node *addNode(node *r, int key){
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp -> data = key;
    temp -> next = r;
    r = temp;
    return r;
}

node * ekleSirali(node * r, int data){
    if(r==NULL){//linklist bossa
        r=(node*)malloc(sizeof(node));
        r->next= NULL;
        r->data = data;
        return r;
 }
    if(r->data > data){ // ilk elemandan kucuk durumu
    // r degisiyor
        node * temp = (node*)malloc(sizeof(node));
        temp -> data = data;
        temp -> next = r;
        return temp;
 }
 node * iter = r;
 while (iter -> next != NULL && iter ->next-> data < data){
    iter= iter -> next;
    }
 node * temp = (node*)malloc(sizeof(node));
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> data = data;
    return r;
}

node * deleteNode(node * r, int data){
    node * temp;
    node * iter = r;
 
        if(r->data == data){
            temp = r;
            r = r->next;
            free(temp);
            return r;

        }else{
            while(iter->next != NULL && iter -> next ->data != data){
            iter = iter ->next;
            }
            if(iter -> next == NULL){
                printf("invalid number for delete. \n");
                return r;
            }
            temp = iter ->next;
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
    root = addNode(root,k);
    root = addNode(root,a);
    root = addNode(root,d);
    root = addNode(root,i);
    root = addNode(root,r);
    readNode(root);
    printf("please enter invalid number : ");
    scanf("%d",&deleted);
    root = deleteNode(root,deleted);
    readNode(root);
}