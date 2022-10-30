#include <stdio.h>
#include<ctype.h>
#define STACK_SIZE 20
//postfix notation ex: 34+ =7
typedef struct {
    int data[STACK_SIZE];
    int top;
}stack;


void initialize(stack *stk){
    stk->top = -1;
}

void push(stack *stk, int c){
    if(stk->top != STACK_SIZE-1){
        stk->top++;
        stk->data[stk->top]=c;
    }
    else{
        printf("This stack is full.\n");
    }
}

int pop(stack *stk){
    if(stk->top != -1){
        return stk->data[stk->top--];
    }
    printf("\n stack is empty !");
    return -1;
}


int main(){

    char exp[20];
    char *e;
    stack s;
    initialize(&s);
    int n1,n2,n3; //operands..
    printf("enter the expression: \n");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isdigit(*e)){
            int num = *e-48; // 0 is equivalent 48
            push(&s,num);
        }
        else{
            n1=pop(&s);
            n2=pop(&s);
            switch (*e)
            {
            case '+':
                n3 = n1 + n2;
                break;
            case '-':
                n3 = n2-n1;
                break;
            case '*':
                n3=n2*n1;
                break;
            case '/':
                n3=n2/n1;
                break;     
            }
            push(&s,n3);
        }
        e++; //for reading the next character ...
    }
    printf("\n the result of exp %s = %d \n\n",exp,pop(&s));
    return 0;
}