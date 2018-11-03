/*
Linear Search Program in C Programming Language

The code is based on CS50 library, from Harvard CS50 Course, Introduction to Computer Science

By: Dishant Khanna [dishant.khanna1807@gmail.com, dishant@dishantkhanna.me]
*/

#include<cs50.h>
#include<stdio.h>

void take_array(int *arr, int arr_size);  //declaration for Get array input function
void bubble_sort(int *arr, int arr_size);  //declaration for bubble sort function
void swap(int *element, int *array_item);  //declaration for swap function
int binary_search(int *arr, int arr_size, int element);  //declaration for binary search function


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

/*
Function to get array input
Args: Array, Size of array
*/
void take_array (int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
       arr[i] = get_int();
}

/*
Function To perform Bubble Sort

Args: Array, Size of Array
*/
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

/*
Function defination for swapping array elements
Args: Element to swap, Array Element
*/
void swap(int *element, int *array_item)
{
    int temp;
    temp = *element;
    *element = *array_item;
    *array_item = temp;
}

/*
Function to implement binary search
Args: Array, Size of array, Element
*/
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