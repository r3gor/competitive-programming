m = int(input())
l = list()
for i in range(m):
    l.append(input())
ll = list()
n = int(input())
ult = 0

def f(n, init):
    if (n==0): return
    skip = 0
    for i in range(init+1, init+n+1+1):
        add = True
        for ch in l:
            if (ch in str(i)): 
                add = False
                skip += 1
        if (add): ll.append(i)
    f(skip, init+n+1)
f(n,0)

print(ll[n]-1)