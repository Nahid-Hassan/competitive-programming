def kmpSearch(txt, pat):
    txtSize = len(txt)
    patSize = len(pat)

    # Create lps[] that will hold the longest prefix suffix
    lps = [0] * patSize
    
    computeLPS(pat, patSize, lps)

    i = 0
    j = 0

    while i < txtSize:
        if pat[j] == txt[i]:
            i = i + 1
            j = j + 1

        if j == patSize:
            print('Found pattern at intdx ' + str(i - j))
            j = lps[j - 1]
        elif i < txtSize and pat[j] != txt[i]:
            if j != 0:
                j = lps[j - 1]
            else:
                i =  i + 1



def computeLPS(pat, patSize, lps):
    len = 0
    
    lps[0] = 0
    i = 1

    while i < patSize:
        if pat[i] == pat[len]:
            len = len + 1
            lps[i] = len
            i = i + 1
        else:
            if len != 0:
                len = lps[len - 1]
            else:
                lps[i] = 0
                i = i + 1

if __name__ == '__main__':
    txt = "AABAACAADAABAABA"
    pat = "AABA"

    kmpSearch(txt, pat)