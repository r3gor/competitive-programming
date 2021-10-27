arr = [[] for i in range(10)]

n = int(input())
for i in range(n):
  a, b = map(int, input().split())
  arr[a].append(b)
  arr[b].append(a)

x = int(input())
arr[x].sort()
print(" ".join(map(str,arr[x])))