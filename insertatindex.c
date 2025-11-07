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

struct node * insertatindex(struct node *head,int data,int index){
   struct node *ptr=(struct node *)malloc(sizeof(struct node));
   struct node *p=head;
   for(int i=0;i<index-1;i++){
    p=p->next;
   }
   ptr->data=data;
   ptr->next=p->next;
   p->next=ptr;
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
    head=insertatindex(head,86,1);
    printf("insertatindex\n");
    linkedlistTraversal(head);
    return 0;
}