#include<stdio.h>
#include<string.h>
void strilowercase(char str[])
{
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A'&& str[i<='Z'])
        str[i]+=32;
    }
}
int main()
{
    char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);
  strilowercase(str);
  printf("\nlower case string : %s",str);

  return 0;
}