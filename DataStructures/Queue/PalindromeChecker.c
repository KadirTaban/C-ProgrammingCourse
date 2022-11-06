#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define QUERY_SIZE 20
#define STACK_SIZE 50


typedef struct node{
	int data;
	struct node *next;
}node;

struct queue{
    int cnt;
    node *front,*rear;
};

typedef struct queue queue;

typedef struct stack{
    int cnt;
    node *top;
}stack;


void initialize_stack(stack *stk){
    stk->cnt = 0;
    stk->top = NULL;
}

void push(stack *stack, int c){
    if(stack->cnt == STACK_SIZE)
        printf("Stack is full\n");
    else{
        node *temp = malloc(sizeof(node));
        temp->data = c;
        temp->next = stack->top;
        stack->top = temp;
        stack->cnt++;    
    }
}

int pop(stack *stk){
	if(stk->cnt != 0){
		struct node *temp = stk->top;
		stk->top = stk->top->next;
		int x = temp->data;
		free(temp);
		stk->cnt--;
		return x;
	}
	else
		printf("Stack is empty\n");
}

void initialize_q(queue *q){
    q->cnt=0;
    q->rear=NULL;
    q->front=NULL;
}

int isFull(queue *q){
    if(q->cnt == QUERY_SIZE){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(queue *q){
    if(q->cnt == 0){
        return 1;
    }else{
        return 0;
    }
}

int enqueue(queue *q, int x){
    if(isFull(q)){
        printf("queue is topped up.");
    }
    else{
        struct node *temp = malloc(sizeof(node));
        temp->data = x;
        temp->next = NULL;
        if(isEmpty(q)){
            q->front=q->rear=temp;
        }else{
            q->rear->next=temp;
            q->rear = temp;
        }
        q->cnt++;
    }
}

int dequeue(queue * q){
    if(isEmpty(q))
        printf("queue is empty");
    else{
        node *temp = q->front;
        q->front = q->front->next;
        int x = temp->data;
        free(temp);
        q->cnt--;
        return x;
    }
}

int main(){

    char text[50];
    stack *s = (stack*)malloc(sizeof(stack));
    queue *q = (queue*)malloc(sizeof(queue));
    initialize_stack(s);
    initialize_q(q);
    int i = 0;
    printf("Enter a text: \n");
    gets(text);
    while(i<strlen(text)){
        if(isalpha(text[i])){
            enqueue(q,tolower(text[i]));
            push(s,tolower(text[i]));
        }
        i++;
    }
    while(q->cnt != 0 ){
        if(pop(s) != dequeue(q)){
            printf("\nNot Palindrome");
            return 0;
        }
    }
    printf("\n Palindrome");
}