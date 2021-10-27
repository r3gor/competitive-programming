# N = int(input())
# D = [int(i) for i in input().split()]
# print(input())
# D[0]-=1
# arr = []
# for i in range(N-1):
#   while(D[i]!=0):
#     arr.append(int(input()))
#     D[i]-=1
N = int(input())
D = [int(i) for i in input().split()]
print(input())
# D[0]-=1
# 2 1 3 1 2
arr = []
for i in range(N-1):
  arr.append(int(input()))

arr_2 = [False for i in range(len(arr))]
idx = 0
D[0] -= 1
for d in D:
  idx += d
  if (idx>len(arr)-1):
    break
  print(arr[idx])
  arr_2[idx] = True

for i in range(len(arr)-1,-1,-1):
  if not (arr_2[i]):
    print(arr[i])

