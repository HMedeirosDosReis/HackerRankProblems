#
# Complete the 'twoArrays' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY A
#  3. INTEGER_ARRAY B
#

def twoArrays(k, A, B):
    missing = 0 # how much am I missing?
    canComplete = 0 #how much can I complete?
    for i in range(0,len(A)):
        missing+=k-A[i]#I'm missing the total quantity minus what I have
        #update a running total
        canComplete+=B[i]#I have the sum of all my second Array
    if(missing<0):# if this number is negative
        missing=-missing#make it possitive
    if(missing<=canComplete):#if i can complete more than what im missing
        return "YES"
    return "NO"