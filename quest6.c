#include <stdio.h>
#include <string.h>
void alpha(char str[20]);
int main()
{
    char str[20];
    printf("Enter a String : ");
    gets(str);
    alpha(str);
    return 0;
}
void alpha(char str[20])
{
    int i;
    int alpha = 0;
    int digit = 0;
    for (i = 0; str[i]; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            alpha = 1;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            digit = 1;
        }
    }
    if (alpha == 1 && digit == 1)
    {
        printf("%s : is aplphanumeric", str);
    }
    else
    {
        printf("%s : is not alphanumeric", str);
    }
}
