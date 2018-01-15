#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int n, i;
  long long int m=10000000000, ans=1;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    ans = (ans*2) % m;
  }
  printf("%lld\n", ans);
  return 0;
}
