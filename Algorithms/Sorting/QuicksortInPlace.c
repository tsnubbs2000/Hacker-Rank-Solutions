#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int * a, int * b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high, int size)
{
	int pivot, index, lowIndex;
	pivot = arr[high];
	lowIndex = low - 1;

	for(index = low; index < high; index++)
	{
		if(arr[index] <= pivot)
		{
			lowIndex++;
			swap(&arr[lowIndex], &arr[index]);
		}
	}

	swap(&arr[lowIndex + 1], &arr[high]);

	for(index = 0; index < size; index++)
	{
		printf("%d ", arr[index]);
	}

	printf("\n");

	return(lowIndex + 1);
}

void quickSort(int arr[], int low, int high, int size)
{
	int partitionIndex;
	int index;

	if(low < high)
	{
		partitionIndex = partition(arr, low, high, size);

		quickSort(arr, low, partitionIndex - 1, size);
		quickSort(arr, partitionIndex + 1, high, size);
	}
}

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int size, pivot;
	int index, lessIndex, greaterIndex;
	scanf("%d", &size);
	int arr[size];

	for(index = 0; index < size; index++)
	{
		scanf("%d", &arr[index]);
	}

	quickSort(arr, 0, size - 1, size);

    return 0;
}
