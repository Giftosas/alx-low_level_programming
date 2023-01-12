#include "lists.h"

/**
 * is_palindrome - checks if a number is palindrome
 * @num: the number
 *
 * Return: 1 if number is palindrome and 0 if not
 */
int is_palindrome(unsigned long int num)
{
	int *arr, i, length;
	unsigned long int n = num;

	for (length = 0; n != 0; length++, n /= 10)
		;
	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (0);

	n = num;
	for (i = 0; n != 0; n /= 10, i++)
		arr[i] = n % 10;

	for (i = 0; i < (length / 2); i++)
	{
		if (arr[i] != arr[length - 1 - i])
			return (0);
	}

	free(arr);

	return (1);
}

/**
 * main - finds the largest palindrome made from the
 * product of two 3-digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;
	unsigned long int product, largest = 0;

	for (i = 100; i < 1000; i++)
	{
		for (j = 100; j < 1000; j++)
		{
			product = i * j;

			if (is_palindrome(product) == 1 && product > largest)
				largest = product;
		}
	}
	printf("%ld\n", largest);

	return (0);
}
