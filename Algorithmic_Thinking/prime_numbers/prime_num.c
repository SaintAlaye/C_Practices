#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints all the prime numbers from an input
 * Return: 0
 */

int main(void)
{
	int i, j, N;
	printf("Input the number ?  ");
	scanf("%d", &N);
	int a[N+1];
	for (a[1] = 0, i = 2; i <= N; i++) a[i] = 1;
	for (i = 2; i <= N/2; i++)
		if (a[i])
			for (j = 2; j <= N/i; j++)
				a[i*j] = 0;
	for (i = 1; i <= N; i++)
		if (a[i])
			printf("%4d\n", i);
	printf("\n");
	return 0;
}