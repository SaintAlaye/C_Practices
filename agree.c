#include <cs50.h>
#include <stdio.h>

int main(void)
{
	char o = get_char("Do you agree? ");

	if (o == 'y' || o == 'Y')
	{
		printf("Agreed.\n");
	}
	else if (o == 'n' || o == 'N')
	{
		printf("Not agreed.\n");
	}
}
