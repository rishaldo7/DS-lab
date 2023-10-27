#include<stdio.h>
int main(){
    int a[10],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Array element are: ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}