
#include<stdio.h>
int main() {
    int n,space;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
   {
       for(space=1;space<i;space++)
       {
           printf(" ");
       }
       
       for(int j=space;j<=n;j++)
       {
           printf("%d",j);
       }
       printf("\n");
    }
    
}
