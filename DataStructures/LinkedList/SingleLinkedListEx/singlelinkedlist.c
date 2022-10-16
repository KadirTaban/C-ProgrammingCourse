#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    struct n * next;

};

typedef struct n node;

int main(){
    node * root;
    root = (node * )malloc(sizeof(node));
    root -> x = 10;
    root -> next = (node * )malloc(sizeof(node));
    root -> next -> x = 20;
    root -> next -> next = (node *) malloc(sizeof(node));
    root -> next -> next -> x = 30;
    root -> next -> next ->next = NULL;

    node * iter;

    iter = root;
    int i = 0 ;

    while(iter ->next != NULL){
        i++;
        printf("%d inci eleman : %d \n ",i,iter -> x);
        iter = iter -> next;

    }
}