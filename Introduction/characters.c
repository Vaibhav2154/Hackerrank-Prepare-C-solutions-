#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  char c,s[100],sen[100];
  scanf("%c",&c);
  scanf("%s %[^\n]s",&s,&sen);
  printf("%c\n%s\n%s\n",c,s,sen);
  return 0;
}
