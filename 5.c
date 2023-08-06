#include <stdio.h>
#include <stdlib.h>

/*check three given integers and return true if one of them
 is 20 or more and less than one of the others */

int mains()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (abs(x - y) == 20 || abs(z - x) == 20 || abs(y - z) == 20 || abs(y - x) == 20 || abs(z - y) == 20 || abs(x - z) == 20)
    {
        printf("one of them is less or more than 20 from one of the others");
    }
    else
        printf("try again");

    return 0;
}
