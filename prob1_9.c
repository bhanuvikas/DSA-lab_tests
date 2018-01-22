#include<stdio.h>
#include<stdlib.h>

int main()
{
  int m,n,p,q,i,j,k,sum=0,temp=0;
  int **a, **b;
  scanf("%d %d", &m, &n);
  a = (int **)malloc(sizeof(int *)*m);
  for(i=0;i<m;i++)
  {
    a[i] = (int *)malloc(sizeof(int)*n);
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  scanf("%d %d", &p, &q);
  b = (int **)malloc(sizeof(int *)*p);
  for(i=0;i<p;i++)
  {
    b[i] = (int *)malloc(sizeof(int)*q);
  }
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
      scanf("%d", &b[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<q;j++)
    {
      for(k=0;k<n;k++)
      {
        temp+=(a[i][k]*b[k][j]);
      }
     
      sum+=temp;
      temp=0;
    }
  }
  printf("%d\n",sum);
  return 0;
}
