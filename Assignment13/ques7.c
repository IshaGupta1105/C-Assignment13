//write a recursive function to calculate HCF of  two numbers.
#include<stdio.h>
int HCF(int n1,int n2)
{
    if(n2==0)
      return n1;
    else
      return HCF(n2,n1%n2);
}
int main()
{
    
    printf("HCF = %d\n\n.",HCF(6,8));
    return 0;
} 