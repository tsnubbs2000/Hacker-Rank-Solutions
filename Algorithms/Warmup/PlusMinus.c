#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, pos, neg, zer;
    double fraction;
    scanf("%d",&n);
    int arr[n];
    pos = 0;
    neg = 0;
    zer = 0;

    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
       //printf("%d ", arr[arr_i]);

       if(arr[arr_i] == 0)
       {
       		zer++;
       }

       else if(arr[arr_i] < 0)
       {
       		neg++;
       }

       else
       {
       		pos++;
       }
    }

    //printf("%d %d %d", pos, neg, zer);

    fraction = (double)pos / (double)n;
    printf("%1.6lf\n", fraction);
    fraction = (double)neg / (double)n;
    printf("%1.6lf\n", fraction);
    fraction = (double)zer / (double)n;
    printf("%1.6lf\n", fraction);

    return 0;
} 