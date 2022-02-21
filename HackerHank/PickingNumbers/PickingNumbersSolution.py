def pickingNumbers(a):
    freq = [0]*101
    for i in range(0,len(a)):
        freq[a[i]]+=1
    maximum = 0
    for i in range(1,101):
        count = freq[i] + freq[i - 1];
        if (count > maximum):
              maximum = count;
    return maximum
    # Write your code here