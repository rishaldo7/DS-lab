#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0,num;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    num=n*(n+1)/2-sum;
    printf("Missing number is %d",num);

}