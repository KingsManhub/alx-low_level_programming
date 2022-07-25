#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	printf("val1: ");
	scanf("%d", &a);
	printf("val2: ");
	scanf("%d", &b);
	printf("%d\n", mul(a, b));
	
	return (0);
}

int mul(int a, int b)
{
	return a*b;
}
