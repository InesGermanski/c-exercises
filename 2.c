#include <stdio.h>
#include <stdlib.h>

/* create a new array containing the middle elements
from the two given arrays each of length 5*/

int mainc()
{
    int n = 5;
    int arej[n];
    int arej1[n];
    int mid[2];

    printf("Vnesi elementi vo prviot array");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arej[i]);
    }

    printf("Vnesi elementi vo vtoriot array");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arej1[i]);
    }

    mid[0] = arej[n / 2];
    mid[1] = arej1[n / 2];

    for (int i = 0; i < 2; i++)
    {
        printf("%d", mid[i]);
    }
    return 0;
}