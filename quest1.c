#include <stdio.h> 
 int stringlength(char s[]) 
 { 
       int i; 
       for(i=0; s[i]!='\0'; i++); 
       return i; 
          
 } 
 int main() 
 { 
      char s[1000];
       int length; 
    
      printf("Enter any string: "); 
     gets(s); 
      length=stringlength(s); 
     printf("Length of '%s'= %d",s,length); 
  
       return 0; 
 }