#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int i,c,n,p,ans=1;
  scanf("%d %d %d", &c,&n,&p);
  for(i=0;i<n;i++)
  {
    ans*=c;
  }
  printf("%d\n", ans%p);

  return 0;
}
