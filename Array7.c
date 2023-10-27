#include<stdio.h>

void main()
{
    int a[10],i,n;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Reversed array is\n");
    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}
