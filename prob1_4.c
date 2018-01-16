#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encode(char *str, int size)
{
  int i,j;
  for(i=0;i<size;i++)
  {
    if(str[i+1]==' ' || str[i+1]=='\0')
    {
      for(j=i; str[j]!=' ' && j>=0 ;j--)
      {
        printf("%c", (str[j]-'a'+3)%26+'a');
      }
      printf(" ");
    }
  }
  printf("\n");
}

void decode(char *str, int size)
{
  int i,j;
  for(i=0;i<size;i++)
  {
    if(str[i+1]==' ' || str[i+1]=='\0')
    {
      for(j=i; str[j]!=' ' && j>=0 ;j--)
      {
        printf("%c", (str[j]-'a'-3+26)%26+'a');
      }
      printf(" ");
    }
  }
    printf("\n");
}

int main()
{
  int size=0,en,i;
  char *str = (char *)malloc(sizeof(char));
  char ch;
  printf("Enter 1 to encode or 0 to decode and then enter the string: ");
  scanf("%d ", &en);
  for(i=0; ;i++)
  {
    scanf("%c", &ch);
    if(ch!='\n')
    {
      str[i]=ch;
      size++;
      //printf("hello\n");
      str = (char *)realloc(str, size+1);
    }
    else
    {
      str[size]='\0';
      break;
    }
  }
  if(en) encode(str, size);
  else decode(str, size);
  //printf("%s\n", str);
  //printf("%d\n", size);
  return 0;
}
