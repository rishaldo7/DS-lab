#include<stdio.h>
int main(){
    int a[10],n,i,element,position;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number which is to be inserted: ");
    scanf("%d",&element);
    printf("Enter the position: ");
    scanf("%d",&position);
    for(i=n;i>=position;i--){
        a[i]=a[i-1];
    }
    a[position]=element;
    printf("Array element are: ");
    for(i=0;i<=n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}