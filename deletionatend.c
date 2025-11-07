#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr){
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node *deletionatend(struct node *head){
        struct node *p=head;
        struct node *q=head->next;
        while (q->next!=NULL)
        {
            p=p->next;                         
            q=q->next;
        }
        p->next=NULL;
        free(q);
        return head;
        
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->data=33;
    head->next=second;

    second->data=44;
    second->next=third;

    third->data=33;
    third->next=fourth;
     
    fourth->data=55;
    fourth->next=NULL;
    printf("before deletion\n");
    linkedlistTraversal(head);
    head=deletionatend(head);
     printf("after deletion\n");
    linkedlistTraversal(head);
    return 0;
} 