def insertion_sort(arr, arr_size):
    j =0
    key = 0
    for i in range(arr_size):
        j = i - 1
        key = arr[i]
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    print("sorted array: {0}".format(arr))

if __name__ == "__main__":
    size = int(input("Enter size of the Array: "))
    arr = list()
    for _ in range(size):
        arr.append(int(input()))
    insertion_sort(arr, size)