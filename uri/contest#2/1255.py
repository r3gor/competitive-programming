from functools import reduce
n = int(input())
while(n):
    d = [0 for i in range(26)]
    idx_max = 0
    for i in input():
        if not i.isalpha(): continue
        idx=ord(i.lower())-ord('a')
        d[idx]+=1
        if d[idx]>d[idx_max]: idx_max=idx
    ans = []
    for i in range(26):
        if d[i]==d[idx_max]:
            ans.append(chr(ord('a')+i))
    ans.sort()
    print("".join(ans))
    n-=1
