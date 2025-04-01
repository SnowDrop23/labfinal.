#include <stdio.h>
#define n 5
int queue[n];
int front = -1;
int rear = -1;

void enqueue()
{
    int x;
    if(rear == n-1) 
    {
        printf("Queue overflow.\n");
        return;
    }
    
    printf("Please enter a data: ");
    scanf("%d", &x);
    if(front == -1 && rear == -1) 
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1) printf("Queue is empty.\n");
    else
    {
        printf("%d dequeued from the queue.\n", queue[front]);
        front++;
        if(front > rear) front = rear = -1;
    }
}

void peek()
{
    if(front == -1 && rear == -1) printf("Queue is empty.\n");
    else printf("Front element: %d\n", queue[front]);
    
}

void display()
{
    if(front == -1 && rear == -1) printf("Queue is empty.\n");
    else
    {
        printf("Queue elements: ");
        for(int i = front; i < rear+1; ++i) printf("%d ", queue[i]);
        printf("\n");
    }
}

int main(void) {
    int choice;
    while(1)
    {
        printf("Queue Operations: \n");
        printf("1. enqueue(), 2. dequeue(), 3. peek(), 4. display(), 5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
