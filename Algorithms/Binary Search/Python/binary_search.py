def binary_search(arr, size, element):
    arr.sort()
    start = 0
    end = size - 1
    position = 0
    print(arr)
    for i in range(size // 2):
        if start <= end:
            middle = (start + end) // 2
            if element == arr[middle]:
                position = middle
                break
            else:
                if arr[middle] >= element:
                    end = end - 1
                else:
                    start = start + 1
        else:
            break
    return position


if __name__ == "__main__":
    size = int(input("Enter the size of the array: "))
    arr = list()
    print("Enter array elements: \n")
    for _ in range(size):
         arr.append(int(input()))
    element = int(input("Enter element to search: "))
    position = binary_search(arr, size, element)
    if position:
        print("Element \"{0}\" found at position: \"{1}\" of the sorted array".format(element, position + 1))
    else:
        print("Element not found")