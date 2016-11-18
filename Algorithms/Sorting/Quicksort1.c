#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void partition(int ar_size, int *  ar) 
{
	int pivot, index, leftIndex, rightIndex, equalIndex;
	int left[ar_size];
	int right[ar_size];
	int equal[ar_size];

	leftIndex = 0;
	rightIndex = 0;
	equalIndex = 0;

	pivot = ar[0];

	for(index = 0; index < ar_size; index++)
	{
		if(pivot == ar[index])
		{
			equal[equalIndex] = ar[index];
			equalIndex++;
		}

		else if(pivot > ar[index])
		{
			left[leftIndex] = ar[index];
			leftIndex++;
		}

		else
		{
			right[rightIndex] = ar[index];
			rightIndex++;
		}
	}

	for(index = 0; index < leftIndex; index++)
	{
		printf("%d ", left[index]);
	}

	for(index = 0; index < equalIndex; index++)
	{
		printf("%d ", equal[index]);
	}

	for(index = 0; index < rightIndex; index++)
	{
		printf("%d ", right[index]);
	}
}

int main(void) 
{
	int _ar_size;
	scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i;

	for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
	{ 
	   scanf("%d", &_ar[_ar_i]); 
	}

	partition(_ar_size, _ar);
	
	return 0;
}
