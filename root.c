#include<stdio.h>
#include<math.h>
 int gcd(int a, int b){
    int temp;
    if(b==0){
      return a;
     
    }
    temp=b;
    return gcd(temp,a%b);
    

 }
 int main()
 {
   int a,b;
   printf("enter the two numbers :");
   scanf("%d %d",&a,&b);
   printf("the GCD of %d & %d is %d \n",a,b,gcd(a,b));  
 }