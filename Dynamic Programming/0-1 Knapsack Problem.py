# 0/1 knapsack problem algorithm

def knapsack(totalWeight, weight, value, totalItem):
    #declare 2-D array in python
    k = [[0 for x in range(totalWeight + 1)] for x in range(totalItem + 1)]
    
    for i in range(totalItem + 1):
        for j in range(totalWeight + 1):
            if i == 0 or j == 0:
                k[i][j] = 0;
            elif weight[i-1] <= totalWeight:
                k[i][j] = max(value[i-1] + k[i-1][j-weight[i-1]],  k[i-1][j])
            else:
                k[i][j] = k[i-1][j]
    
    print(k)
    return k[totalItem][totalWeight]

value = [60, 100, 120]
weight = [10, 20, 30]
totalWeight = 50

totalItem = len(value)

answer = knapsack(totalWeight, weight, value, totalItem)

print(answer)
