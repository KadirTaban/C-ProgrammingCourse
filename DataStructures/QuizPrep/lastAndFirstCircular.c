#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *add(struct node *head){
    struct node *iter= head;
    while(iter->next != head){
        iter = iter->next;
    }
    struct node *temp = (struct node * )malloc(sizeof(struct node));
    temp->data = head->data+iter->data;
    temp->next = head;
    iter->next = temp;
    return head;

}

int main(){
    struct node *root;
    root = (struct node * )malloc(sizeof(struct node));
    root->data = 10;
    root->next = (struct node * )malloc(sizeof(struct node));
    root->next->data = 12;
    root->next->next = root;

    root = add(root);
    root = add(root);
    struct node *iter = root;

    while (iter->next != root){
        printf("%d \n",iter->data);
        iter = iter->next;

    }

    
}
