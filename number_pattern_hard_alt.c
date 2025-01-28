#include <stdio.h>

int main(){
      int n;
      printf("Enter the number of rows:-");
      scanf("%d",&n);
      int nsp=1;
      for(int x=1;x<=n*2-1;x++){
        printf("%d",x);
      }
      printf("\n");
      for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n-i;j++){//Numbers
            printf("%d",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){//spaces
            printf(" ");
            a++;
        }
        for(int j=1;j<=n-i;j++){//end numbers
            printf("%d",a);
            a++;
        }
        nsp=nsp+2;
        printf("\n");
      }
     return 0;
}