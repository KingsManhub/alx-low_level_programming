#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;

   printf("Enter a character: ");
   scanf("%c", &c);
   printf("%c : %d \n", c, _isupper(c));

   return (0);
}

int _isupper(int c)
{
    if(c>=48 && c<= 57)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
