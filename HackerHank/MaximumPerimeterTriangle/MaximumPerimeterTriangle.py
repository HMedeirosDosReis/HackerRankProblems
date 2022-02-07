#
# Complete the 'maximumPerimeterTriangle' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY sticks as parameter.
#

def maximumPerimeterTriangle(sticks):
    sticks.sort()
    sticks.reverse()
    for i in range(0,len(sticks)-2):
        if (sticks[i + 2] + sticks[i + 1] <= sticks[i]):
            dummy=0
        else:
            ans = [sticks[i + 2],sticks[i + 1],sticks[i]]
            return ans
    ans = [-1]
    return ans