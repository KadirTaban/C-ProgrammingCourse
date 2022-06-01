#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
}

typedef struct node Node;


int main(){

    Node* head = NULL;

    head = (Node*)malloc(sizeof(Node));

    head->data = 45;
    head->next = NULL;

    struct node* current = malloc(sizeof(struct node));
        current->data = 98;
        current->next = NULL;
        head -> next = current;

        current = malloc(sizeof(struct node));
        current -> data = 3;
        current -> next = NULL;

        head->link->link = current ;

    printf("%d",head->data);
    return 0;
}