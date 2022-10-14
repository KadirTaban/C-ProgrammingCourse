/* Adding the odd numbers to the beginning of the list and even numbers to the end of the list
until -1 is entered from keyboard.  */

#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

node *addEnd(node*last,int number)
node *addBeginning(node*head, int number);

typedef struct node node;

int main(){
    int number;
    node *head *last;
    head = (node*)malloc(sizeof(node));
    head->next = (node*)malloc(sizeof(node););
    
    printf("Enter number: \n");

    scanf("%d",&number);

    if(number != -1){
        head->data = number;
        head -> next = NULL;
        last = head;

    }
    while (number != -1){
        printf("Enter number: \n");
        
        scanf("%d",&number);

        if(number % 2 == 0 && number != -1 ){
            last = addEnd(last,number);


        }
    }


    
}

node *addEnd(node*last,int number){

    node *new ;
    new = node
}