#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *head){
    struct node *ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct node * linkedlistinsertion(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;
    while(ptr!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
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

    head->data=9;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=7;
    third->next=fourth;

    fourth->data=6;
    fourth->next=head;

    linkedlistTraversal(head);
    head=linkedlistinsertion(head,47);
    linkedlistTraversal(head);

    return 0;
}