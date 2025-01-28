#include <stdio.h>

int main(){
      int n;
      printf("Enter the number of rows:-");
      scanf("%d",&n);
      int nsp=1;
      int nst=n-1;
      for(int x=1;x<=n;x++){
        printf("%d",x);
      }
      for(int y=n-1;y>=1;y--){
      printf("%d",y);
      }
      printf("\n");
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){//Numbers
            printf("%d",j);  
        }
        for(int k=1;k<=nsp;k++){//spaces
            printf(" "); 
        }
        for(int j=nst;j>=1;j--){//end numbers
            printf("%d",j);
        }
        nst--;
        nsp=nsp+2;
        printf("\n");
      }
     return 0;
}