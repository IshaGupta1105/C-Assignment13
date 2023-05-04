//write a recursive function to calculate sum of first N  odd natural numbers.
#include<stdio.h>
int sum(int n)
{
    if(n==1)
      return 1;
    else
      return (2*n-1)+sum(n-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of first %d odd natural number is %d.",n,sum(n));
    return 0;
}
