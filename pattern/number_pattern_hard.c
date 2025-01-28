#include <stdio.h>
int main(){
      int n;
      printf("Enter the number of rows:-");
      scanf("%d",&n);
      int nsp=1;
      int q=(n*2-1)/2+2;
      for(int a=1;a<=n*2-1;a++){
        printf("%d",a);
      }
      printf("\n");
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=q;j<=n*2-1;j++){
            printf("%d",j);
        }
        q++;
        nsp=nsp+2;
        printf("\n");
      }
     return 0;
}