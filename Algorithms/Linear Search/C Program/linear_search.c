/*
Linear Search Program in C Programming Language

The code is based on CS50 library, from Harvard CS50 Course, Introduction to Computer Science

By: Dishant Khanna [dishant.khanna1807@gmail.com, dishant@dishantkhanna.me]
*/

#include<cs50.h>
#include<stdio.h>

void take_array(int *arr, int arr_size);  //declaration for Get array input function
int linear_search(int element, int *arr, int size);  //declaration for linear search function

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
Function to implement linear search
Args: Element, Array, Size of array
*/
int linear_search (int element, int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
            return i;
    }

    return 0;

}