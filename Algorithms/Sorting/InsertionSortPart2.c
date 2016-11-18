#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  ar) 
{
	int index, value, temp, iterator;

	for(index = 1; index < ar_size; index ++)
	{
		value = ar[index];
		temp = index;

		while(ar[temp - 1] > value && temp > 0)
		{
			ar[temp] = ar[temp - 1];
			temp--;
		}

		ar[temp] = value;

		for(iterator = 0; iterator < ar_size; iterator++)
		{
			printf("%d ", ar[iterator]);
		}

		printf("\n");
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

	insertionSort(_ar_size, _ar);
	   
	return 0;
}
