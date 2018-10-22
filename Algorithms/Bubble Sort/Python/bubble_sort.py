if __name__ == "__main__":
    arr = []
    arr_size = int(input("Enter Array Size: "))
    for i in range(arr_size):
        arr.append(input())
    for i in range(arr_size):
        for j in range(i,arr_size):
            if arr[i] > arr[j]:
                arr[j], arr[i] = arr[i], arr[j]
    print("sorted array: \n {}".format(arr))