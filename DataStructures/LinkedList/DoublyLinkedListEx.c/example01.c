#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node Node;

void readNode(Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
 }
    printf(" \n");
}

Node* AddFrontNode(Node*head, int key){
    Node* temp = malloc(sizeof(Node));
    temp->next = head;
    temp->prev = NULL;
    temp->data = key;

    head = temp;
    return head;
}

Node* AddLastNode(Node*head, int key){
    Node *temp = malloc(sizeof(Node));
    temp -> data = key;
    temp -> next = NULL;

    if(head==NULL){
        temp->prev = NULL;
        head=temp;
    }else{
        Node*last=head;
        while (last->next != NULL)
        {
            last=last->next;
        }
        last->next=temp;
        
    }

    return head;
}


int main(){
    Node *temp=NULL;
    int number,k,a,d,i,r;
    scanf("%d", &k);
    scanf("%d", &a);
    scanf("%d", &d);
    scanf("%d", &i);
    scanf("%d", &r);

    temp=AddFrontNode(temp,k);
    temp=AddFrontNode(temp,a);
    temp=AddFrontNode(temp,d);
    temp=AddFrontNode(temp,i);
    temp=AddLastNode(temp,r);
    readNode(temp);
}

