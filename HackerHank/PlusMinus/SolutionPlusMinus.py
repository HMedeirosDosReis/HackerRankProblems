def plusMinus(arr):
    # Write your code here
    zeros = 0
    pos = 0
    neg = 0
    total = 0
    for i in range(0, len(arr)):
        if(arr[i] == 0):
            zeros += 1
        elif(arr[i] > 0):
            pos += 1
        elif(arr[i] < 0):
            neg += 1
        total += 1
    print(pos/total)
    print(neg/total)
    print(zeros/total)


myArr = [1, 2, 3, 4, 5, 6]
plusMinus(myArr)
