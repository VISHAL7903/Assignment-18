#include<stdio.h>
#include<string.h>
int strpari(char str[])
{

    for(int i=0;i<strlen(str)/2;i++)

      if(str[i]!=str[strlen(str)-2-i])
           return 0;

}
  int main()
{
  char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);

  if(strpari(str))
       printf("\nstring is palindrome : ");

   else
      printf("\nstring is not palindrome :");

  return 0;

}