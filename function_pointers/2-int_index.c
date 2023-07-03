#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compares values 
 * return: index of the function.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
