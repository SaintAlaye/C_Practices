#include <stdio.h>
#include <stdlib.h>

/**
  * main - print hello world
  * Return: 0 (EXIT_SUCCESS)
  */
int main(void)
{
	if (puts("Hello, World!") == EOF){
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
