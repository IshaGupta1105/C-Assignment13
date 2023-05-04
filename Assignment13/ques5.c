//write a recursive function to calculate sum of digit of given  numbers
#include<stdio.h>
int sum(int n)
{
    if(n%10==n)
      return n;
    else
      return (n%10)+sum(n/10);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The sum of digit is %d.",sum(n));
    return 0;
}