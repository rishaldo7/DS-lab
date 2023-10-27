#include<stdio.h>

int power(int n,int p,int a)
{
    
    if (p==0)
    {
        return a;

    }
    
    else
    a=n*a;
    return power((n),(--p),a);
}

int main()
{
    int answer=1;
    int p=5;
    int n=8;

    printf("%d",power(n,p,answer));
}