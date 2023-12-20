#include "sort.h"
/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n = size;
	size_t flag;
	size_t temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < n - 1; i++)
	{
		flag = 0;
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
