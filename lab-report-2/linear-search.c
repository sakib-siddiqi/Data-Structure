#include <stdio.h>

int main()
{

    int arr[10] = {3, 4, 23, 45, 1, 34, 67, 99, 56, 34};
    int find, flag = 0;

    // Presnt the array -->
    int _i = 0;
    printf("ARRAY : [");
    while (_i < 10)
    {
        printf("  %d  ", arr[_i]);
        _i++;
    }
    printf("]\n\n");

    // ---->

    printf("FIND: ");
    scanf("%d", &find);
    printf("\n\n");

    // Linear Search===>

    int _j = 0;
    while (_j < 10)
    {
        if (arr[_j] == find)
        {
            printf("%d is present at %d\n", find, _j);
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
        _j++;
    }

    if (flag)
    {
        printf("\n--> can't find any result .\n");
    }

    return 0;
}