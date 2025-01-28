#include <stdio.h>

int main(){
      int n;
      printf("Enter a numebr:-");
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1)-i;j++){
            int a=j+64;
            char ch=(char)a;
            printf("%c ",ch);
        }
        printf("\n");
      }
     return 0;
}