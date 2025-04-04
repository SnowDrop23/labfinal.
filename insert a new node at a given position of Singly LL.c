#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp = head;
    printf("\nElements of linked list: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

struct node* add_at_position(struct node *head, int count)
{
    struct node *newNode, *temp;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->next = NULL;

    int i = 1, position;
    printf("Enter a position: ");
    scanf("%d", &position);

    if(position < 1 || position > count+1)
    {
        printf("Invalid position.\n");
        return head;
    }
    
    printf("Please enter a data: ");
    scanf("%d", &newNode->data);
    
    if(position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        temp = head;
        while(i < position-1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

int main()
{
    struct node *newNode, *head, *temp;
    head = NULL;
    int choice, count = 0;
    
    printf("Do you want to create a linked list? (0/1) ");
    scanf("%d", &choice);
    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        
        printf("Please enter a data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == 0) head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        count++;
        printf("Do you want to create a new node? (0/1) ");
        scanf("%d", &choice);
    }

    head = add_at_position(head, count);
    display(head);

}
