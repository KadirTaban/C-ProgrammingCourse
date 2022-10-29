#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
typedef struct Node Node;

void traverse(Node* head){
	Node *p;
	
	if(head == NULL){
		printf("The list is empty.");
		return;
	}

	p=head->next;

	do{
		printf("%d \n", p->data);
		p=p->next;
	}while(p != head->next);
}

struct Node* AddToEmpty(Node* head, int data){
	if(head != NULL)
		return head;

 	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data=data;

	head=newNode;

	head->next=head;

	return head;
}

Node* addFront(Node* head, int data){
	if(head==NULL)
		return AddToEmpty(head,data);

	Node* newNode=(Node*)malloc(sizeof(Node));

	newNode->data=data;
	newNode->next = head->next;
	head->next = newNode;

	return head;
}

Node* addEnd(Node* head, int data){
	if(head == NULL)
		return AddToEmpty(head,data);

	Node* newNode = (struct Node*)malloc(sizeof(Node));

	newNode->data = data;
	newNode->next = head->next;
	head->next = newNode;
	head = newNode;
	return head;

}
Node* InsertIntoNode(Node* head,int data, int item){
	if(head == NULL)
		return NULL;

	Node *newNode, *p;

	p = head->next;

	do{
		if(p->data == item) {
			newNode = (Node*)malloc(sizeof(Node));
			newNode->data=data;

			newNode->next=p->next;

			p->next = newNode;

			if(p == head)
				head = newNode;
			return head; 
		}
		p = p->next;
	}while (p != head->next);
	printf("\nThe given node is not present in the list");
	return head;
}


	
Node *deleteNode(Node *head, int data){
 	Node *temp;
 	Node *iter = head;
 	if(head->data == data){
   	while(iter->next!=head){
     	iter=iter->next;
   	}
   	iter->next=head->next;
   	free(head);
   	return iter->next;
 	}
 
 	while ( iter->next != head && iter->next->data != data){
  		iter = iter->next;
 	}
 	if ( iter->next == head){
  		printf( "Sayi bulunamadi!\n" );
  		return head;
 	}
 	temp = iter->next;
 	iter->next = iter->next->next; 
	free (temp);
 	return head;
}




int main(){
	Node*last=NULL;
	last = AddToEmpty(last,6);
	last = addEnd(last,7);
	last = addFront(last,4);
	last = InsertIntoNode(last, 32, 7);
	traverse(last);
	last = deleteNode(last,4);
	traverse(last);

}
 