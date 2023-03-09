#include<stdio.h>
#include<string.h>
int strirev(char str[])  
{
    int i;
    int strlength=strlen(str);
    for(i=0;i<strlength/2;i++)
    {
      int temp=str[i];
      str[i]=str[strlength-2-i];
      str[strlength-2-i]=temp;
    }
}
 int main() 
 {   
    char str[50];
     printf("enter a string:"); 
      fgets(str,50,stdin); 
      strirev(str);
            printf("%s",str); 
            return 0;
}