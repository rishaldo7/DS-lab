#include<stdio.h>

void toh(int n, char A, char B, char C)
{
    if (n==1)
    {
        printf("Move disc %d from %c to %c\n", n,A,C);
        return;
    }
    toh(n-1 , A, C,B );
    printf("Move disc %d from %c to %c\n",n,A,C);
    toh(n-1,B,A,C);
}

void main()
{
    toh(3,'A','B','C');
}