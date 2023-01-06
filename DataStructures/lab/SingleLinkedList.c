#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;

int counter = 0;

node *addRandomHundred(node *r){
    
    while (counter != 100)
    {
        int randomNumber = rand()%1000+1;
        node *temp = malloc(sizeof(node));
        temp->data = randomNumber;
        temp->next=r;
        r=temp;
        counter++;
    }
    return r;
}


void display(node*r){
    while (r!=NULL)
    {
       printf("%10d ",r->data);
       r=r->next;
    }
    
}

void displaySequantial(node*r){
    int swapped;
    node *ptr1;
    node *ptr2=NULL;
    
    if(r == NULL){
        return;
    } 
    do
    {
        swapped=0;
        ptr1=r;

        while (ptr1->next != ptr2){

            if(ptr1->data < ptr1->next->data){
                int temp = ptr1->data;
                ptr1->data=ptr1->next->data; 
                ptr1->next->data = temp;
                swapped=1;
        }
        ptr1=ptr1->next;
        }
        ptr2=ptr1;
    } 
    while (swapped);
}
    
    
 


int main(){
    srand(time(NULL));

    node *root;
    root=NULL;
    root = addRandomHundred(root);
    display(root);
    printf("\n --after sequantial--\n");
    displaySequantial(root);
    display(root);
    



}