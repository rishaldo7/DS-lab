#include<stdio.h>

int stack[20], n , s, item, top=-1;
void push();
void pop();
void display();
void main()
{
    printf("Enter the capacity of stack - ");
    scanf("%d", &n);
    int choice;
    do
    {
        printf("Enter the choices\n1. Push\n2. Pop\n3. Display\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;

        case 3:
            display();
            break;
        default:
            printf("Enter teh valid choice between 1 and 3.");
        }
    } while (choice<=3);    
}

void push()
{
    if (top>=n-1)
    {
        printf("Overflow.");
    }
    else
    {
        top = top+1;
        printf("\nEnter element to be pushed : ");
        scanf("%d", &item);
        stack[top] = item;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("Underflow.");
    }
    else
    {
        item = stack[top];
        top = top-1;
    }    
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}