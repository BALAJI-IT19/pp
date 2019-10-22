#include<stdio.h>

int main() 
{
    char n;
    scanf("%c",&n);
    for(int i='a';i<=n;i++)
   {
       for(int j='a';j<=i;j++)
       { 
       
           printf("%c ",j);
           
       }
       
      
       printf("\n");
    }
    
}

