#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void encode(char *string, int size)
{
  int i,j,count=0;
  char *temp = (char *)malloc(sizeof(char));
  for(i=0;i<size;i++)
  {
    if(string[i]!=' ')
    {
      temp[count]=string[i];
      count++;
      temp = (char *)realloc(temp, count+1);
    }
    else
    {
      temp[count]='\0';
      temp = strrev(temp);
      for(j=0;j<count;j++)
      {
        temp[j]+=3;
      }
      printf("%s ", temp);
      count=0;
      temp = (char *)realloc(temp, 1);
    }
  }
}

void decode(char *string, int size)
{

}

int main()
{
  int key, i, size=0;
  char ch;
  char *string;
  scanf("%d", &key);
  string = (char *)malloc(sizeof(char));
  for(i=0; ;i++)
  {
    scanf("%c", &ch);
    if(ch!='\n')
    {
      string[size] = ch;
      size++;
      string = (char *)realloc(string, size+1);
    }
    else break;
  }
  // 0->decode, 1->encode
  if(key)
  {
    encode(string, size);
  }
  else
  {
    decode(string, size);
  }
  return 0;
}
