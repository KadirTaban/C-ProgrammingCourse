#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node Node;

Node* head = NULL;

Node * Create(int number){
    
    Node* new_node = (Node*)malloc(sizeof(Node));

    new_node -> data = number;
    new_node -> next = NULL;
    new_node -> prev = NULL;

    return new_node;
}


void InserttoHead(int number){

    Node* added_node = Create(number);

    if(head == NULL){
        head = added_node;
        return;

    }else{
        Node* temp = head;
        head = added_node;

        head->next = temp;
        temp->prev = head;
    }
}

void InserttoTail(int number){
    Node* addedNode = Create(number);

    if(head == NULL){
        head = addedNode;
        return;
    }
    else{
        Node* temp = head;

        while(temp -> next != NULL){
            temp = temp->next;
        }

        temp->next = addedNode;
        addedNode->prev = temp;

    }

}

void DeleteFromHead(){
    if(head == NULL){
        printf("List is empty right now. \n");
        return;
    }else if(head->next == NULL){
        head = NULL;
    }else{
        Node* temp = head->next;
        temp->prev=NULL;
        free(head);
        head = temp;
    }

}

void PrintList(){
    Node* temp = head;

    while(temp != NULL){
        printf("%d", temp->data);
        temp = temp->next;
    }
}
int main(){
    int number;
    scanf("%d",&number);
    InserttoHead(number);
    scanf("%d",&number);
    InserttoTail(number);
    DeleteFromHead();
    PrintList();
    
}