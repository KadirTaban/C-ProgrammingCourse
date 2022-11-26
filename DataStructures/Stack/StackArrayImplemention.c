#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

int count = 0;

struct stack{
    int items[STACK_SIZE];
    int top;
};
typedef struct stack stk;


void createEmptyStack(stk *s) {
    s->top = -1;
}

int isFull(stk *s) {
    if(s->top == STACK_SIZE-1)
        return 1;

    else
        return 0;
}

int isEmpty(stk *s){
    if(s->top == -1)
        return 1;

    else
        return 0;
}

void pop(stk *s) {
  if(isEmpty(s)) {
    printf("\n STACK EMPTY \n");
  }else{
    printf("Item popped= %d", s->items[s->top]);
    s->top--;
  }
  count--;
  printf("\n");
}

void push(stk *s, int newItem){
    if(isFull(s)){
        printf("Stack is full.");
    }else{
        s->top++ ;
        s->items[s->top] = newItem;
    }
    count++;
}

void printStack(stk *s) {
    printf("Stack: ");
    for(int i = 0; i<count; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n ");
}

int main() {
    int ch;
    stk *s = (stk*)malloc(sizeof(stk));

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);
    push(s, 7);
    push(s, 8);
    push(s, 9);
    push(s, 10);
    
    printStack(s);

    pop(s);
    
    printf("\n After popping out \n");

    printStack(s);
}
