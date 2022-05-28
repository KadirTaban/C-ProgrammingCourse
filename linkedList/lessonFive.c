#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int no;
    char name [40];
    int age;
    struct node *link;

};
struct node *head,*newNode;

void traverseList(struct node* head){
    int counter = 1 ;
    struct node* p;
    p = head;
    while(p!=NULL){
        printf("%d %d %s %d", counter, p->no, p->name,p->age);
        p = p->link;
        counter++;
    }


}
int main(){

    int n,k;
    struct node *head, *p;
    scanf("%d",&n);

    for(k=0;k<n;k++){
        if(k==0){
            head = (struct node*)malloc(sizeof(struct node));
            p = head;

        }

        else{
            p->link = (struct node*)malloc(sizeof(struct node));
            p = p->link;

        }

       

    }
    p->link = NULL;
    traverseList(head);
    return 0;
}