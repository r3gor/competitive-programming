y, x = map(int, input().split())
max_len = len(str(x*y)) +1
# print("max_len", max_len)
for i in range(y):
  ini = (i*x+1)
  fin = (i*x+1)+x
  # print(ini, fin)
  arr = [val for val in range(ini, fin)]
  if i%2!=0: arr.reverse() 
  print(("{: >{max_len}}"*x).format(*arr, max_len=max_len))