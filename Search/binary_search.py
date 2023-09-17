arr = [2, 4, 6, 8, 23, 34, 42, 43, 47, 78]
item = 2
left, right = 0, len(arr) - 1

while left <= right:
        middle = (left + right) // 2
        if arr[middle] == item:
            print('Found at index:',middle)
            break
        elif arr[middle] < item:
            left = middle + 1
        else:
            right = middle - 1
else:
        print('Not found')



