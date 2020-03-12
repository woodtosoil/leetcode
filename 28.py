needle="l"
haystack = "helloll"

def st():
    if needle in haystack:
        flag = False
        for i in range(len(haystack)):
            for j in range(len(needle)):
                if haystack[j+i]==needle[j]:
                    flag = True
                    continue
                else:
                    break
            if flag==True:
                print(i)
                return i
                break
    else:
        return -1
st()