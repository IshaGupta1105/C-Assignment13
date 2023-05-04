//write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sum(int n)
{
    if(n==1)
      return 2;
    else
      return 2*n+sum(n-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of first %d even natural number is %d.",n,sum(n));
    return 0;
}