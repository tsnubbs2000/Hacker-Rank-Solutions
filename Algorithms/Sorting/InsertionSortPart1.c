#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  ar) 
{
	int temp = ar[ar_size - 1];
	int index, iterator;

	for(index = ar_size - 2; index >= 0; index--)
	{
		if(ar[index] > temp && index > 0)
		{
			ar[index + 1] = ar[index];
		}

		else if(ar[index] > temp && index == 0)
		{
			ar[index + 1] = ar[index];

			for(iterator = 0; iterator < ar_size; iterator++)
			{
				printf("%d ", ar[iterator]);
			}

			printf("\n");

			ar[index] = temp;
			break;
		}

		else
		{
			ar[index + 1] = temp;
			break;
		}

		for(iterator = 0; iterator < ar_size; iterator++)
		{
			printf("%d ", ar[iterator]);
		}

		printf("\n");
	}

	for(iterator = 0; iterator < ar_size; iterator++)
	{
			printf("%d ", ar[iterator]);
	}

	printf("\n");
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
