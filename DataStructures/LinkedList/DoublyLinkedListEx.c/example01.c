#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node Node;

void readNode(Node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
 }
    printf(" \n");
}

void readReverse(Node *head){
    if (head == NULL)
    {
        return ;
    }
    while (head->next != NULL)
        {
            head = head->next;
        }

    Node *last = head;
    while (last != NULL)
    {
        printf("%d ", last->data);
        last = last->prev;
    }
}

Node* AddFrontNode(Node*head, int key){
    Node* temp = malloc(sizeof(Node));
    temp->next = head;
    temp->prev = NULL;
    temp->data = key;
    if(head != NULL){
        head->prev = temp;

    }
    return temp;
}

Node* AddLastNode(Node*head, int key){
    Node *temp = malloc(sizeof(Node));
    Node *last;
    temp -> data = key;
    temp -> next = NULL;

    if(head==NULL){
        temp->prev = NULL;
        head=temp;
    }else{
        last = head;
        while (last->next != NULL)
        {
            last=last->next;
        }
        last->next=temp;
        temp->prev = last;
        
    }

    return head;
}

Node* DeleteNode(Node* head, int num){    
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    if(head->data == num){
        head=head->next;
        head->prev=NULL;
        free(temp);
    }else{
        while (temp!=NULL && temp->data != num){
            printf("%d",temp->data);
            temp=temp->next;
        }
        

        temp->prev->next = temp->next;
        if(temp->next!=NULL){
            temp->next->prev = temp->prev;
        }
        free(temp);
    }

    return head;
   /* if (head == NULL)
        return head;

    Node *temp = head, *last;
    
    if (head->data == num)
    {
        head = head->next;
    
        head->prev = NULL;
    
        free(temp);
    }else{
        while (temp != NULL)
        {
            if (temp->data == num)
            {
                temp->prev->next = temp->next;
                if (temp->next != NULL) //if it is from tail, passed this
                {
                    temp->next->prev = temp->prev;
                }
                free(temp);
                break;
            }
            temp = temp->next;
        }
    }
    return head; */
}


int main(){
    Node *temp=NULL;
    int number,k,a,d;
    scanf("%d", &k);
    scanf("%d", &a);
    scanf("%d", &d);

    temp=AddFrontNode(temp,k);
    temp=AddFrontNode(temp,a);
    temp=AddLastNode(temp,d);
  
    readNode(temp);
    printf("please enter valid number for delete: ");
    scanf("%d",&number);
    temp=DeleteNode(temp,number);
    readNode(temp);


    
    //scanf("%d",&number);
    //temp = DeleteNode(temp,number);

}

