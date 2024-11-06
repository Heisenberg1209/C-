#include<stdio.h>

void fib(int n, int pre1, int pre2)
{
  if(n<3)
  return;
  int curr= pre1 + pre2;
  pre2= pre1;
  pre1 = curr;

printf("%d\n",curr);
return fib(n-1,pre1,pre2);
}
void printfib(int n)
{
  if(n==1)
  printf("%d\n",0);
  else if (n == 2) 
  printf("%d %d", 0);
  else
  printf("%d\n %d\n",0,1);
  fib(n,0,1);
  return;
}
int main()

{
    printfib(6);
   
    return 0;
}