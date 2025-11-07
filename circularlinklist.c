#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
};

void linkedlistTraversal(struct node *head){
    struct node *ptr=head;
    // printf("%d\n",ptr->data);
    //  ptr=ptr->next;
    // while(ptr!=head){
    //  printf("%d\n",ptr->data);
    //  ptr=ptr->next;
    // } 
    do{
     printf("%d\n",ptr->data);
     ptr=ptr->next;
    } while(ptr!=head);
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
    return 0;
}