#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5

typedef struct {
    int A[QUEUE_SIZE+1];
    int cnt;
    } pqueue;

void swap(int a, int b){
    int temp = b;
    b = a;
    a = temp;
}

void initialize(pqueue *p){
    p->cnt = 0;
    }
    
void insert(pqueue *p, int key){
    if(p->cnt == QUEUE_SIZE)
        printf("Full");

    else{
        p->cnt++;
        p->A[p->cnt] = key;
        int iter = p->cnt;
        
        while(iter!=1 && p->A[iter]<p->A[iter/2]){
        int temp = p->A[iter];
        p->A[iter] = p->A[iter/2];
        p->A[iter/2] = temp;
        iter = iter/2;
        }

    }
}

void delete(pqueue *p){
    if(p->cnt == 0){
        printf("Queue is empty");
       
    }
    else{
        int key = p->A[1];
        p->A[1] = p->A[p->cnt];
        p->cnt--;
        int iter = 1;
        while (2*iter<p->cnt && p->A[iter]>p->A[2*iter] || p->A[iter]>p->A[2*iter+1])
        {
            if(p->A[2*iter]< p->A[2*iter+1]){
                swap(p->A[iter],p->A[2*iter+1]);
                iter=2*iter+1;
            }else{
                swap(p->A[iter],p->A[2*iter+1]);
                iter = 2*iter+1;
            }
        }
        
    }

}


void print(pqueue *p){
    if(p->cnt == 0){
        printf("Queue is empty");
    }
    else{
        int i;
        for(i=1;i<=p->cnt; i++){
            printf("%5d",p->A[i]);
        }
        printf("\n")
    }
}

int main(){
    pqueue p;
    int input = 5;
    initialize(&p);
    insert(&p,5);
    insert(&p,6);
    insert(&p,4);
    print(&p);

    delete(&p); 
    insert(&p,3);


    print(&p);
}
