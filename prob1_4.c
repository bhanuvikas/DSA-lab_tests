#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encode(char *str, int size)
{
  char *temp = (char *)malloc(sizeof(char));
  char ch;
  int i,j,a=0;
  for(i=0;i<=size;i++)
  	{
    	if(str[i]!=' ' && str[i]!='\0')
    	{
      		temp[a] = str[i];
      		a++;
      		str = (char *)realloc(str, a+1);
    	}
    	else
    	{
      		temp[a]='\0';
      		//printf("%s\n",temp);
      		//printf("%d\n",a);
      		for(j=0;j<a/2;j++)
      		{
        		ch = temp[j];
        		temp[j] = temp[a-j-1];
        		temp[a-j-1] = ch;
      		}
      		for(j=0;j<a;j++)
      		{
            switch (temp[j])
            {
              case 'x':
                temp[j]='a';
                break;
              case 'y':
                temp[j]='b';
                break;
              case 'z':
                temp[j]='c';
                break;
              case 'X':
                temp[j]='A';
                break;
              case 'Y':
                temp[j]='B';
                break;
              case 'Z':
                temp[j]='C';
                break;
              default :
                temp[j]+=3;
            }
      		}
      		printf("%s ",temp);
      		a=0;
      		temp = (char *)realloc(temp, 1);
    	}
  	}
    printf("\n");
}

void decode(char *str, int size)
{
  char *temp = (char *)malloc(sizeof(char));
  char ch;
  int i,j,a=0;
  for(i=0;i<=size;i++)
  	{
    	if(str[i]!=' ' && str[i]!='\0')
    	{
      		temp[a] = str[i];
      		a++;
      		str = (char *)realloc(str, a+1);
    	}
    	else
    	{
      		temp[a]='\0';
      		//printf("%s\n",temp);
      		//printf("%d\n",a);

      		for(j=0;j<a;j++)
      		{
            switch (temp[j])
            {
              case 'a':
                temp[j]='x';
                break;
              case 'b':
                temp[j]='y';
                break;
              case 'c':
                temp[j]='z';
                break;
              case 'A':
                temp[j]='X';
                break;
              case 'B':
                temp[j]='Y';
                break;
              case 'C':
                temp[j]='Z';
                break;
              default :
                temp[j]-=3;
            }
      		}
          for(j=0;j<a/2;j++)
      		{
        		ch = temp[j];
        		temp[j] = temp[a-j-1];
        		temp[a-j-1] = ch;
      		}
      		printf("%s ",temp);
      		a=0;
      		temp = (char *)realloc(temp, 1);
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
