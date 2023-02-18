#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 48; num_1 < 58; num_1++)
	{
		for (num_2 = 49; num_2 < 58; num_2++)
		{
			for (num_3 = 50; num_3 < 58; num_3++)
			{
				if (num_3 > num_2 && num_2 > num_1)
				{
					putchar(num_1);
					putchar(num_2);
					putchar(num_3);
					if (num_1 != 55 || num_2 != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
