#include <stdio.h>
#include <stdlib.h>

/*Rotate the elements of a given array in the
left direction and return the updated array*/

int mainq()
{
    int arej[4];
    int arejnov[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arej[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        arejnov[i] = arej[i];
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%d", arejnov[i]);
    }

    return 0;
}
