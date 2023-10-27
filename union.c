#include<stdio.h>

int main(){

int n;
printf("Enter the size of array1:");
scanf("%d",&n);
int a[10];
printf("Enter the elements of array1:");
for (int i = 0; i < n; i++)
{
    scanf("%d",&a[i]);
}
int m;
printf("Enter the size of array2:");
scanf("%d",&m);
int b[10];
printf("Enter the elements of array2:");
for (int i = 0; i < m; i++)
{
    scanf("%d",&b[i]);
}
int c[50];
int o=0,j=0,k=0;
while (o<n && j<m)
{
if (a[o]<b[j])
{
    c[k]=a[o];
    o++;
    k++;
}
else if(a[o]==b[j])
{
c[k]=a[o];
 k++;
 o++;
 j++;
}
else
{c[k]=b[j];
j++;
k++;}
}
if (n<m)
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

        while (o<n)
        {
            c[k]=a[o];
            o++;
            k++;

        }
        
    }
    



for (int l = 0; l <k; l++)
{
    printf("%d",c[l]);
}
}