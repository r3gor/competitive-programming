n = int(input())
f1 = []
f2 = []

for i in range(n):
  ev = input().split()
  if (ev[0] == 'E'):
    if (ev[1] == '1'): 
      f1.append(ev[2])
    elif (ev[1] == '2'): 
      f2.append(ev[2])

  elif (ev[0] == 'A'):
    if (ev[1] == '1'):
      print(f1.pop(0))
    elif (ev[1] == '2'):
      print(f2.pop())
