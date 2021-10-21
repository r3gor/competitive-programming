n = int(input())
first = True
while(n):
    if not first: 
        print()
    l = [" "]*n
    max_len = 0
    for i in range(n):
        l[i] = " ".join([e for e in input().split(" ") if e!=""])
        if (len(l[i])>max_len): max_len=len(l[i])
    for line in l:
        print(" "*(max_len-len(line)) + line)
    first = False
    n = int(input())