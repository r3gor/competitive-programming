while(1):
    try:
        s = input()
    except EOFError:
        break
    prev = 0
    k = []
    for i in range(len(s)):
        if not s[i].isalnum():
            k.append(s[prev:i])
            prev=i+1
    k.append(s[prev:])
    if k[0].isalpha():
        print(int(k[2])-int(k[1]))
    if k[1].isalpha():
        print(int(k[2])-int(k[0]))
    if k[2].isalpha():
        print(int(k[0])+int(k[1]))