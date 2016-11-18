#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void quickSort(int ar_size, int *  ar) 
{
	int pivot, index, leftIndex, rightIndex, equalIndex;
	int temp, iterator;
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

	if(leftIndex == 2 && left[0] > left[1])
	{
		temp = left[0];
		left[0] = left[1];
		left[1] = temp;

		printf("%d %d ", left[0], left[1]);
	}

	else if(leftIndex == 2 && left[1] > left[0])
	{
		printf("%d %d ", left[0], left[1]);
	}

	else if(leftIndex > 2)
	{
		quickSort(leftIndex, left);
	}

	else
	{
		printf("%d ", left[0]);
	}

	for(iterator = 0; index < equalIndex; index++)
	{
		printf("%d ", equal[index]);
	}

	if(rightIndex == 2 && right[0] > right[1])
	{
		temp = right[0];
		right[0] = right[1];
		right[1] = temp;

		printf("%d %d ", right[0], right[1]);
	}

	else if(rightIndex == 2 && right[1] > right[0])
	{
		printf("%d %d ", right[0], right[1]);
	}

	else if(rightIndex > 2)
	{
		quickSort(rightIndex, right);
	}

	else
	{
		printf("%d ", right[0]);
	}
}

int main(void) 
{
   int ar_size;
   scanf("%d", &ar_size);
   int ar[ar_size], i;
   for(i = 0; i < ar_size; i++) 
   { 
      scanf("%d", &ar[i]); 
   }

   quickSort(ar_size, ar);
   
   return 0;
}
