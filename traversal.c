
// #include <stdio.h>
// #include <stdlib.h>
 
// struct Node
// {
//     int data;
//     struct Node *next;
// };
 
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
 
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;
 
//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));
 
//     // Link first and second nodes
//     head->data = 7;
//     head->next = second;
 
//     // Link second and third nodes
//     second->data = 11;
//     second->next = third;
 
//     // Link third and fourth nodes
//     third->data = 41;
//     third->next = fourth;
 
//     // Terminate the list at the third node
//     fourth->data = 66;
//     fourth->next = NULL;
 
//     linkedListTraversal(head);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };
// void linkedlistTraversal(struct node *ptr){
//     while(ptr!=NULL){
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//     }
// }

// int main(){
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;

//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     fourth=(struct node *)malloc(sizeof(struct node));

//     head->data=33;
//     head->next=second;

//     second->data=44;
//     second->next=third;

//     third->data=33;
//     third->next=fourth;
     
//     fourth->data=55;
//     fourth->next=NULL;

//     linkedlistTraversal(head);
//     return 0;
// } 



#include <stdio.h>
#include <stdlib.h>
#define MAX 100

// Define a structure for the stack
struct Stack {
    int items[MAX];
    int top;
};

// Initialize the stack
void initializeStack(struct Stack* stack) {
    stack->top = -1;
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX - 1;
}

// Push operation
void push(struct Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->items[++stack->top] = value;
}

// Pop operation
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->items[stack->top--];
}

// Peek operation (view the top element)
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->items[stack->top];
}

// Function to print all elements in the stack
void printStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    struct Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printStack(&stack);  // Print all elements in the stack

    pop(&stack);
    printf("After pop:\n");
    printStack(&stack);

    return 0;
}
