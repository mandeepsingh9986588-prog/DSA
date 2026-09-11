#include<stdio.h>
#define max 10
int stack[max];
int top=-1;
void push(int item){
if(top==max-1){
printf("overflow\n");
}else{
	top=top+1;
	stack[top]=item;
	printf("insert element\n");

}
}
void pop(int item){
	if(top==-1){
		printf("stack underflow\n");
	}else{
		item=stack[top];
		top=top-1;
		printf("delete element=%d\n",item);
	}
	}
void peek(){
	if(top==-1){
		printf("stack is empty");
	}else{
		printf("top element=%d\n",stack[top]);
	}
}
void display(){
	if(top==-1){
		printf("stack is empty/n ");
	}else{
		for(int i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
	}
int main(){
	int choice,item;
	while(1){
	printf("-----stack operation--------\n");
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.peek\n");
	printf("4.display\n");
	printf("exit\n");
	printf("enter ur choice:");
	scanf("%d",&choice);
	if(choice==1){
		printf("enter a value:");
		scanf("%d",&item);
		push(item);
	}
	else if(choice==2){
		pop(item);
	}else if(choice==3){
		peek();
	}else if(choice==4){
		display();
	}
	else{
		printf("exit\n");
	}
	}
}
