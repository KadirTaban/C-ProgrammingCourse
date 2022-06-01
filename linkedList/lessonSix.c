#include <stdio.h>
#include <stdlib.h>


struct node {
    int x;
    struct node *next;

};

typedef struct node Node;
void printNode(Node*);
Node* addNode(Node*,int);
int main(){
    Node* head = NULL;

    head = addNode(head,10);
    head = addNode(head,20);
    Node* iter = head;

    
    printf("\n");
    
    
    iter = head;
    
    for(int i = 0 ; i<5; i++){
        head = addNode(head,i*10);
    }
    printNode(head);
    
    
    return 0;
}
Node* addNode(Node* head, int val){

    if(head == NULL){
        head = (Node*)malloc(sizeof(Node));
        head->x = val;
        head->next = NULL;
        
        return head;

    }
    Node* iter = head;
    while (iter->next != NULL)
    {
        iter = iter->next;

    }
    iter->next = (Node*)malloc(sizeof(Node));
    iter->next->x = val;
    iter->next->next = NULL;
    

}
void printNode(Node* iter){
    printf("\n{");
    while (iter != NULL)
    {

        printf("%d-",iter->x);
        iter = iter->next;

    }

    printf("}\n");

}

void reverseList(Node* iter){
    
}