#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
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
void linkedlistopposite(struct node *p)
{
    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->prev;
    }
}

int main()
{
    struct node *N1;
    struct node *N2;
    struct node *N3;
    struct node *N4;

    N1 = (struct node *)malloc(sizeof(struct node));
    N2 = (struct node *)malloc(sizeof(struct node));
    N3 = (struct node *)malloc(sizeof(struct node));
    N4 = (struct node *)malloc(sizeof(struct node));

    N1->data = 35;
    N1->prev = NULL;
    N1->next = N2;

    N2->data = 45;
    N2->prev = N1;
    N2->next = N3;

    N3->data = 55;
    N3->prev = N2;
    N3->next = N4;

    N4->data = 65;
    N4->prev = N3;
    N4->next = NULL;
     
    printf("forward traversing\n");
    linkedlistTraversal(N1);
    printf("backward trversing\n");
    linkedlistopposite(N4);
}