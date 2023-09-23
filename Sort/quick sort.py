

def quicksort(arr):
    stack = []
    stack.append((0, len(arr) - 1))
    while stack:
        low, high = stack.pop()
        if low >= high:
            continue
        pivot = partition(arr, low, high)
        stack.append((low, pivot - 1))
        stack.append((pivot + 1, high))
        if arr == sorted(arr):
            return

def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1
    for j in range(low, high):
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

arr = [2,1,0,4,0,2,0,2,2,2,0]
print("Main ID:", arr)
quicksort(arr)
print("Sorted ID:", arr)