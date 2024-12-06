#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i <num; i++) 
    {
        scanf("%d", arr + i);
    }
    
    
    for(i = num;i>0; i--)
    {
        printf("%d ", *(arr +i-1));
    }    
    return 0;
}
