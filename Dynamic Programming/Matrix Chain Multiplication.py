def matrix_chain_multiplication(dimensions):
    n = len(dimensions) - 1 
    dp = [[0] * n for _ in range(n)]  
    
    for i in range(n):
        dp[i][i] = 0
    
    for c_l in range(2, n + 1):
        for i in range(n - c_l + 1):
            j = i + c_l - 1
            dp[i][j] = float('inf')
            for k in range(i, j):
                cost = dp[i][k] + dp[k + 1][j] + dimensions[i] * dimensions[k + 1] * dimensions[j + 1]
                dp[i][j] = min(dp[i][j], cost)
    
    return dp[0][n - 1] 

dimensions = [3, 2, 3, 5, 6]
result = matrix_chain_multiplication(dimensions)
print("Minimum scalar multiplications:", result)
