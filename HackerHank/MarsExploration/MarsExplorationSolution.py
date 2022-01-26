def marsExploration(s):
    lettersChanged = 0
    i = 0
    while(i < len(s)):
        if('S' != s[i]):
            lettersChanged += 1
        if('O' != s[i+1]):
            lettersChanged += 1
        if('S' != s[i+2]):
            lettersChanged += 1
        i += 3
    return lettersChanged
