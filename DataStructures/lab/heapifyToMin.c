#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 5
typedef struct {
    int A[QUEUE_SIZE+1];
    int cnt;
} queue;

void initialize(queue *q){
    q->cnt = 0;
}

void swap(int a, int b){
    int temp = b;
    b = a;
    a = temp;
}

void insertMin(queue *q, int key){
    if(q->cnt == QUEUE_SIZE)
        printf("full");

    else{
        q->cnt ++;
        q->A[q->cnt] = key;
        int iter = q->cnt;
         while(iter !=1 && q->A[iter]<q->A[iter/2]){
            int temp = q->A[iter];
            q->A[iter] = q->A[iter/2];
            q->A[iter/2] = temp;
            iter = iter/2;
        }
    }
}
//final exam Q
void convertMax(queue *q){
    if(q->cnt == 0){
        printf("queue is empty");
    }
    else{
        int i;
        for(i=0;i<=q->cnt; i++){
            while(i !=1 && q->A[i]>q->A[i/2]){
            int temp = q->A[i];
            q->A[i] = q->A[i/2];
            q->A[i/2] = temp;
            i = i/2;
        } 

        }
    }

}
void print(queue *q){
    if(q->cnt == 0){
        printf("queue is empty");
    }
    else{
        int i ;
        for(i=1;i<=q->cnt; i++){
            printf("%5d",q->A[i]);
        }
        printf("\n");
    }
}

int left(int i){
    return 2*i;
}
int right(int i){
    return 2*i+1;
}
int parent(int i){
    return i/2;
}
int main(){
    queue q;
    initialize(&q);
    insertMin(&q,13);
    insertMin(&q,15);
    insertMin(&q,17);
    insertMin(&q,19);
    insertMin(&q,21);
    print(&q);
    convertMax(&q);
    print(&q);
    

}




