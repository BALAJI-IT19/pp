#include<stdio.h>

int main() 
{
    int n,space;
    scanf("%d",&n);
    for(int i=5;i>=1;i--)
   {
       for(space=5;space>i;space--)
       { 
           printf(" ");
       }
       
       for(int j=space;j>=1;j--)
       {
           printf("%d",j);
       }
       printf("\n");
    }
    
}
