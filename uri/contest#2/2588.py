from functools import reduce

while(1):
    try:
        s = input()
    except EOFError:
        break
    m = [0 for i in range(256)]
    for i in s:
        idx = ord(i)
        if (m[idx]): m[idx]=0
        else: m[idx]=1
    ans = reduce(lambda a,c: a+c, m, 0)
    if (ans>0): ans-=1
    print(ans) 