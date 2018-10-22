if __name__ == "__main__":
    arr = []
    arr_size = int(input("Enter Array Size: "))
    for i in range(arr_size):
        arr.append(input())
    for i in range(arr_size):
        low = i
        for j in range(i,arr_size):
            if arr[low] > arr[j]:
                low = j
        arr[low], arr[i] = arr[i], arr[low]
    print("sorted array: \n {}".format(arr))