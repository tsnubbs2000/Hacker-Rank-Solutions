#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, index, iter;
    int spaces, hash;
    scanf("%d",&n);

    for(index = 0; index < n; index++)
    {
    	spaces = n - 1 - index;
    	hash = index + 1;

    	while(spaces != 0)
    	{
    		printf(" ");
    		spaces--;
    	}

    	/*
    	while(hash != 0)
    	{
    		printf("#");
    		hash--;
    	}
    	*/

    	printf("\n");
    }

    return(EXIT_SUCCESS);
} 
