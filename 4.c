#include <stdio.h>
#include <stdlib.h>

/*check if two arrays have the same
 first or last element*/
 
int maint()
{

    int n;
    printf("vnesi golemina na dvata arrays:\n");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];

    printf("Vnesi elementi na prviot array:\n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Vnesi elementi na vtoriot array:\n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (arr1[0] == arr2[0])
    {
        printf("isti see prvite elementi");
    }

    if (arr1[n] == arr2[n])
    {
        printf("isti se vtorite elementi");
        return 0;
    }

    printf("ne se isti try again");

    return 0;
}
