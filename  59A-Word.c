#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if (islower(ch))
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}