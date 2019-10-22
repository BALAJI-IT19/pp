
#include<stdio.h>
int main() {
    int n,space;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
   {
       for(int space=1;space<i;space++)
       {
           printf(" ");
       }
       for(int j=n;j>=i;j--)
       {
           printf("%d",j);
       }
       printf("\n");
    }
    
}
