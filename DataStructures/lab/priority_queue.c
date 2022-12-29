#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5

typedef struct {
    int A[QUEUE_SIZE+1];
    int cnt;
} pqueue;

void initialize(pqueue *p){
    p->cnt = 0;
}

void swap(int a, int b){
    int temp = b;
    b = a;
    a = temp;
}

void insertMax(pqueue *p,int key){
    if(p->cnt == QUEUE_SIZE)
        printf("full");

    else{
        p->cnt++;
        p->A[p->cnt] = key;
        int iter = p->cnt;

        while(iter !=1 && p->A[iter]>p->A[iter/2]){
            int temp = p->A[iter];
            p->A[iter] = p->A[iter/2];
            p->A[iter/2] = temp;
            iter = iter/2;
        } 
    }
}
void insertMin(pqueue *p,int key){
    if(p->cnt == QUEUE_SIZE)
        printf("full");

    else{
        p->cnt++;
        p->A[p->cnt] = key;
        int iter = p->cnt;

        while(iter !=1 && p->A[iter]<p->A[iter/2]){
            int temp = p->A[iter];
            p->A[iter] = p->A[iter/2];
            p->A[iter/2] = temp;
            iter = iter/2;
        } 
    }
}

void deleteMin(pqueue *p){
    if(p->cnt == 0){
        printf("Queue is empty");
    }
    else{
        int key = p->A[1];
        p->A[1] = p->A[p->cnt];
        p->cnt--;
        int iter = 1;
        while (2*iter<p->cnt&& p->A[iter]>p->A[2*iter] || p->A[iter]>p->A[2*iter+1])
        {
            if(p->A[2*iter]<p->A[2*iter+1]){
                swap(p->A[iter],p->A[2*iter + 1]);
                iter = 2*iter+1;
            }else{
                swap(p->A[iter], p->A[2*iter+1]);
                iter = 2*iter+1;
            }
        }
    }
}

void deleteMax(pqueue *p){
    if(p->cnt == 0){
        printf("Queue is empty");
    }else{
        int key = p->A[1];
        p->A[1] = p->A[p->cnt];
        p->cnt--;
        int iter=1;
        while (2*iter<p->cnt && p->A[iter]<p->A[2*iter] || p->A[iter]<p->A[2*iter+1])
        {
            if(p->A[2*iter]<p->A[2*iter+1]){
                swap(p->A[2*iter],p->A[2*iter+1]);
                iter = 2*iter;
            }else{
                swap(p->A[2*iter+1],p->A[2*iter]);
                iter = 2*iter+1;
            }
        }
    }   
}
void print(pqueue *p){
    if(p->cnt == 0){
        printf("queue is empty");
    }
    else{
        int i ;
        for(i=1;i<=p->cnt; i++){
            printf("%5d",p->A[i]);
        }
        printf("\n");
    }
}


int main(){

    pqueue p;
    initialize(&p);
    insertMax(&p,5);
    insertMax(&p,18);
    insertMax(&p,21);
    insertMin(&p,2);
    print(&p);
     
    deleteMax(&p);
    print(&p);

}