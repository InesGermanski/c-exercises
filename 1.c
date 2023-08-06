#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("vnesi n:\n");
    scanf("%d", &n);
    int arr[n];
    int nova[n];

    printf("vnesi elementi vo arrayot:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    nova[0] = arr[0];
    nova[1] = arr[n - 1];

    for (int i = 0; i <= 1; i++)
    {
        printf("%d", nova[i]);
    }

    return 0;
}