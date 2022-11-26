#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10 

struct node{//linked list implementation
    int data;
    struct node *next;
};

typedef struct{//stack definiton
    int counter;
    struct node* top;
}stk;


void initialization(stk *stk){//to create stack.
    stk -> counter = 0; 
    stk -> top = NULL;
}

void push(stk *stk, int c){
    if(stk->counter == STACK_SIZE){
        printf("Stack is Full.");
    }else {
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = c;
        temp->next = stk->top;
        stk->top = temp;
        stk->counter++;
    }
}

int pop(stk *stk){
    if(stk->counter == 0 ){
        printf("Stack is empty \n");
        return 0;
    }else{
        int x = stk->top->data;
        struct node *temp = stk->top->next;
        free(temp);
        stk->counter--;
        return x;
    }
}

void peek(stk *stk){
    if(stk-> counter == 0){
        printf("Stack is empty \n");
        
    }else{
        int x = stk->top->data;
        printf("stack: %d",x);
    }
}

int main(){
    int choice,num,loop=1;

    stk *stack = (stk*)malloc(sizeof(stk));

    
    while (loop)
    {
        printf("\n1 - initialization\n2 - push\n3 - pop\n");
        printf("4 - peek\n0 - Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            initialization(stack);
            break;
        case 2:
            printf("Number :");
            scanf("%d", &num);
            push(stack, num);
            break;
        case 3:
            num = pop(stack);
            printf("(pop)Element at top of the stack :%d\n", num);
            break;
        case 4:
            peek(stack);
            break;
        case 0:
            loop = 0;
            break;
        }
    }
    return 0;
}

