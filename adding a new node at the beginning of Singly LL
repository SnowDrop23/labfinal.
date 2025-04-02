#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};


void display(struct node* head)
{
    struct node *temp = head;
    printf("Elements of a linked list: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node* add_at_beginning(struct node* head)
{
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter a element: ");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;

    return head;
}

int main()
{
    struct node *head, *newNode, *temp;

    head = 0;
    int choice;
    printf("Do you want to create a linked list: ");
    scanf("%d", &choice);
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter a data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;

        if(head == 0) head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to create a new node (0/1) ? ");
        scanf("%d", &choice);
    }
    
    display(head);
    
    head = add_at_beginning(head);
    printf("\nAfter adding at beginning: \n");
    display(head);
}
