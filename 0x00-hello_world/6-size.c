#include <stdio.h>
/**
 * main - print the size
 * Return: 0
 */
int main(void)
{
	char w;
	int x;
	long int y;
	long long int z;
	float f;

	printf("The size of a char: %lu byte(s)\n ", (unsigned long)sizeof(w));
	printf("The size of an int: %lu byte(s)\n ", (unsigned long)sizeof(x));
	printf("The size of long int: %lu byte(s)\n ", (unsigned long)sizeof(y));
	printf("The size of long long int: %lu byte(s)\n ", (unsigned long)sizeof(z));
	printf("The size of float: %lu byte(s)\n ", (unsigned long)sizeof(f));
	return (0);
}

