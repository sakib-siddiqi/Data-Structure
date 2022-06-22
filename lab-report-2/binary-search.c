#include <stdio.h>
/*
    ***--> Binary Search <--***
    i. THE ARRAY SHOULD BE SORTED.
*/

int main()
{

    printf("\n\n\n-------->BINARY SEARCH<--------\n\n\n");
    int sorted_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int start, end, mid, data, not_found = 0;

    // Presnt the array -->
    int _i = 0;
    printf("ARRAY : [");
    while (_i < 10)
    {
        printf("  %d  ", sorted_array[_i]);
        _i++;
    }
    printf("]\n\n");

    // ---->

    printf("🔎  SEARCH : ");
    scanf("%d", &data);

    /*
        mid=(first_index + last_index)/2;
    */
    mid = (0 + 9) / 2;

    if (sorted_array[mid] == data)
    {
        printf("%d is available at %d index", data, mid);
        not_found = 0;
    }
    else
    {

        if (data > sorted_array[mid])
        {
            start = mid + 1;
            end = 9; // last index is 9;
        }
        else
        {
            start = 0; // first indes is 0
            end = mid - 1;
        }

        while (start <= end)
        {
            if (sorted_array[start] == data)
            {
                printf("%d is available at %d index", data, start);
                not_found = 0;
                break;
            }
            else
            {
                not_found = 1;
            }
            start++;
        }
    }

    if (not_found)
        printf("\n\nSearch result is empty.\n\n");

    return 0;
}
