#include<stdio.h>
int main() {
    int n,space;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
   {
       for(space=n;space>i;space--)
       {
           printf(" ");
       }
       
       for(int j=1;j<=i;j++)
       {
           printf("%d",j);
       }
       printf("\n");
    }
    
}
