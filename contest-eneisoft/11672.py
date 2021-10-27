N, M = map(int, input().split())
arr = [int(i) for i in input().split()]

for i in range(M):
  q = input().split()
  if (q[0]=='A'):
    arr[int(q[1])-1] = int(q[2])
  if (q[0]=='C'):
    i = int(q[1])
    j = int(q[2])
    min = max = arr[i-1]
    for x in arr[i:j]:
      if (x<min): min=x
      if (x>max): max=x
    print(min, max)

  
