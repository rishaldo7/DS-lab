#include<stdio.h>

int stack[20], top=-1, a;
void push()
{

    top = top+1;
    stack[top] = a;
}
int main()
{
    int num,i;
    printf("Enter the number to convert - ");
    scanf("%d",&num); 
    for ( i = 0; num > 0; i++)
    {
        a = num%16;
        push();
        num = num/16;
    }
    for ( i = top; i >= 0; i--)
    {
        printf("%x",stack[i]);
    }
    
      
}

