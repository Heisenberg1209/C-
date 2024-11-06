#include<stdio.h>
 int main()
 {
   int a=24;
   int *ptr=&a;
   int b= *ptr;
   printf("%u\n",&a);
   printf("%u\n",&ptr);
 }