#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int x;
    struct node *prev;
    struct node *next;
}node;

void isPalindrome(node *root){
    node *temp = root;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    while(root->next != NULL && temp->prev!=NULL){
        if(root->x == temp->x){
            root = root->next;
            temp = temp->prev;
        }else{
            printf("the word is not a palindrome.");
            return;
        }

    }
    printf("this is a palindrome.");
}

int main(){
    node*head =(node*)malloc(sizeof(node));
    head->x = 1;
    head->next->x=0;
    isPalindrome(head);
  


}