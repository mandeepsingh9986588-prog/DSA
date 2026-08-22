#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*link;
};
int main(){
	struct node*head=(struct node*)malloc(sizeof (struct node));
	head->data=98;
	head->link=NULL;
	head->link=(struct node*)malloc(sizeof (struct node));
	head->link->data=87;
	head->link->link=(struct node*)malloc(sizeof (struct node));
	head->link->link->data=65;
	head->link->link->link=NULL;
	struct node*ptr=(struct node*)malloc(sizeof (struct node));
	ptr=head;
	while(ptr!=NULL){
	printf("%d \n",ptr->data);
	ptr=ptr->link;
	printf("After deleting first node:\n");
    ptr = head;
    head=del_first(head);
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}
struct node*del_first(struct node* head){
	if(head==NULL){
	printf("linked list is already");}
	else{
	struct node*temp=(struct node*)malloc(sizeof (struct node));
	temp=head;		
	head=head->link;
	free(temp);
	temp=NULL;
}}
