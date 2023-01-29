#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 10

struct que
{
    int cnt;
    int front,rear;
    int data[QUEUE_SIZE];
};

typedef struct que que;

void initialize(que *q){
    q->cnt = 0 ;
    q->rear = -1;
    q->front = 0;
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
    if(q->cnt == 0 ){
        return 1;
    }
    else{
        return 0;
    }
}


void enqueue(que *q, int x){
    if(isFull(q)){
        printf("Queue is full. ");
    }else{
        q->rear++;
        q->cnt++;
        if(q->rear == QUEUE_SIZE){
            q->rear = 0;
        }
        q->data[q->rear]=x;
    }
}


int dequeue(que *q){
    if(isEmpty(q)){
        printf("Queue is empty");
        return 0;
    }else{
        int x = q->data[q->front];
        q->front++;
        q->cnt--;

        if(q->front ==  QUEUE_SIZE){
            q->front = 0;
        }
        return x;
    }
}
void isOdd(que *q){
    for(int i=0;i<q->cnt;i++){
        if(q->data[i]%2 == 1){
            printf("%d",q->data[i]);
        }  
    }

}
void display(que *q)
{
    int i;
    if(isEmpty(q)){
        printf("\n que is empty\n");
    }
    else{
        for (int i = q->front; i<=q->rear; i++){
            printf("%5d", q->data[i]);
        }
    }
} 


int main(){
    int num;
    que *q = (que*)malloc(sizeof(que));
    initialize(q);
    scanf("%d", &num);
    enqueue(q, num);
    scanf("%d", &num);
    enqueue(q, num);    
    display(q);
    num = dequeue(q);
    printf("\nElement at front: %d\n", num);
    isOdd(q);








}

