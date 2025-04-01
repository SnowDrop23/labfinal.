#include <stdio.h>
#define n 5
int stack[n];
int top = -1;

void push()
{
    int x;
    if(top == n-1) printf("Stack Overflow.\n");
    else
    {
        printf("Please enter a data: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if(top == -1) printf("Stack Underflow\n");
    else
    {
        printf("%d popped out from the stack\n", stack[top]);
        top--;
    }
}

void peek()
{
    if(top == -1) printf("Stack is empty.\n");
    else printf("Top element: %d\n", stack[top]);
    
}

void display()
{
    if(top == -1) printf("Stack is empty.\n");
    else
    {
        printf("Stack elements: ");
        for(int i = top; i >= 0; --i) printf("%d ", stack[i]);
        printf("\n");
    }
}

int main(void) {
    int choice;
    while(1)
    {
        printf("Stack Operations: \n");
        printf("1. push(), 2. pop(), 3. peek(), 4. display(), 5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting program.\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
