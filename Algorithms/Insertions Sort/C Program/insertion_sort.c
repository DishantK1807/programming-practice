/*
Insertion Sort Program in C Programming Language

The code is based on CS50 library, from Harvard CS50 Course, Introduction to Computer Science

By: Dishant Khanna [dishant.khanna1807@gmail.com, dishant@dishantkhanna.me]
*/

#include<cs50.h>
#include<stdio.h>

void insertion_sort(int *arr, int arr_size);  //declaration of bubble sort function
void swap(int *element, int *array_item);  // declaration of swap function
void print_array(int *arr, int arr_size);  // declaration of print array function
void take_array(int *arr, int arr_size);  // declaration of take_array function to get array as input

int main(void)
{
    int a[10];
    int size = get_int("Enter Size of the Array: ");
    take_array(a, size);
    printf("sorted array: \n");
    insertion_sort(a, size);
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
       arr[i] = get_int();
}

/*
Function To perform Selection Sort

Args: Array, Size of Array
*/
void insertion_sort(int *arr, int arr_size)
{
    int j =0,key = 0;
    for (int i = 1; i < arr_size; i++)
    {
        j = i - 1;
        key = arr[i];
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}