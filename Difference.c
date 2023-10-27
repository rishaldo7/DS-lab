#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a[20],b[20],c[20],i,j,k;
    printf("Enter the size of array 1 and array 2  :");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of array 1 :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array 2:");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if(a[i]>b[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    while(i<n)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    printf("Set Difference is:\n");
    for(i=0;i<k;i++)
    {
    printf("%d ",c[i]);
    }

    i=0;
    j=0;
    k=0;
    while(i<n && j<m)
    {
        if(b[j]<a[i])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else if(b[j]>a[i])
        {
            i++;
        }
        else
        {
            j++;
            i++;
        }
    }
    while(j<m)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    printf("Set Difference is:\n");
    for(i=0;i<k;i++)
    {
    printf("%d ",c[i]);
    }
    return 0;
}