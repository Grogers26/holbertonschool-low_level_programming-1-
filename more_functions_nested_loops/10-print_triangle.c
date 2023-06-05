#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int i, j;
	
	if (size <= 0)
		printf("\n");
	
	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (i <= size - j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		
		_putchar('\n');
		
		}
	}
}
