#include <stdio.h>

/**
 * main - The “Fizz-Buzz test”
 *
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 1 ; x < 101 ; x++)
	{
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
