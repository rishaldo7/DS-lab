#include<stdio.h>
int main(){
    int a[100][100],l1,u1,l2,u2,Address;
    printf("Enter lower and upper bound of the array row: ");
    scanf("%d%d",&l1,&u1);
    printf("Enter lower and upper bound of the array column: ");
    scanf("%d%d",&l2,&u2);
    int b=&a[0][0];
    printf("Base Address is %d\n",b);
    printf("n is %d\n",sizeof(int));
    int i,j;
    printf("Enter the index whose address is to be found out:");
    scanf("%d%d",&i,&j);
    printf("Address of a[%d:%d] in a[%d:%d,%d:%d] according to row major is %d\n",i,j,l1,u1,l2,u2,(b+(sizeof(int))*((i-l1)*(u2-l2+1)+(j-l2))));
    printf("Address of a[%d:%d] in a[%d:%d,%d:%d] according to column major is %d",i,j,l1,u1,l2,u2,(b+(sizeof(int))*((j-l2)*(u1-l1+1)+(i-l1))));
}