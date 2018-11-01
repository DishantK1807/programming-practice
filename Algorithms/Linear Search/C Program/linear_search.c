#include<cs50.h>
#include<stdio.h>


void take_array(int *arr, int arr_size);
int linear_search(int element, int *arr, int size);

int main(void)
{
    int arr[10], position = 0;
    int size = get_int("Enter Size of the array: ");
    take_array(arr, size);
    int element = get_int("Enter Element to search: ");
    position = linear_search(element, arr, size);
    if (position)
    {
        printf("Element: \" %i \" found at position \" %i \" \n", element, position + 1);
    }
    else
        printf("Element not found in the given array");

}

void take_array (int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
       arr[i] = get_int();
}

int linear_search (int element, int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }

    return 0;

}