#include<stdio.h>

int main() 
{
    int n,m;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       { m=i*j;
       
           printf("%d ",m);
       }
       
      
       printf("\n");
    }
    
}

