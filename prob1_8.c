#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char check[8] = {'g','o','o','d','b','y','e','\0'};
  char *str=(char *)malloc(sizeof(char));
  char ch;
  int i,j,flag=0,c=0,size=0;
  for(i=0; ;i++)
  {
    scanf("%c", &ch);
    if(ch=='\n') break;
    else
    {
      str[i]=ch;
      size++;
      str = (char *)realloc(str, size+1);
    }
  }
  str[size]='\0';
  for(i=0;i<7;i++)
  {
    flag=0;
    for(j=c;j<size;j++)
    {
      if(check[i]==str[j])
      {
        c=j+1;
        flag=1;
        break;
      }
    }
    if(!flag)
    {
      printf("NO\n");
      return 0;
    }
  }
  printf("YES\n");

  return 0;
}
