#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int arrayNum, rotateNum, posNum;
	int index, iter, tmp, pos;
	scanf("%d %d %d", &arrayNum, &rotateNum, &posNum);
	int arr[arrayNum];

	for(index = 0; index < arrayNum; index++)
	{
		scanf("%d", &arr[index]);
	}

	for(index = 0; index < arrayNum; index++)
	{
		if((index + rotateNum) > arrayNum)
		{

		}
	}

	/*
	for(index = 0; index < rotateNum; index++)
	{
		for(iter = 0; iter < arrayNum - 1; iter++)
		{
			tmp = arr[iter + 1];
			arr[iter + 1] = arr[iter];
		}

		arr[index] = tmp;
	}
	*/

	for(index = 0; index < posNum; index++)
	{
		scanf("%d", &pos);
		printf("%d\n", arr[pos]);
	}

	return(EXIT_SUCCESS);
}
