#include<stdio.h>

int fact( int n, int f)
{
    if (n==0 || n==1)
    {
        return f;
    }
    return fact((n-1), n*f);
}

int main()
{
    int n;
    printf("Enter the number - ");
    scanf("%d",&n );

    printf("Factorial of %d is %d",n,fact(n,1));
}

