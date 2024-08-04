#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n,int k)
{
    int maxvalue[3]={0}, aux[3]={0};
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
      {
        if(i<=j)
        continue;
        aux[0]= i&j;
        aux[1]= i|j;
        aux[2]= i^j;
        for(int l=0;l<3;l++)
        {
         if(aux[l]<k)
         {
          if(aux[l]>maxvalue[l])
          {
              maxvalue[l]=aux[l];
          }
             
         }   
            
        }
      }
    }
    printf("%d\n%d\n%d",maxvalue[0],maxvalue[1],maxvalue[2]);
}

int main()
{
int n, k;

   scanf("%d %d",&n,&k);
   calculate_the_maximum(n,k);
   
   return 0;
}
