#include<stdio.h>
int main(){
    int a[10],l1,u1,i,Address;
    printf("Enter lower and upper bound of the array: ");
    scanf("%d%d",&l1,&u1);
    
    int b=&a[0];
    printf("Base Address is %d\n",b);
    printf("n is %d\n",sizeof(int));
    int x;
    printf("Enter the index whose address is to be found out:");
    scanf("%d",&x);
    printf("Address of a[%d] in a[%d:%d] is %d",x,l1,u1,(b+(sizeof(int))*(x-l1)));

}