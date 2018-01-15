#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct character
{
  char a;
  int count;
};

int is_present(char ch, struct character *aos, int aos_size)
{
  int i;
  for(i=0;i<aos_size;i++)
  {
    if(aos[i].a==ch) return 1;
  }
  return 0;
}

int main()
{
  int i,j,aos_size=0;
  char ch;
  struct character *aos;
  aos = (struct character *)malloc(1*sizeof(struct character));
  for(i=0; ;i++)
  {
    scanf("%c", &ch);
    if(ch!='\n')
    {
      if(!is_present(ch, aos, aos_size))
      {
        aos[aos_size].a=ch;
        aos[aos_size].count=1;
        aos_size++;
        aos = (struct character *)realloc(aos, (aos_size+1)*sizeof(struct character));
      }
      else
      {
        for(j=0;j<aos_size;j++)
        {
          if(aos[j].a==ch)
          {
            aos[j].count+=1;
          }
        }
      }
    }
    else
    {
      for(j=0;j<aos_size;j++)
      {
        printf("%c -> %d\n", aos[j].a, aos[j].count);
      }
      return 0;
    }
  }

}
