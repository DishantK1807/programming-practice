/*
Bubble Sort Program in C Programming Language

The code is based on CS50 library, from Harvard CS50 Course, Introduction to Computer Science

By: Dishant Khanna [dishant.khanna1807@gmail.com, dishant@dishantkhanna.me]
*/

#include<cs50.h>
#include<stdio.h>

void selection_sort(int *arr, int arr_size);    //declaration for Selection sort function
void swap(int *element, int *array_item);   //declaration for Swap elements function
void print_array(int *arr, int arr_size);   //declaration for Print array function
void take_array(int *arr, int arr_size);    //declaration for Get array input function

int main(void)
{
    int a[10];
    int size = get_int("Enter Size of the Array: ");
    take_array(a, size);
    printf("sorted array: \n");
    selection_sort(a, size);
    print_array(a, size);
    printf("\n");

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
Function to Print Array elements
Args: Array, Size of array
*/
void print_array(int *arr, int arr_size)
{
   for (int i = 0; i < arr_size; i++)
       printf("%i ", arr[i]);
}

/*
Function to print array
Args: Array, Size of array
*/
void take_array(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
       scanf("%i ", &arr[i]);
}

/*
Function To perform Selection Sort

Args: Array, Size of Array
*/
void selection_sort(int *arr, int arr_size)
{
    int low, temp;
    for(int i = 0; i < arr_size; i++)
    {
        low = i;
        for (int j = i; j < arr_size; j++)
        {
            if (arr[low] > arr[j])
                low = j;
        }
        swap(&arr[low], &arr[i]);
    }
}