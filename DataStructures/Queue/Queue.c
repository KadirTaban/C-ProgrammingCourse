#include<stdio.h>
#include<stdlib.h>
#define QUEUE_SIZE 10


struct node{
    int data;
    struct node *next;
};
typedef struct node node;


typedef struct{
    int cnt;
    struct node *front;
    struct node *rear;
}que;


void initialize(que *q){
        q->cnt = 0;
        q->front = NULL;
        q->rear = NULL;
    }

int isFull(que *q){
    if(q->cnt == QUEUE_SIZE){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(que *q){
    if(q->cnt == 0){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(que *q, int x){
    if (isFull(q)){
        printf("Queue is full");
    }else{
        struct node* temp = malloc(sizeof(node));
        temp->data = x;
        temp->next = NULL;
        if(isEmpty(q)){
            q->front = q->rear = temp;
        }else{
            q->rear->next= temp;
            q->rear = temp;
        }
        q->cnt++;
    }

}

void dequeue(que *q){
    if (isEmpty(q)){
        printf("Queue is empty");
    }else{
        node *temp = q->front;
        int x = temp->data;
        q->front = temp->next;
        printf("%d is leaving from queue.\n", x);
        free(temp);
        q->cnt--;

    }
}
void display(node *head)
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}


int main(){

    que *q;

    q = malloc(sizeof(que));
    initialize(q);
    enqueue(q,10);
    enqueue(q,20);
    display(q->front);
    dequeue(q);
    display(q->front);
    return 0;
    
}