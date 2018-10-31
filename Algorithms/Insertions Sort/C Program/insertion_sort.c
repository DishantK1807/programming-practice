#include<cs50.h>
#include<stdio.h>

void insertion_sort(int *arr, int arr_size);
void swap(int *element, int *array_item);
void print_array(int *arr, int arr_size);
void take_array(int *arr, int arr_size);

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

void swap(int *element, int *array_item)
{
    int temp;
    temp = *element;
    *element = *array_item;
    *array_item = temp;
}

void print_array(int *arr, int arr_size)
{
   for (int i = 0; i < arr_size; i++)
       printf("%i ", arr[i]);
}

void take_array(int *arr, int arr_size)
{
    for (int i = 0; i < arr_size; i++)
       arr[i] = get_int();
}

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