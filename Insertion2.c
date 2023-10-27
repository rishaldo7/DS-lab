#include<stdio.h>
int main(){
    int a[10],n,i,element,count=0,position;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array element in sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number which is to be inserted: ");
    scanf("%d",&element);
    i=n-1;
    while(a[i]>element){
        a[i+1]=a[i];
        count++;
        i--;
    }
    position=n-count;
    a[position]=element;
    printf("Array element are: ");
    for(i=0;i<=n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}