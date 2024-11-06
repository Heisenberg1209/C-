#include<stdio.h>
int main()
{
  int arr[15],i,sum=0,avg;
  for(i=0;i<=14;i++)
  {
    printf("enter the number : \n");
    scanf("%d",&arr[i]);
    
  }
for(i=0;i<=14;i++)
{
    printf("the %d element of the array is %d \n",i,arr[i]);
     sum=sum+arr[i];
}
  printf("the sum of the element in array is : %d\n",sum);
   avg= sum/15;
  printf("the average of the element in array is : %d\n",avg);
}