#include<stdio.h>
int main(){
    int a[20][20],b[20][20],c[20][20],i,j,m,n,p,q,S=0,k;
    printf("Enter row and column of first matrix");
    scanf("%d %d",&m,&n);
    printf("Enter the element of first matrix");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter row and column of second matrix");
    scanf("%d %d",&p,&q);
    printf("Enter the element of second matrix");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(n==p){
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                S=0;
                for(k=0;k<n;k++){
                    S=S+a[i][k]*b[k][j];
                }
                c[i][j]=S;
            }
        }
        printf("Display Multiplication of two matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }printf("\n");
    }
    }
    else{
        printf("Matrix Multiplication not possible");
    }
}