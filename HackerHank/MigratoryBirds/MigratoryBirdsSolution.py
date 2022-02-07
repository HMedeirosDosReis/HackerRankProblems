#
# Complete the 'migratoryBirds' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#

def migratoryBirds(arr):
    freq = [0,0,0,0,0,0]
    for i in range (0,len(arr)):
        freq[arr[i]]+=1
    maxi =0
    index =0
    for i in range (0, len(freq)):
        if(maxi<freq[i]):
            maxi=freq[i]
            index=i
    return index