#include "search_algos.h"

/**
 * find_val - find the search value recursively
 * @min_index: the minimum index of array
 * @max_index: the maximum index of array
 * @value: the value to be searched for
 * @array: the array to search for value
 * Return: the found index or -1
 */

int find_val(int *arr, size_t min_index, size_t max_index, int value)
{
	size_t i, mid;

	if ( min_index <= max_index) {	
		printf("Searching in array: ");
		for (i = min_index; i <= max_index; i++) {
			if (i < max_index)
				printf("%d, ", arr[i]);
			else
				printf("%d", arr[i]);		
		}
		printf("\n");
		mid = (min_index + max_index) / 2;
		if (arr[mid] == value) {
			return (mid);
		}
		if (arr[mid] < value) {
			min_index = mid + 1;
			return (find_val(arr, min_index, max_index, value));
		}
		if (arr[mid] > value) {
 			max_index = mid - 1;
			return (find_val(arr, min_index, max_index, value));
		}
	}
	return (-1);
}


/**
 * binary_search - searches for a value in a sorted array
 * @array: the array to search for value
 * @size: the size of the array
 * @value: the search value
 * Return: index or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t min, max;
	int index;
	if (!array || size == 0)
		return (-1);
	min = 0, max = size - 1;
	if (size == 1 && array[0] == value)
		return (0);
	index = find_val(array, min, max, value);
	return (index);
}
