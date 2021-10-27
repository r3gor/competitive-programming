raw = input().split()
N=int(raw[0]) 
M=int(raw[1])
l = [0 for i in range(N)]
raw = input().split()
for i in raw:
  x = int(i)
  l[x-1] += 1

for i in range(M):
  print(str(i+1)+':', l[i])

