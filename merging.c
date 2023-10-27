#include<stdio.h>

int main()
{
    int i=0,j=0,k=0,e,m,n,a[10],b[10],c[10];

    printf("Enter the number of elements of first array - ");
    scanf("%d",&n);
    
    printf("Enter the elements of first array - ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the number of elements in the second array - ");
    scanf("%d",&m);
    
    printf("Enter the elements of second array -");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }

    while (i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        
    
        else if(a[i]==b[j])
        {
            c[k]=a[i];
            k++;
            i++;
            j++;
        } 
        else
        {
            c[k]=b[j];
            j++;
            k++;
        } 
    }  
    if(n<m && j<m)
    {
        while (j<m)
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }

    else
    {
        while (i<m)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        
    }
   
    printf("Merged array - ");
    for(e=0;e<(m+n);e++)
    {
        printf("%d", c[e]);
    }

}