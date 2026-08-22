#include <stdio.h>
#define MAX 10

int list[MAX];
int n = 0;
void insert(int pos,int value){
	for (int i=n;i>pos;i--)
	list[i]=list[i-1];
	list[pos]=value;
	n++;
}
void deleted(int pos)
{
    for (int i = pos; i < n - 1; i++)
        list[i] = list[i + 1];

    n--;
}
void display(){
	for(int i=0;i<n;i++)
	printf("%d",list[i]);
	printf("\n");
}

int main(){
	insert(0, 30 );
	insert(1, 90 );
	insert(2, 67 );
	
	printf("list\n");
	display();
	
	deleted(2);
	printf("\nafter delection\n");
	display();
	return 0;
}
