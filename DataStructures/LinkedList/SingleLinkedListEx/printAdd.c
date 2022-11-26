#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    struct n * next;

};

typedef struct n node;

void bastir(node *r){//linkedlist halindeki pointerdaki dataları okuma
    while(r != NULL){
        printf("%d ",r->x);
        r = r->next;//bir sonraki pointera götürür.
    }
}

void ekle(node *r, int x){// son pointera primitif olarak data girmek.
    while (r->next != NULL){//taile gider.
        r = r->next;
    }
        r->next = (node*)malloc(sizeof(node));
        r->next->x = x;
        r->next->next = NULL;
    
}

int main(){
    node * root;
    root = (node * )malloc(sizeof(node));
    root ->next = NULL;
    root -> x = 500;
    
    int i = 0 ;
    for(i=0; i<5; i++){//taile ekleyerek yeni taile kadar veri girer.
        ekle(root, i*10);
        
    }
    bastir(root);
}