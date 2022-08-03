#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an
 * array of integers
 * @array: The array of integers to be checked
 * @size: The size of the array of integers
 * @cmp: A pointer to the function to be used
 * to compare values
 * Return: index of the first element for which 
 * the cmp function does not return or -1 if 
 * no element matches or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
  for (i = 0; i < size; i++)
  {
    if (cmp(array[index]) != 0)
      return (index);
  }
}

return (-1);
}
