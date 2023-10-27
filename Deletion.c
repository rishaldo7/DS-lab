#include<stdio.h>
int main(){
    int a[10],n,i,element;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element which is to be deleted: ");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(a[i]==element){
            for(;i<n;i++)
            {
                a[i]=a[i+1];
                a[i+1]=a[i+2];
            }
        }
    }
    printf("Array element are: ");
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}