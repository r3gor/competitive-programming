a, b = input().split()

idx_inter = -1
for idx in range(len(a)):
  if a[idx] in b: 
    idx_inter = idx
    break

band = True
for idx in range(len(b)):
  if (b[idx] == a[idx_inter] and band): 
    print(a)
    band=False
  else: 
    arr = ['.']*len(a)
    arr[idx_inter] = b[idx]
    print("".join(arr))