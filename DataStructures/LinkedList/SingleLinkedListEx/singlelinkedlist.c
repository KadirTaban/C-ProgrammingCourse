#include <stdio.h>
#include <stdlib.h>

struct n{ // a struct of linked list: contains data and next pointer.
    int x;
    struct n * next;

};

typedef struct n node; 

int main(){
    node * root; // create linkedlist.
    root = (node * )malloc(sizeof(node)); //root pointer memory is allocating.
    root -> x = 10;// data filling.
    root -> next = (node * )malloc(sizeof(node)); // next pointer is allocating
    root -> next -> x = 20; // root->next->data filling
    root -> next -> next = (node *) malloc(sizeof(node));// next->next pointer is allocating.
    root -> next -> next -> x = 30; //root->next->next->data filling
    root -> next -> next ->next = NULL;// root->next->next->next->NULL the last next pointer must be tail and NULL.

    node * iter;//iteration

    iter = root;
    int i = 0 ;

    while(iter != NULL){
        i++;
        printf("%d. factor : %d \n",i,iter -> x);
        iter = iter -> next;

    }
}