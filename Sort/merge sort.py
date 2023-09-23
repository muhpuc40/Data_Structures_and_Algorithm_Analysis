def merge(A,p,q,r):
    L = A[:q]
    R = A[q:]
    
    i = j =k =0
    
    #for k in range(p,r+1):
    while k < len(L) and k < len(R):
        if L[i] <= R[j]:
            A[k] = L[i]
            i = i+1
        else:
            A[k] = R[j]
            j = j+1
        k = k+1
    
    while k < len(L):
        A[k] = L[i]
        k+=1
        i+=1
        
    while k < len(R):
         A[k] = R[j]
         k+=1
         j+=1

def mergesort(A,p,r):
    if p < r:
        q = (p+r)//2
        mergesort(A, p, q)
        mergesort(A, q+1, r)
        merge(A, p, q, r)
        
A = [2, 10, 1, 50, 15]
p = 0
r = len(A) - 1
mergesort(A, p, r)
for i in range(len(A)):
    print(A[i], end = ' ')
