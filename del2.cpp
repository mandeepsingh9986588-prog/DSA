#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

struct node* del_first(struct node *head) {
    if (head == NULL) {
        printf("Linked list is already empty\n");
        return NULL;
    }

    struct node *temp = head;
    head = head->link;
    free(temp);

    return head;
}

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));

    head->data = 98;
    head->link = (struct node*)malloc(sizeof(struct node));

    head->link->data = 87;
    head->link->link = (struct node*)malloc(sizeof(struct node));

    head->link->link->data = 65;
    head->link->link->link = NULL;

    struct node *ptr = head;

    printf("Original linked list:\n");
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    head = del_first(head);

    printf("After deleting first node:\n");
    ptr = head;

    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

    return 0;
}
