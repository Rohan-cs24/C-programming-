#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows:-");
    scanf("%d",&n);
    int nsp=n+1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        nsp-=2;
    }
    for(int a=1;a<=2*n-1;a++){
        printf("*");
    }
    return 0;
}