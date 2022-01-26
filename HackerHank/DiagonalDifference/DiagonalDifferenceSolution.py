def diagonalDifference(arr):
    sumDiag1 = 0
    sumDiag2 = 0
    for i in range(0, len(arr)):
        sumDiag1 += arr[i][i]
        sumDiag2 += arr[i][len(arr[i])-i-1]
    difference = abs(sumDiag1-sumDiag2)
    return difference
