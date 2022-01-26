def pangrams(s):
    letters = [None] * 26
    counter = 0
    for i in range(ord('a'), ord('z')+1):
        letters[counter] = i
        counter += 1
    frequency = [0]*26
    containAll = True
    print(frequency)
    for i in range(0, len(s)):
        if(s[i] != ' '):
            frequency[ord(s[i].lower())-ord('a')] += 1
    for i in range(0, 26):
        if(frequency[i] == 0):
            containAll = False
    if(containAll):
        return "pangram"
    return "not pangram"
