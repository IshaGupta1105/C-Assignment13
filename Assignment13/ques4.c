//write a recursive function to calculate sum of squares first N natural numbers
#include<stdio.h>
int sum(int n)
{
    if(n==1)
      return 1;
    else
      return n*n+sum(n-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of squares of first %d natural number is %d.",n,sum(n));
    return 0;
}