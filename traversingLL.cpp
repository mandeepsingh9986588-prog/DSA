#include<stdio.h>
#include<stdlib.h>
struct node  {
	int data;
	struct node *link;
};
void add_data_end(struct node *head,int data);
void traverse(struct node *head);
int main(){
	struct node *head=(struct node*)malloc(sizeof (struct node));
	head->data=98;
	head->link=(struct node*)malloc(sizeof (struct node));
	head->link->data=87;
	head->link->link=(struct node*)malloc(sizeof (struct node));
	head->link->link->data=65;
	head->link->link->link=NULL;
	add_data_end(head,67);
	traverse(head);
	return 0;
}
void add_data_end(struct node *head,int data){
	struct node*ptr,*temp;
	ptr =head;
	temp=(struct node*)malloc(sizeof (struct node));
	temp->data=data;
	temp->link=NULL;
	
	
	
	while(ptr->link!=NULL){
		ptr=ptr->link;
	}
	ptr->link=temp;
}
void traverse(struct node *head){
	struct node*ptr;
	ptr =head;
	while(ptr!=NULL){
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
	printf("NULL");
}
