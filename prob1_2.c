#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i,j,query_size=0,sent_size=0,temp_size=0,count=0;
  char a,*query, *sent, *temp;
  query = (char *)malloc(1*sizeof(char));
  sent = (char *)malloc(1*sizeof(char));
  temp = (char *)malloc(0*sizeof(char));
  //scaning query;
  for(i=0; ;i++)
  {
    scanf("%c", &a);
    if(a=='\n') break;
    query[i]=a;
    ++query_size;
    query = (char *)realloc(query, query_size+1);
  }
  query[i] = '\0';
  //scaning sentence;
  for(i=0; ;i++)
  {
    scanf("%c", &a);
    if(a=='\n') break;
    sent[i]=a;
    ++sent_size;
    sent = (char *)realloc(sent, sent_size+1);
  }
  sent[i] = '\0';

  //main logic;
  for(i=0;i<sent_size;i++)
  {
    if(sent[i]!=' ')
    {
      ++temp_size;
      temp = (char *)realloc(temp, temp_size);
      temp[temp_size-1]=sent[i];
    }
    else
    {
      temp[temp_size]='\0';
      if(strcmp(temp, query)==0)
      {
        count++;
      }
      temp = (char *)realloc(temp, 0);
      temp_size=0;
    }
  }
  temp[temp_size]='\0';
  if(strcmp(temp, query)==0)
  {
    count++;
  }

  printf("%d\n", count);

/*
printf("%s\n%s\n", query, sent);
printf("%d %d\n", query_size, sent_size);
*/

return 0;
}
