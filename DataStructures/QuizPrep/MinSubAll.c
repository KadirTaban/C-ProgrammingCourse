#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *substractMin(struct node *head)
{
    struct node *iter = head;
    int min = iter->data;
    iter=iter->next;
    while(iter != NULL){
        if(iter->data <min){
            min = iter->data;
        }
        iter = iter->next;
    }
    iter = head;

    while (iter != NULL){
        iter->data = iter->data-min;
        iter = iter->next;
    }
    return head;

}

int main(){
    struct node *root;
    root = (struct node * )malloc(sizeof(struct node)); //root pointer memory is allocating.
    root->data = 10;
    root->next = (struct node * )malloc(sizeof(struct node));
    root->next->data=12;
    root->next->next=(struct node * )malloc(sizeof(struct node));
    root->next->next->data=13;
    root->next->next->next=(struct node * )malloc(sizeof(struct node));
    root->next->next->next->data =14;
    root->next->next->next->next=NULL;

    struct node*iter;
    iter=root;
    while(iter != NULL){
        printf("%d \n",iter->data);
        iter=iter->next;
    }
    
    substractMin(root);
    iter = root;
    while(iter != NULL){
        printf("%d \n",iter->data);
        iter=iter->next;
    }



}