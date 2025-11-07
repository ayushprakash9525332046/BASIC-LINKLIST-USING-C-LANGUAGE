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
struct node *deletionatnode(struct node *head,int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->data != NULL)
    {

        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
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

    second->data = 55;
    second->next = third;

    third->data = 65;
    third->next = fourth;

    fourth->data = 75;
    fourth->next = NULL;
    printf("before deletion\n");
    linkedlistTraversal(head);
    head = deletionatnode(head, 55);
    printf("after deletion\n");
    linkedlistTraversal(head);
}