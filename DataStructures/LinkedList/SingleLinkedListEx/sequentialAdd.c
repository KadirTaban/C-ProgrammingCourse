#include <stdio.h>
#include <stdlib.h>
struct n{
 int x;
 struct n * next;
};
typedef struct n node;

void bastir(node *r){
    while(r!=NULL){
        printf("%d ",r->x);
        r=r->next;
 }
}
void ekle(node *r, int x){//sona ekler
    while(r->next!=NULL){//node'u sona götürür
        r = r -> next;
    }
    r->next = (node*)malloc(sizeof(node));
    r->next->x = x;
    r->next->next = NULL;
}
node * ekleSirali(node * r, int x){
    if(r==NULL){//linklist bossa
        r=(node*)malloc(sizeof(node));
        r->next= NULL;
        r->x = x;
        return r;
 }
    if(r->x > x){ // ilk elemandan kucuk durumu
    // r degisiyor
        node * temp = (node*)malloc(sizeof(node));
        temp -> x = x;
        temp -> next = r;
        return temp;
 }
 node * iter = r;
 while (iter -> next != NULL && iter ->next-> x < x){
    iter= iter -> next;
    }
 node * temp = (node*)malloc(sizeof(node));
    temp -> next = iter -> next;
    iter -> next = temp;
    temp -> x = x;
    return r;
}
int main(){
    node * root;
    root = NULL;
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
    root = ekleSirali(root,k);
    root = ekleSirali(root,a);
    root = ekleSirali(root,d);
    root = ekleSirali(root,i);
    root = ekleSirali(root,r);
    bastir(root);
}