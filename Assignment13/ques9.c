//Write c program to count digits of a given number using recursion.
#include<stdio.h>
int countDigit(int n)
{
    static int c=0;
    if(n==0)
      return c;
    else
      c++;
      countDigit(n/10);
}
int main()
{
    printf("Count=%d\n\n",countDigit(123));
    return 0;
}