#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void insertionSort(int ar_size, int * ar) 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int index, value, temp, iterator, shifts;

	shifts = 0;

	for(index = 1; index < ar_size; index ++)
	{
		value = ar[index];
		temp = index;

		while(ar[temp - 1] > value && temp > 0)
		{
			ar[temp] = ar[temp - 1];
			temp--;
			shifts++;
		}

		ar[temp] = value;
	}

	printf("%d", shifts);
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

