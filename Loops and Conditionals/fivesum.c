#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

  int main() 
{
   int n,s=0,i;
   scanf("%d", &n);
   while(n>0)
     {
      i=n%10;
      s=s+i;
      n=n/10;
     }
   printf("%d",s);
   return 0;
}
