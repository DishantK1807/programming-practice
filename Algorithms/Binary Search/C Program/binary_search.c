#include<cs50.h>
#include<stdio.h>

void take_array(int *arr, int arr_size);
void bubble_sort(int *arr, int arr_size);
void swap(int *element, int *array_item);
int binary_search(int *arr, int arr_size, int element);


int main(void)
{
    int arr[20];
    int size = get_int("Enter Size of the Array: ");
    printf("Enter array elements: \n");
    take_array(arr, size);
    int element = get_int("Enter element to search: ");
    int position = binary_search(arr, size, element);
    if (position)
    {
        printf("Element \"%i\" found at position: \"%i\" of the sorted array", element, position);
    }
    else
    {
        printf("Element not found");
    }

}


void take_array (int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
       arr[i] = get_int();
}


void bubble_sort(int *arr, int arr_size)
{
    int temp;
    for(int i = 0; i < arr_size - 1; i++)
    {
        for (int j = i; j < arr_size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[j], &arr[i]);
        }
    }
}


void swap(int *element, int *array_item)
{
    int temp;
    temp = *element;
    *element = *array_item;
    *array_item = temp;
}


int binary_search (int *arr, int arr_size, int element)
{
    bubble_sort(arr, arr_size);
    int start = 0, end = arr_size - 1, position = 0, middle = 0;
    for (int i = 0; i < arr_size / 2; i++)
    {
        middle = (start + end) / 2;
        if (start <= end)
        {
            if (arr[middle] == element)
            {
                position = i;
                break;
            }
            else
            {
                if (arr[middle] >= element)
                {
                    end = middle - 1;
                }
                else
                {
                    start = middle + 1;
                }
            }
        }
        else
        {
            break;
        }
    }
    return position;
}