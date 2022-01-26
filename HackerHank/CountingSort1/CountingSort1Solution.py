def countingSort(arr):
    result = [0 for i in range(0, 100)]
    for i in range(0, len(arr)):
        result[arr[i]] += 1
    return result
