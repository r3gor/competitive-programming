# for i in (input().split()):
#   print(chr(int(i)), end='')

def convertToASCII(N):
    while (N > 0):
        d = N % 10
        print(d, "(" + str(d + 48) + ")")
        N = N // 10
for i in (input().split()):
  print(convertToASCII(i), end='')

