#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  long long int i,c,n,p,ans=1;
  scanf("%lld %lld %lld", &c,&n,&p);
  for(i=0;i<n;i++)
  {
    ans=((ans%p)*(c%p))%p;
  }
  printf("%lld\n", ans);

  return 0;
}
