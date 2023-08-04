#include <stdio.h>

/**
 * main - a program that swap two numbers
 * @a = first number
 * @b = second number
 * Return: 0 - Always true or otherwise fail
 */

// declaring the swap function by referencing the pointer to the variables
void swap(int *pa, int *pb)
{
	int t = *pa; // declaring a temporary variable
	*pa = *pb;
	*pb = t;
	
	printf("swap: a = %d, b = %d\n", *pa, *pb);
}


// the main function
int main(void)
{
	// declaring the variables
	int a = 25;
	int b = 31;

	// printing the initial values
	printf("initial values: a = %d, b = %d\n", a, b);

	// calling the swap function using the address of the variables
	swap(&a, &b);

	// checking whether all the integer have been swap in the main function
	printf("main: a = %d, b = %d\n", a, b);

	return 0;
}
