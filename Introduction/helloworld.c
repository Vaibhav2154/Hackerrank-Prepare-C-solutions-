#include<stdio.h>
int main()
 {
   char c[100];
   scanf("%[^\n]s",&c);
   printf("Hello, World!\n");
   printf("%s",c);
 }
