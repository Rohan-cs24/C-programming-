#include <stdio.h>
int main(){
      int n;
      printf("Enter the rows:-");
      scanf("%d",&n);
      for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            int a=j+64;
            char ch=(char)a;
            if(i%2!=0){
                printf("%d",j);
            }
            else{
                printf("%c",ch);
            }
        }
        printf("\n");
      }
     return 0;
}
