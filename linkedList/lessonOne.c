//Creating node in C.
#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;

};

typedef struct node node;



int main(){
    node *head = NULL;
    head = (node *)malloc(sizeof(node));

    head->data = 45;
    head->link = NULL;

    printf("%d", head->data);
    return 0;
    
}




    
