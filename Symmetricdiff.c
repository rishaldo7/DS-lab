#include<stdio.h>

void main()
{
    int a[10],b[10],c[10],m,n,i,j,k,count=0;
    printf("Enter size of first and second arrays");
    scanf("%d%d",&m,&n);
    printf("Enter first array");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter second array");
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);

    printf("First array is:\n");
    for(i=0;i<m;i++)
        printf("%d ",a[i]);
    printf("\n");

    printf("Second array is:\n");
    for(j=0;j<n;j++)
        printf("%d ",b[j]);
    printf("\n");

    i=0;
    j=0;
    k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
            count++;
        }
        else if(a[i]==b[j])
        {
            i++;
            j++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
            count++;
        }
    }
    while(j<n)
        {
            c[k]=b[j];
            k++;
            j++;
            count++;
        }
    
    while(i<m)
        {
            c[k]=a[i];
            k++;
            i++;
            count++;
        }
    
    printf("Set symmetric difference is:\n");
    for(k=0;k<count;k++)
        printf("%d ",c[k]);
}
