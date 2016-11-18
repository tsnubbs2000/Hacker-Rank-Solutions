#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n, index, primDiag, secDiag, secIndex;
    scanf("%d",&n);
    int a[n][n];
    double difference;

    primDiag = 0;
    secDiag = 0;
    secIndex = 0;

    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
          scanf("%d",&a[a_i][a_j]);
       }
    }

    for(index = 0; index < n; index++)
    {
    	secIndex = n - index - 1;
    	primDiag += a[index][index];
    	secDiag += a[index][secIndex];

    	//printf("%d %d\n", primDiag, secDiag);
    }

    difference = primDiag - secDiag;
    difference = fabs(difference);

    printf("%.0lf\n", difference);

    return 0;
}
