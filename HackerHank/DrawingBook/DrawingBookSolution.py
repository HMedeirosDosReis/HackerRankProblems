#
# Complete the 'pageCount' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER p
#

def pageCount(n, p):
    if(n % 2 == 0):
        return min(int(p/2), int((n - p + 1) / 2))
    return min(int(p/2), int((n - p) / 2))
