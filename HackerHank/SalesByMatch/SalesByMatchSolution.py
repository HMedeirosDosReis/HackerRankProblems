#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

def sockMerchant(n, ar):
    freq=[0]*101
    for i in range(0,n): 
        freq[ar[i]]+=1
    ans = 0
    for i in range(0,101):
         ans +=  int(freq[i] / 2)
    return ans