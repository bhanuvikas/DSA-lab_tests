#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int fact[400]={0},i,j,prod,n,carry=0,size=1;
  scanf("%d", &n);
  fact[0]=1;
  for(i=1;i<=n;i++)
  {
    for(j=0;j<size;j++)
    {
      prod = i*fact[j]+carry;
      fact[j] = prod%10;
      carry = prod/10;
    }
    while(carry)
    {
      fact[size++] = carry%10;
      carry/=10;
    }
  }
  for(i=size-1;i>=0;i--)
  {
    printf("%d", fact[i]);
  }
  printf("\n");
  return 0;
}
