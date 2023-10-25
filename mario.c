#include <stdio.h>
#include <cs50.h>

/**
 * main - a program that prints a grid according to user input
 */

int get_size(void);
void print_grid(int size);

int get_size(void)
{
	int n;
	do
	{
		n = get_int("Size: ");
	}
	while (n < 1);
	return n;
}

void print_grid(int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			printf("#");
		}
		printf("\n");
	}
}

int main(void)
{
	// get the grid size
	int n = get_size();
	
	// print the grid
	print_grid(n);
}
