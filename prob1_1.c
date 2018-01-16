#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPerfect(int len)
{
  int i;
  for(i=0;i<len;i++)
  {
    if(i*i == len) return i;
  }
  return 0;
}

int main()
{
  char str[100], a[100][100];
  int n,i,j,len,k,p=0;
  scanf("%s", str);
  len = strlen(str);
  k = isPerfect(len);
  if(k)
  {
    for(i=0;i<k;i++)
    {
      for(j=0;j<k;j++)
      {
        a[i][j] = str[p++];
        //printf("%d ", a[i][j]);
      }
    }
    for(i=0;i<k;i++)
    {
      for(j=0;j<k;j++)
      {
        if(!(a[i][j]==a[j][i] && a[i][j]==a[k-j-1][k-i-1]))
        {
          printf("NO\n");
          return 0;
        }
      }
    }
    printf("YES\n");
  }
  else printf("NO\n");
  return 0;
}
