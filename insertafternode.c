#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr){
         while (ptr!=NULL)
         {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
         }
 }

struct node * insertatnode(struct node *head,struct node *prev,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prev->next;
    prev->next=ptr;
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

    head->data=46;
    head->next=second;

    second->data=56;
    second->next=third;

    third->data=66;
    third->next=fourth;

    fourth->data=76;
    fourth->next=NULL;

    linkedlistTraversal(head);
    head=insertatnode(head,second,86);
    printf("insertatindex\n");
    linkedlistTraversal(head);
    return 0;
}