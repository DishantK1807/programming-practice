#include<cs50.h>
#include<stdio.h>

void selection_sort(int *arr, int arr_size);
void swap(int *element, int *array_item);
void print_array(int *arr, int arr_size);
void take_array(int *arr, int arr_size);

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
       scanf("%i ", &arr[i]);
}

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