def linear_search(arr, size, element):
    position = 0
    for i in range(size):
        if element == arr[i]:
            position = i

    return position


if __name__ == "__main__":
    size = int(input("Enter Size of the Array:"))
    arr = list()
    for _ in range(size):
        arr.append(int(input()))
    element = int(input("Enter element to search: "))
    position = linear_search(arr, size, element)
    if position:
        print("Element \"{0}\" found at: {1}".format(element, position + 1))
    else:
        print("Element not found!")