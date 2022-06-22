/*
    Author : Sakib Siddiqi Supto
    ID : 212902026
    gmail : sakibsiddiqi15@gmail.com.
    Student of BSc. in CSE at Green University of Bangladesh
*/




#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void break_line(int count)
{
    int _size = count || 1;
    int i = 0;

    while (i < _size)
    {
        printf("\n");
        i++;
    }
}

int main()
{
    // CREATE ROOT ARRAY & INSERT VALUES;
    int _root_arr_length;
    printf("⭐ ENTER A INTEGER : ");
    scanf("%d", &_root_arr_length);
    break_line(2);
    int _root_arr[_root_arr_length];
    int i = 0;
    while (i < _root_arr_length)
    {
        printf("📝 ENTER VALUE FOR ARRAY[%d] : ", i);
        scanf("%d", &_root_arr[i]);
        break_line(1);
        i++;
    }

    /* ----------------------------------- */
    /* ---------------INSERT-------------- */
    /* ----------------------------------- */
    int _insert_arr_length = _root_arr_length + 1;
    int _insert_arr[_insert_arr_length];
    int _insert_at;
    int _new_entry;

    while (true)
    {

        system("clear");
        system("cls");

        break_line(2);

        printf("\n🎯------ INSERT ------🎯\n");
        break_line(2);
        printf("✍ INSERT POSITION : ");
        scanf("%d", &_insert_at);
        break_line(2);
        printf("✍ INSERT VALUE : ");
        scanf("%d", &_new_entry);
        if (_insert_at >= _insert_arr_length)
        {
            printf("if");
            system("clear");
            system("cls");
            continue;
        }
        else
        {
            break;
        }
    }
    break_line(2);

    int m = 0;
    while (m < _insert_arr_length)
    {
        if (m == _insert_at)
        {
            _insert_arr[m] = _new_entry;
        }
        else if (m < _insert_at)
        {
            _insert_arr[m] = _root_arr[m];
        }
        else
        {
            _insert_arr[m] = _root_arr[m - 1];
        }
        m++;
    }

    printf("\n🎯 ROOT ARRAY : [");

    int k = 0;
    while (k < _root_arr_length)
    {
        printf("   %d   ", _root_arr[k]);
        k++;
    };
    printf("]");
    break_line(2);

    int j = 0;
    printf("🎯 INSERTED ARRAY : [ ");
    while (j < _insert_arr_length)
    {
        printf("  %d  ", _insert_arr[j]);
        j++;
    }
    printf(" ]\n\n-----------------------------------");

    /* ----------------------------------- */
    /* ----------Delete By Index---------- */
    /* ----------------------------------- */

    int _delete_index;
    int _deleted_array[_root_arr_length];
    break_line(6);
    printf("🎯 ----- DELETE BY INDEX -----");
    break_line(2);

    printf("✍ INDEX TO BE DELETE : ");
    scanf("%d", &_delete_index);
    break_line(1);
    int l = 0;

    while (l < _insert_arr_length)
    {
        if (l != _delete_index)
        {

            if (l < _delete_index)
            {
                _deleted_array[l] = _insert_arr[l];
            }
            else
            {
                _deleted_array[l-1] = _insert_arr[l];
            }
        }

        l++;
    }

    // DISPLAY ALL RESULT --->
    int _root_loop = 0, _insert_loop = 0, _delete_loop = 0;
    break_line(4);
    printf("🎯-----------<RESULT>-----------🎯");
    break_line(2);

    // SHOW ROOT ARRAY
    printf(" 🏁 ROOT : [");
    while (_root_loop < _root_arr_length)
    {
        printf("   %d   ", _root_arr[_root_loop]);
        _root_loop++;
    }
    printf("]");
    break_line(1);
    // SHOW INSERT ARRAY
    printf(" 🏁 INSERT : [");
    while (_insert_loop < _insert_arr_length)
    {
        printf("   %d   ", _insert_arr[_insert_loop]);
        _insert_loop++;
    }
    printf("]");
    break_line(1);
    // SHOW DELETE ARRAY
    printf(" 🏁 DELETE : [");
    while (_delete_loop < _root_arr_length)
    {
        printf("   %d   ", _deleted_array[_delete_loop]);
        _delete_loop++;
    }
    printf("]");
    break_line(1);

    return 0;
};