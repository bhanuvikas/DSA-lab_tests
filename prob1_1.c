#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int isMagicSquare(char **b, int k)
{
  int i,j;
  for(i=0;i<k;i++)
  {
    for(j=0;j<k;j++)
    {
      if(!(b[i][j]==b[j][i]))
      {
        return 0;
      }
    }
  }
  return 1;
}

int main()
{
  int n,i,j,l,k,p=0;
  char a[100];
  char **b;
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    scanf("%s", a);
    l = strlen(a);
    k = sqrt(l);
    if(k*k == l)
    {
      **b = (char**)malloc(sizeof(char*)*k);
      for(i=0;i<k;i++)
      {
        b[i] = (char*)malloc(sizeof(char)*k);
      }
      for(i=0;i<k;i++)
      {
        for(j=0;j<k;j++)
        {
          b[i][j] = a[p++];
        }
      }
      if(isMagicSquare(b,k))
      {
        printf("YES\n");
      }
      else
      {
        printf("NO\n");
      }
    }
    else
    {
      printf("NO\n");
    }
  }
}
