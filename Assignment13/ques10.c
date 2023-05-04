//Write c program to calculate the power of any number using recursion.
#include<stdio.h>
int power(int n,int m)
{
   
    if(m==1)
      return n;
    else
      return n*power(n,m-1);
}
int main()
{
    printf("Power=%d\n\n",power(3,4));
    return 0;
}