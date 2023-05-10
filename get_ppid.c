#include <stdio.h>
#include <unistd.h>
/**
 * main - PPID
 * description: A program that prints the parent process of the running PID
 * Return: 0
 */

int main ()
{
	pid_t my_pid;

	my_pid = getppid();

	printf("%u\n", my_pid);

	return (0);
}
