/**
 * AUTHOR : SAKIB SIDDIQI SUTPO;
 * ID : 212902026;
 * mail : sakibsiddiqi15@gamil.com , sakibsiddiqisupto@gmail.com.
 */
#include <stdio.h>

void get_binary_search_form_recursive(int arr[], int start, int end, int data)
{
    if (start <= end)
    {
        if (arr[start] == data)
        {
            printf("==> %d is at %d position", data, start);
        }
        else
        {
            get_binary_search_form_recursive(arr, start += 1, end, data);
        }
    }
    else
    {
        printf(" ==> %d is not found.", data);
    }
}

int main()
{

    int arr_size, mid, start, end, data, recurs = 0;
    // get arr_size from user.
    printf("\tENTER ARRAY LENGTH\t:\t");
    scanf("%d", &arr_size);
    printf("\n");
    // defining array
    int arr[arr_size];
    // insert elements is the arr;
    int i = 0;
    while (i < arr_size)
    {
        printf("\tENTER arr[%d]\t:\t", i);
        scanf("%d", &arr[i]);
        printf("\n");
        i++;
    }
    printf("\n<>-------------<>\n<>-------------<>\n");
    printf("\tdata\t:\t");
    scanf("%d", &data);
    printf("\n");

    mid = (0 + arr_size) / 2;

    if (arr[mid] == data)
    {
        recurs = 0;
        printf("%d is at %d position", data, mid);
    }
    else if (data < arr[mid])
    {
        start = 0;
        end = mid - 1;
        recurs = 1;
    }
    else
    {
        start = mid + 1;
        end = arr_size - 1;
        recurs = 1;
    }

    if (recurs)
    {
        get_binary_search_form_recursive(arr, start, end, data);
    }

    return 0;
}