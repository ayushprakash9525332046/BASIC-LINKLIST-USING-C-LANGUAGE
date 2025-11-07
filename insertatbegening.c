#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node * insertAtfirst(struct node *head,int data){
   struct node *ptr=(struct node *)malloc(sizeof(struct node));
   ptr->data=data;
   ptr->next=head;
   return ptr;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = second;

    second->data = 50;
    second->next = third;

    third->data = 55;
    third->next = fourth;

    fourth->data = 60;
    fourth->next = NULL;

    linkedlistTraversal(head);
    head=insertAtfirst(head,99);
    printf("insertng element\n");
    linkedlistTraversal(head);
    return 0;
}