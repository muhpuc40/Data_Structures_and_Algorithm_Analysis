def linear(arr,n,x):
    for i in range(0,n):
        if(arr[i]==x):
            return i
    return -1


    
arr=[2,3,4,2,22,11,221,32,23]
x=32
n=len(arr)
result = linear(arr, n, x)
print(result)