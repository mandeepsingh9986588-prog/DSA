#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL;
void insert(){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=90;
	temp->prev=NULL;
	temp->next=NULL;
}
int main(){
	struct node*ptr=head;
	if(head==NULL){
		printf("the linked list was empty %n");
	}else{
		struct node* temp;
		temp =head;
		while (temp != NULL) {
		printf("Data = %d\n", temp->data);
		temp = temp->next;

}
}	
}

