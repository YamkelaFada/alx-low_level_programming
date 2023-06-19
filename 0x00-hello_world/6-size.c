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

	printf("The size of a char:\n ", sizeof(w));
	printf("The size of an int:\n ", sizeof(x));
	printf("The size of long int:\n ", sizeof(y));
	printf("The size of long long int:\n ", sizeof(z));
	printf("The size of float:\n ", sizeof(f));
	return (0);
}

