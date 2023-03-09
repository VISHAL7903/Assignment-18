#include<stdio.h>
#include<string.h>
void striuppercase(char str[])
{
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a'&& str[i<='z'])
        str[i]-=32;
    }
}
int main()
{
    char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);
  striuppercase(str);
  printf("\nUppercase string : %s",str);

  return 0;
}