#include <cs50.h>
#include <stdio.h>

/**
 * main - a program that compare two number
 */

int main(void)
{
	int x = get_int("WHat's x? ");
	int y = get_int("WHat's y? ");

	if (x < y)
	{
		printf("x is less than y\n");
	}
	else if (x > y)
	{
		printf("x is greater than y\n");
	}
	else
	{
		printf("x is equal to y\n");
	}
}
