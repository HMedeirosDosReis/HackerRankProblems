def countingValleys(steps, path):
    intPath = 0
    walksOnValley = 0
    for i in range(0, steps):
        if(path[i] == 'U'):
            intPath += 1
        elif(path[i] == 'D'):
            intPath -= 1
        if(intPath < 0):
            if(intPath == -1 and path[i+1] == 'U'):
                walksOnValley += 1
    return walksOnValley
