#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head ;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=89;
	head->link=NULL;
	
	struct node *current =(struct node*)malloc(sizeof(struct node));
	current->data=90;
	current->link=NULL;
	head->link=current;
	printf("%d\n",head->data);
	printf("%d\n",head->link);
	printf("%d\n",current->data);
	return 0;

}
