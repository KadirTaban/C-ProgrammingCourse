#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};

typedef struct node node;
struct node *addfront(struct node *head, int key){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp -> data = key;
    temp -> next = head;
    head = temp;
    return head;
}

struct node *addlast(struct node *head,int key){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = key;
    temp->next = NULL;
    if(head == NULL){
        head = temp;  //if there is no first value.
    }else{
        struct node*last = head;
        while(last -> next != NULL)
            last = last ->next;

        last -> next = temp;
    }
    return head;
    
}

void print(struct node *head){
    if(head == NULL){
        printf("The list is empty \n");
    }else{
        while(head!=NULL){
            printf(" %d",head->data);
            head = head->next;

        }
    }
}

void print_rec(struct node *head){
    if(head==NULL)
        return ;
    printf("%d\t",head->data);
    print_rec(head->next);
}

void print_reverse( node *head){
    if(head == NULL)
        return;

    print_reverse(head->next);
    printf("%d \t",head->data);
}

int count(struct node *head){
    int counter = 0;
    while(head!=NULL){
        counter++;
        head = head->next;
    }
    return counter;
}

int count_rec(node* head){
    if(head ==NULL)
        return 0; 
    return count_rec(head->next)+1;
    
}
struct node * deleteNode(struct -node * r, int data){
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
    struct node *head = NULL;
    int data, choice;
    while(1){
        printf("\n 1-insert a node at front: \n");
        printf("2-insert a node at end: \n");
        printf("3-print the list \n");
        printf("4-print reverse \n");
        printf("5-print recursiven\n");
        printf("10-exit");
        printf("enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("enter the value to insert to the front");
            scanf("%d",&data);
            head=addfront(head,data);
            break;
        
       case 2:
            printf("enter the value to insert to the end");
            scanf("%d",&data);
            head=addlast(head,data);
            break;

        case 3:
            print(head);
            break;

        case 4:
            print_reverse(head);
            break;

        case 5:
            print_rec(head);
            break;

        case 6:
            exit(1);


        }
    }
}