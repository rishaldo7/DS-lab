#include<stdio.h>
int main(){
    int a[20][20],b[20][20],c[20][20],i,j,m,n;
    printf("Enter row and column of matrix");
    scanf("%d %d",&m,&n);
    printf("Enter the element of first matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of second matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<m;i++){
            for(j=0;j<n;j++){
               c[i][j]=a[i][j]-b[i][j];
               
        }
    }
    printf("Display Subtraction of two matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
    return 0;
}
