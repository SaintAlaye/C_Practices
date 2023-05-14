#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/**
 * main - A basic calculator
 * Return: result
 */

int main()
{
	// declaring the variables
	int num1, num2;
	int result;
	char operator[2];
	char calc_again[1];

	while (calc_again[1] = 'y')
	{
		//iterating through the variable
		printf("Please type your first number... ");
		scanf("%d", &num1);
		
		printf("Input the second number ");
		scanf("%d", &num2);
		
		printf("Input the operator ");
		scanf("%1s", operator);

		while (num1 == 0 && num2 == 0 && operator[0] == 0);
	
		if (operator[0] == '+')
		{
			result = num1 + num2;
			printf("%d\n", result);
		}

		else if (operator[0] == '-')
		{
			result = num1 - num2;
			printf("%d\n", result);
		}

		else if (operator[0] == '/')
		{
			result = num1 / num2;
			printf("%d\n", result);
		}

		else if (operator[0] == '*')
		{
			result = num1 * num2;
			printf("%d\n", result);
		}

		else
		{
			printf("Please select an operator\n");
		}

		printf("Do you want to calculate again? y/n... ");
		scanf("%1s", calc_again);

		if (calc_again[0] == 'n')
		{
			printf("Thank you...\n");
			break;
		}

		return 0;
	}
}
