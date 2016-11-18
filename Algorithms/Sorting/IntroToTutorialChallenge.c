#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

	int value, size, index, temp;
	scanf("%d %d", &value, &size);

	int array[size];

	for(index = 0; index < size; index++)
	{
		scanf("%d", &temp);
		array[index] = temp;
	}

	index = 0;

	while(array[index] < value)
	{
		index++;
	}

	printf("%d", index);

    return 0;
}
