#include<stdio.h>
#include<stdlib.h>

int main()
{
  long long int n,count=0;
  scanf("%lld", &n);
  while(n)
  {
    count += (n&1);
    n >>=1;
  }
  printf("%lld\n", count);
  return 0;
}
