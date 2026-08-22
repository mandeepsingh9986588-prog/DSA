#include <stdio.h>
struct{
	char *name;
	int age;
	float salary;	
}emp1,emp2;
int manager(){
	struct{
	char *name;
	int age;
	float salary;
	}manager;
	manager.age=27;
	if (manager.age>30)
	manager.salary=67000;
	else
	manager .salary=55000;
	return manager.salary;
}
int main(){
	printf("enter the emp1");
	scanf("%d",&emp1.salary);
	printf("%d",emp1.salary);
	printf("enter the emp2");
	scanf("%d",&emp2.salary);
	printf("%d",emp2.salary);
	printf("manager salary is %d",manager());
}
