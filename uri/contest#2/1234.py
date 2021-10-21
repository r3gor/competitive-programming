s = list(input())
while(s):
    up = True
    for i in range(len(s)):
        # if s[i]==" " or s[i] in [str(i) for i in range(9)]: continue
        if (s[i].isalpha()):
            if up: s[i]=s[i].upper()
            else : s[i]=s[i].lower()   
            up = not up
    print("".join(s))
    try:
        s = list(input())
    except EOFError:
        break
