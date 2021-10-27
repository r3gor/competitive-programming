m, n = map(int, input().split())
d = {}
for i in range(m):
  vals = map(int, input().split())
  for v in vals:
    if v in d.keys():
      d[v]+=1 
    else:
      d[v]=1
ans_idx = [_ for _ in d.keys()]
ans_idx.sort()
ans = [d[i] for i in ans_idx]
print(" ".join(map(str, ans)))